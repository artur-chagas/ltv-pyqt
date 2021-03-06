"""# **Live Telemetry Viewer**
    ## Introdução ao programa
    O LTV é a principal integração entre os sinais transmitidos, em tempo real
    pelo transmissor (hoje LoRa, antigamente, XBee) do carro atual e um computador,
    rodando Windows.
    A versão a que se refere essa documentação é desenvolvida em Python, com interface de usuário
    em Qt (PyQt5 + QML) e com alguns módulos de backend.
    A escolha pela linguagem e o framework de desenvolvimento se devem à facilidade
    de desenvolvimento, a abudância de módulos e ao pouco espaço em disco e poder de processamento
    necessários para gerar o programa final executável ```.exe```.
    
    ## Dependências
    O usuário final não necessita instalar nada, apenas executar o arquivo '''.exe'''.

    O desenvolvedor deve instalar **Python >=3.9**, e em seguida,
    rodar
    ```
    pip install PyQt5 Nuitka pyserial pdoc3 lxml PyQtChart
    ```

    * **PyQt5**: proporciona interface de usuário, desenvolvida em QtQuick/QML
    * **pyserial**: possibilita o acesso às portas serial de forma independente da plataforma
    * **Nuitka**: compila o código fonte ```.py``` em um executável nativo ```.exe``` ou ```.bin``` (Linux).
    Isso facilita a vida do usuário final e produz um código com excelente perfomance, por utilizar
    a correlação entre os objetos do Python e a sua implementação original em C (CPython)
    * **pdoc3**: proporciona a documentação que você está lendo neste momento

    ## Como documentar
    Recomenda-se documentar o projeto logo antes de submeter um release de uma versão nova,
    por meio de comentários nos arquivos .py e pelo uso do módulo pdoc.
"""



#region Python Imports
import sys
import signal
import math
import queue
#endregion

#region qt imports
from PyQt5.QtGui import QGuiApplication, QFontDatabase, QFont
from PyQt5.QtQml import QQmlApplicationEngine
from PyQt5.QtCore import QObject, pyqtSignal, pyqtSlot, Qt, QThread
from PyQt5.QtWidgets import QApplication
#endregion

#region LTV modules imports
import formulaThread as formulaThread
import csvInterpreter as csvInterpreter
import SDtoXML as SDtoXML
#endregion

#region other library imports
import serial
import serial.tools.list_ports
from pandas import read_excel
#endregion

def highLow(high:int, low:int) -> int:
    return 256*high + low

class Bridge(QObject):
    def __init__(self, app, engine):
        QObject.__init__(self)
        self.app = app
        self.engine = engine
        self.serialStringsDict = {}
        self.threadsDict = {}
        self.componentsDict = {}
        self.LTVDict = {}
        self.componentsQueue = queue.Queue()

    callSuccessDialog = pyqtSignal(str) 
    callExceptionDialog = pyqtSignal(str)
    callComponentCreation = pyqtSignal("QVariant")
    setComboBoxModel = pyqtSignal(list)
    setConsoleText = pyqtSignal(str, str)
    setComponentValue = pyqtSignal(int, list)
    setProgress = pyqtSignal(float)
    
    @pyqtSlot(result="QVariant")
    def createComponent(self, params:dict):
        self.callComponentCreation.emit(params)

    @pyqtSlot(QObject,int,int)
    def registerComponent(self, sprite:QObject, code:int, position:int):
        print(code,position,sprite.property("labelText"))
        self.componentsDict[(code,position)] = sprite

    def createLTVDict(self, path:str):
        LTVData = read_excel('LTVData.ods', sheet_name='motec').set_index('CODIGO')
        for i, x in enumerate(LTVData.values):
            if self.LTVDict.get(LTVData.index[i]) is None:
                self.LTVDict[LTVData.index[i]] = [(x[0], x[1], x[2], x[3], x[4])]
            else:
                self.LTVDict[LTVData.index[i]].append((x[0], x[1], x[2], x[3], x[4]))

    @pyqtSlot(str)
    def updateComponents(self, msg:bytearray):
        #USP 20 8 1 4 1 5 1 6 1 7
        #5553501408010401080110011F
        #0x55 0x53 0x50 0x14 0x08 0x01 0x04 0x01 0x08 0x01 0x10 0x01 0x1F
        ints = list(msg)
        cod = ints[3]
        instruction = self.LTVDict.get(cod)
        print(ints)
        if instruction is not None:
            pos = 0
            for t in instruction:
                if t[0] == 1:
                    # equação
                    if t[3] != 0:
                        val = msg[pos+5]*t[3]
                        if t[4] != 0:
                            val += t[4]
                    if self.componentsDict.get((cod, pos)) is not None:
                        print(cod,pos,val)
                        self.componentsDict.get((cod, pos)).setProperty("currentValue", format(val, ".2f"))
                    pos += 1
                # elif t[0] == 2:
                #     if t[3] != 0:
                #         val = highLow(msg[pos+5],msg[pos+6])*t[3]
                #         if t[4] != 0:
                #             val += t[4]
                #     if self.componentsDict.get((cod, pos)) is not None:
                #         print(cod,pos,val)
                #         self.componentsDict.get((cod, pos)).setProperty("currentValue", format(val, ".2f"))
                    # pos += 2
        

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

    @pyqtSlot(str, bool)
    def connectSerial(self, port:str, isReceptor:bool):
        self.componentsDict.get((10,2)).setProperty("maxValue",1475)
        try:
            ##se a porta já possui um thread, não cria um novo
            if port in self.threadsDict:
                pass
            ##caso contrário, cria novo thread e o conecta à porta
            self.threadsDict[port] = formulaThread.SerialThread(self, isReader = True, isReceptor = isReceptor)
            self.serialStringsDict[port] = ""
            self.threadsDict[port].startSerial(port, 115200)
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

    @pyqtSlot(list)
    def startLogConversion(self, p:list):
        """função chamada pelo botão de salvar em PageSave.qml"""
        XMLparams = SDtoXML.XMLParams(
            path=p[0].split("file:///")[1],
            base_sample_rate=p[1],
            date=p[2].replace("/","-"),
            time=p[3].replace(":","-"),
            driver_name=p[4],
            vehicle_id=p[5],
            venue=p[6],
            short_comment=p[7].replace(" ", "-").replace(".sd", "(SD)").replace(".SD", "(SD)")
        )
        thread = formulaThread.LogConversionThread(self, XMLparams)
        thread.start()

class App():
    def __init__(self):
        QApplication.setAttribute(Qt.AA_Use96Dpi)
        self.app = QApplication(sys.argv + ['--style', 'material'])
        # self.app.setAttribute(Qt.)

        fontdatabase = QFontDatabase()
        fontdatabase.addApplicationFont("fonts/Exo2-Regular.ttf")
        exo = QFont("Exo 2",15)
        self.app.setFont(exo)

        self.engine = QQmlApplicationEngine()
        self.bridge = Bridge(self.app, self.engine)

        #responder a KeyboardInterrupt
        signal.signal(signal.SIGINT, signal.SIG_DFL)

        self.engine.rootContext().setContextProperty("bridge", self.bridge)
        self.engine.load("assets/main.qml")

        dictComponents = csvInterpreter.readCSV("components.csv")
        for d in dictComponents:
            self.bridge.createComponent(d)

        self.bridge.createLTVDict("LTVData.ods")
        # self.bridge.updateComponents(bytearray.fromhex('5553501408010401080110011F'))
        
        
        self.engine.quit.connect(self.app.quit)
        self.app.exec()

if __name__ == "__main__":
    LTV_Application = App()
    sys.exit(LTV_Application)
