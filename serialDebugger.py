#region Python Imports
import sys
import signal
import time
#endregion

#region qt imports
from PyQt5.QtGui import QGuiApplication, QFontDatabase, QFont
from PyQt5.QtQml import QQmlApplicationEngine
from PyQt5.QtCore import QObject, pyqtSignal, pyqtSlot
#endregion

#region py-backend imports
import formulaThread as formulaThread
#endregion

#region other imports
import serial
import serial.tools.list_ports
import numpy as np
#endregion

class Bridge(QObject):
    def __init__(self, app, engine):
        QObject.__init__(self)
        self.app = app
        self.engine = engine
        self.serialStringsDict = {}
        self.threadsDict = {}

    callSuccessDialog = pyqtSignal(str) 
    callExceptionDialog = pyqtSignal(str)
    setComboBoxModel = pyqtSignal(list)
    setConsoleText = pyqtSignal(str, str)
    
    @pyqtSlot(str)
    def clearSerialString(self, port:str):
        self.serialStringsDict[port] = ""
        
    @pyqtSlot()
    def getSerialPorts(self):
        serialList = []
        try:
            for t in serial.tools.list_ports.comports():
                serialList += [str(t)]
        except Exception:
            self.callExceptionDialog.emit("Erro ao procurar portas serial")
            serialList = []
        self.setComboBoxModel.emit(serialList)

    @pyqtSlot(str)
    def connectSerial(self, port:str):
        try:
            ##se a porta já possui um thread, não cria um novo
            if port in self.threadsDict:
                pass
            ##caso contrário, cria novo thread e o conecta à porta
            self.threadsDict[port] = formulaThread.SerialThread(self, isReader = False, isReceptor = False)
            # self.serialStringsDict[port] = ""
            # self.threadsDict[port].startSerial(port, 115200)
        except serial.SerialException:
            self.callExceptionDialog.emit("Erro de permissão: a porta provavelmente já está sendo usada")
        except Exception as e:
            print(e)
            self.callExceptionDialog.emit(str(e))
        else:
            print(port +" conectada com sucesso")
            self.callSuccessDialog.emit(port + " conectado com sucesso")

    @pyqtSlot(str)
    def disconnectSerial(self, port:str):
        try:
            if self.threadsDict[port].ser.is_open:
                self.threadsDict[port].closeSerial()
                self.callSuccessDialog.emit(port + " desconectado com sucesso")
        except Exception as e:
            print(e) 
            self.callExceptionDialog.emit(str(e))
    
    @pyqtSlot(str, str)
    def sendSerialHex(self, port:str, msg:str):
        if self.threadsDict[port].ser.is_open and not self.threadsDict[port].thr.stop_condition:
            self.threadsDict[port].send(msg)

    @pyqtSlot(str, str, int)
    def startPlayLog(self, port:str, file:str, period:int):
        file = file.split("file:///")[1]
        SDData = np.fromfile(file, dtype=np.uint8)
        indicesMsg = np.where((SDData == 68) & (np.roll(SDData,-1) == 76))[0][:-1] #retorna array de indices de onde foi encontrado D (68), quando encontra a sequência DL (68 76)
        SDDataSplit = np.split(SDData, indicesMsg)
        self.threadsDict[port].period = period
        self.threadsDict[port].splitMessages = SDDataSplit
        self.threadsDict[port].startSerial(port, 115200)
class App():
    def __init__(self):
        self.app = QGuiApplication(sys.argv + ['--style', 'material'])

        fontdatabase = QFontDatabase()
        fontdatabase.addApplicationFont("fonts/Exo2-Regular.ttf")
        exo = QFont("Exo 2",15)
        self.app.setFont(exo)

        self.engine = QQmlApplicationEngine()
        self.bridge = Bridge(self.app, self.engine)

        #responder a KeyboardInterrupt
        signal.signal(signal.SIGINT, signal.SIG_DFL)

        self.engine.rootContext().setContextProperty("bridge", self.bridge)
        self.engine.load("assets/mainSerialDebugger.qml")

        self.engine.quit.connect(self.app.quit)
        self.app.exec()


if __name__ == "__main__":
    SerialDebugger = App()
    sys.exit(SerialDebugger)

