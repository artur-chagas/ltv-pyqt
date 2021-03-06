/* Generated code for Python module 'serial.tools.list_ports_windows'
 * created by Nuitka version 0.6.16
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_serial$tools$list_ports_windows" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$tools$list_ports_windows;
PyDictObject *moduledict_serial$tools$list_ports_windows;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[220];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("serial.tools.list_ports_windows"));
        constants_created = true;
    }
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$tools$list_ports_windows(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "serial.tools.list_ports_windows");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0e3ebb30f0447488d92695f14b485df7;
static PyCodeObject *codeobj_e06bd0d5ab1a6d8a5e47456c3dca0fe2;
static PyCodeObject *codeobj_5d3e5afc468b0898e11cda2110bac463;
static PyCodeObject *codeobj_a0867b1c17246fabc808099af00e15ab;
static PyCodeObject *codeobj_f66d2e5bcc4fde99ef5967eb25e64ef2;
static PyCodeObject *codeobj_853873b50ebd8e32f741079efea16919;
static PyCodeObject *codeobj_132b50f119eeb2796b3bf38068100023;
static PyCodeObject *codeobj_f080456bece37bb3062093a7f8c6c020;
static PyCodeObject *codeobj_9c06589499fb7521b6c7220be77c49ac;
static PyCodeObject *codeobj_3724822264bd0160ce66343a21e8da73;
static PyCodeObject *codeobj_4c0b78508fd77f89ef5d7c221444cd5d;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[122]; CHECK_OBJECT(module_filename_obj);
    codeobj_0e3ebb30f0447488d92695f14b485df7 = MAKE_CODEOBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[211], mod_consts[212], NULL, 1, 0, 0);
    codeobj_e06bd0d5ab1a6d8a5e47456c3dca0fe2 = MAKE_CODEOBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[211], mod_consts[212], NULL, 1, 0, 0);
    codeobj_5d3e5afc468b0898e11cda2110bac463 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[213], NULL, NULL, 0, 0, 0);
    codeobj_a0867b1c17246fabc808099af00e15ab = MAKE_CODEOBJECT(module_filename_obj, 48, CO_NOFREE, mod_consts[48], mod_consts[214], NULL, 0, 0, 0);
    codeobj_f66d2e5bcc4fde99ef5967eb25e64ef2 = MAKE_CODEOBJECT(module_filename_obj, 66, CO_NOFREE, mod_consts[61], mod_consts[214], NULL, 0, 0, 0);
    codeobj_853873b50ebd8e32f741079efea16919 = MAKE_CODEOBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[150], mod_consts[215], NULL, 3, 0, 0);
    codeobj_132b50f119eeb2796b3bf38068100023 = MAKE_CODEOBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[175], mod_consts[216], NULL, 1, 0, 0);
    codeobj_f080456bece37bb3062093a7f8c6c020 = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[175], mod_consts[216], NULL, 1, 0, 0);
    codeobj_9c06589499fb7521b6c7220be77c49ac = MAKE_CODEOBJECT(module_filename_obj, 419, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[217], NULL, 1, 0, 0);
    codeobj_3724822264bd0160ce66343a21e8da73 = MAKE_CODEOBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[218], NULL, 5, 0, 0);
    codeobj_4c0b78508fd77f89ef5d7c221444cd5d = MAKE_CODEOBJECT(module_filename_obj, 238, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[219], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_serial$tools$list_ports_windows$$$function__5_iterate_comports$$$genobj__1_iterate_comports();


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__1_ValidHandle();


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__2___str__();


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__3___str__();


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__4_get_parent_serial_number(PyObject *defaults);


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__5_iterate_comports();


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__6_comports(PyObject *defaults);


// The module function definitions.
static PyObject *impl_serial$tools$list_ports_windows$$$function__1_ValidHandle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_arguments = python_pars[2];
    struct Nuitka_FrameObject *frame_853873b50ebd8e32f741079efea16919;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_853873b50ebd8e32f741079efea16919 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_853873b50ebd8e32f741079efea16919)) {
        Py_XDECREF(cache_frame_853873b50ebd8e32f741079efea16919);

#if _DEBUG_REFCOUNTS
        if (cache_frame_853873b50ebd8e32f741079efea16919 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_853873b50ebd8e32f741079efea16919 = MAKE_FUNCTION_FRAME(codeobj_853873b50ebd8e32f741079efea16919, module_serial$tools$list_ports_windows, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_853873b50ebd8e32f741079efea16919->m_type_description == NULL);
    frame_853873b50ebd8e32f741079efea16919 = cache_frame_853873b50ebd8e32f741079efea16919;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_853873b50ebd8e32f741079efea16919);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_853873b50ebd8e32f741079efea16919) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_value);
        tmp_compexpr_left_1 = par_value;
        tmp_compexpr_right_1 = mod_consts[0];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 30;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_853873b50ebd8e32f741079efea16919->m_frame.f_lineno = 31;
        tmp_raise_type_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[2]);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 31;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_853873b50ebd8e32f741079efea16919);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_853873b50ebd8e32f741079efea16919);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_853873b50ebd8e32f741079efea16919, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_853873b50ebd8e32f741079efea16919->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_853873b50ebd8e32f741079efea16919, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_853873b50ebd8e32f741079efea16919,
        type_description_1,
        par_value,
        par_func,
        par_arguments
    );


    // Release cached frame if used for exception.
    if (frame_853873b50ebd8e32f741079efea16919 == cache_frame_853873b50ebd8e32f741079efea16919) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_853873b50ebd8e32f741079efea16919);
        cache_frame_853873b50ebd8e32f741079efea16919 = NULL;
    }

    assertFrameObject(frame_853873b50ebd8e32f741079efea16919);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(par_arguments);
    Py_DECREF(par_arguments);
    par_arguments = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(par_arguments);
    Py_DECREF(par_arguments);
    par_arguments = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_serial$tools$list_ports_windows$$$function__2___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_d = NULL;
    PyObject *outline_1_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_132b50f119eeb2796b3bf38068100023;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_0e3ebb30f0447488d92695f14b485df7_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_0e3ebb30f0447488d92695f14b485df7_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_132b50f119eeb2796b3bf38068100023 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_132b50f119eeb2796b3bf38068100023)) {
        Py_XDECREF(cache_frame_132b50f119eeb2796b3bf38068100023);

#if _DEBUG_REFCOUNTS
        if (cache_frame_132b50f119eeb2796b3bf38068100023 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_132b50f119eeb2796b3bf38068100023 = MAKE_FUNCTION_FRAME(codeobj_132b50f119eeb2796b3bf38068100023, module_serial$tools$list_ports_windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_132b50f119eeb2796b3bf38068100023->m_type_description == NULL);
    frame_132b50f119eeb2796b3bf38068100023 = cache_frame_132b50f119eeb2796b3bf38068100023;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_132b50f119eeb2796b3bf38068100023);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_132b50f119eeb2796b3bf38068100023) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_8;
        tmp_expression_name_1 = mod_consts[3];
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        assert(!(tmp_called_name_1 == NULL));
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[5]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[7]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[8]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = mod_consts[9];
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[10]);
        assert(!(tmp_called_name_2 == NULL));
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_expression_name_7;
            PyObject *tmp_subscript_name_1;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 61;
                type_description_1 = "o";
                goto try_except_handler_2;
            }

            tmp_expression_name_7 = par_self;
            tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[11]);
            if (tmp_expression_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            tmp_subscript_name_1 = mod_consts[12];
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_1);
            Py_DECREF(tmp_expression_name_6);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_0e3ebb30f0447488d92695f14b485df7_2)) {
            Py_XDECREF(cache_frame_0e3ebb30f0447488d92695f14b485df7_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0e3ebb30f0447488d92695f14b485df7_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0e3ebb30f0447488d92695f14b485df7_2 = MAKE_FUNCTION_FRAME(codeobj_0e3ebb30f0447488d92695f14b485df7, module_serial$tools$list_ports_windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0e3ebb30f0447488d92695f14b485df7_2->m_type_description == NULL);
        frame_0e3ebb30f0447488d92695f14b485df7_2 = cache_frame_0e3ebb30f0447488d92695f14b485df7_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0e3ebb30f0447488d92695f14b485df7_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0e3ebb30f0447488d92695f14b485df7_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 61;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_d;
                outline_0_var_d = tmp_assign_source_4;
                Py_INCREF(outline_0_var_d);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_instance_1 = mod_consts[13];
            CHECK_OBJECT(outline_0_var_d);
            tmp_args_element_name_6 = outline_0_var_d;
            frame_0e3ebb30f0447488d92695f14b485df7_2->m_frame.f_lineno = 61;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[4], tmp_args_element_name_6);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_name_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_name_5);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e3ebb30f0447488d92695f14b485df7_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e3ebb30f0447488d92695f14b485df7_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e3ebb30f0447488d92695f14b485df7_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0e3ebb30f0447488d92695f14b485df7_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0e3ebb30f0447488d92695f14b485df7_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0e3ebb30f0447488d92695f14b485df7_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0e3ebb30f0447488d92695f14b485df7_2,
            type_description_2,
            outline_0_var_d
        );


        // Release cached frame if used for exception.
        if (frame_0e3ebb30f0447488d92695f14b485df7_2 == cache_frame_0e3ebb30f0447488d92695f14b485df7_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0e3ebb30f0447488d92695f14b485df7_2);
            cache_frame_0e3ebb30f0447488d92695f14b485df7_2 = NULL;
        }

        assertFrameObject(frame_0e3ebb30f0447488d92695f14b485df7_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "o";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_d);
        outline_0_var_d = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_d);
        outline_0_var_d = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 61;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_132b50f119eeb2796b3bf38068100023->m_frame.f_lineno = 61;
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_8 = mod_consts[9];
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[10]);
        assert(!(tmp_called_name_3 == NULL));
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_name_9;
            PyObject *tmp_expression_name_10;
            PyObject *tmp_subscript_name_2;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 62;
                type_description_1 = "o";
                goto try_except_handler_4;
            }

            tmp_expression_name_10 = par_self;
            tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[11]);
            if (tmp_expression_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto try_except_handler_4;
            }
            tmp_subscript_name_2 = mod_consts[14];
            tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_2);
            Py_DECREF(tmp_expression_name_9);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto try_except_handler_4;
            }
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = PyList_New(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_6;
        }
        if (isFrameUnusable(cache_frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3)) {
            Py_XDECREF(cache_frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3 = MAKE_FUNCTION_FRAME(codeobj_e06bd0d5ab1a6d8a5e47456c3dca0fe2, module_serial$tools$list_ports_windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3->m_type_description == NULL);
        frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3 = cache_frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 62;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_8 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_d;
                outline_1_var_d = tmp_assign_source_8;
                Py_INCREF(outline_1_var_d);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_instance_2 = mod_consts[13];
            CHECK_OBJECT(outline_1_var_d);
            tmp_args_element_name_9 = outline_1_var_d;
            frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3->m_frame.f_lineno = 62;
            tmp_append_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[4], tmp_args_element_name_9);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_args_element_name_8 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_args_element_name_8);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3,
            type_description_2,
            outline_1_var_d
        );


        // Release cached frame if used for exception.
        if (frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3 == cache_frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3);
            cache_frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3 = NULL;
        }

        assertFrameObject(frame_e06bd0d5ab1a6d8a5e47456c3dca0fe2_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "o";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_d);
        outline_1_var_d = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_d);
        outline_1_var_d = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 62;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_132b50f119eeb2796b3bf38068100023->m_frame.f_lineno = 62;
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_132b50f119eeb2796b3bf38068100023->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_132b50f119eeb2796b3bf38068100023);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_132b50f119eeb2796b3bf38068100023);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_132b50f119eeb2796b3bf38068100023);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_132b50f119eeb2796b3bf38068100023, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_132b50f119eeb2796b3bf38068100023->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_132b50f119eeb2796b3bf38068100023, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_132b50f119eeb2796b3bf38068100023,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_132b50f119eeb2796b3bf38068100023 == cache_frame_132b50f119eeb2796b3bf38068100023) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_132b50f119eeb2796b3bf38068100023);
        cache_frame_132b50f119eeb2796b3bf38068100023 = NULL;
    }

    assertFrameObject(frame_132b50f119eeb2796b3bf38068100023);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_serial$tools$list_ports_windows$$$function__3___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f080456bece37bb3062093a7f8c6c020;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f080456bece37bb3062093a7f8c6c020 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f080456bece37bb3062093a7f8c6c020)) {
        Py_XDECREF(cache_frame_f080456bece37bb3062093a7f8c6c020);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f080456bece37bb3062093a7f8c6c020 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f080456bece37bb3062093a7f8c6c020 = MAKE_FUNCTION_FRAME(codeobj_f080456bece37bb3062093a7f8c6c020, module_serial$tools$list_ports_windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f080456bece37bb3062093a7f8c6c020->m_type_description == NULL);
    frame_f080456bece37bb3062093a7f8c6c020 = cache_frame_f080456bece37bb3062093a7f8c6c020;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f080456bece37bb3062093a7f8c6c020);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f080456bece37bb3062093a7f8c6c020) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_1 = mod_consts[15];
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        assert(!(tmp_called_name_1 == NULL));
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[16]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[17]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f080456bece37bb3062093a7f8c6c020->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f080456bece37bb3062093a7f8c6c020);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f080456bece37bb3062093a7f8c6c020);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f080456bece37bb3062093a7f8c6c020);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f080456bece37bb3062093a7f8c6c020, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f080456bece37bb3062093a7f8c6c020->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f080456bece37bb3062093a7f8c6c020, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f080456bece37bb3062093a7f8c6c020,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f080456bece37bb3062093a7f8c6c020 == cache_frame_f080456bece37bb3062093a7f8c6c020) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f080456bece37bb3062093a7f8c6c020);
        cache_frame_f080456bece37bb3062093a7f8c6c020 = NULL;
    }

    assertFrameObject(frame_f080456bece37bb3062093a7f8c6c020);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_serial$tools$list_ports_windows$$$function__4_get_parent_serial_number(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_child_devinst = python_pars[0];
    PyObject *par_child_vid = python_pars[1];
    PyObject *par_child_pid = python_pars[2];
    PyObject *par_depth = python_pars[3];
    PyObject *par_last_serial_number = python_pars[4];
    PyObject *var_devinst = NULL;
    PyObject *var_ret = NULL;
    PyObject *var_win_error = NULL;
    PyObject *var_parentHardwareID = NULL;
    PyObject *var_parentHardwareID_str = NULL;
    PyObject *var_m = NULL;
    PyObject *var_vid = NULL;
    PyObject *var_pid = NULL;
    PyObject *var_serial_number = NULL;
    PyObject *var_found_serial_number = NULL;
    struct Nuitka_FrameObject *frame_3724822264bd0160ce66343a21e8da73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3724822264bd0160ce66343a21e8da73 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3724822264bd0160ce66343a21e8da73)) {
        Py_XDECREF(cache_frame_3724822264bd0160ce66343a21e8da73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3724822264bd0160ce66343a21e8da73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3724822264bd0160ce66343a21e8da73 = MAKE_FUNCTION_FRAME(codeobj_3724822264bd0160ce66343a21e8da73, module_serial$tools$list_ports_windows, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3724822264bd0160ce66343a21e8da73->m_type_description == NULL);
    frame_3724822264bd0160ce66343a21e8da73 = cache_frame_3724822264bd0160ce66343a21e8da73;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3724822264bd0160ce66343a21e8da73);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3724822264bd0160ce66343a21e8da73) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_depth);
        tmp_compexpr_left_1 = par_depth;
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_compexpr_right_1 == NULL)) {
            tmp_compexpr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_last_serial_number);
        tmp_operand_name_1 = par_last_serial_number;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_return_value = mod_consts[9];
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_last_serial_number);
        tmp_return_value = par_last_serial_number;
        condexpr_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 167;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_devinst == NULL);
        var_devinst = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_devinst);
        tmp_args_element_name_2 = var_devinst;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 168;
        tmp_args_element_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[21], tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_child_devinst);
        tmp_args_element_name_3 = par_child_devinst;
        tmp_args_element_name_4 = mod_consts[0];
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_ret);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_ret);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_name_5;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_args_element_name_6 = var_ret;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 171;
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_6);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_5);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 171;
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[0]);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_5);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_7};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_win_error == NULL);
        var_win_error = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_win_error);
        tmp_compexpr_left_2 = var_win_error;
        tmp_compexpr_right_2 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_compexpr_right_2 == NULL)) {
            tmp_compexpr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(par_last_serial_number);
        tmp_operand_name_2 = par_last_serial_number;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_return_value = mod_consts[9];
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(par_last_serial_number);
        tmp_return_value = par_last_serial_number;
        condexpr_end_2:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_8;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_win_error);
        tmp_args_element_name_8 = var_win_error;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 178;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[2], tmp_args_element_name_8);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 178;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 181;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[24],
            &PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parentHardwareID == NULL);
        var_parentHardwareID = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_13;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_devinst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 184;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = var_devinst;
        CHECK_OBJECT(var_parentHardwareID);
        tmp_args_element_name_10 = var_parentHardwareID;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parentHardwareID);
        tmp_args_element_name_12 = var_parentHardwareID;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 186;
        tmp_left_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[28], tmp_args_element_name_12);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[29];
        tmp_args_element_name_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = mod_consts[0];
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_13};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_args_element_name_11);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_ret);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_ret);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_name_10;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[2]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_args_element_name_16 = var_ret;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 190;
        tmp_args_element_name_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_16);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_15);

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 190;
        tmp_args_element_name_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, mod_consts[0]);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_15);

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_name_15, tmp_args_element_name_17};
            tmp_args_element_name_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
        }

        Py_DECREF(tmp_args_element_name_15);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 190;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 190;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_name_2;
        if (var_parentHardwareID == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = var_parentHardwareID;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[31]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parentHardwareID_str == NULL);
        var_parentHardwareID_str = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_expression_name_4;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[33]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_18 = mod_consts[34];
        CHECK_OBJECT(var_parentHardwareID_str);
        tmp_args_element_name_19 = var_parentHardwareID_str;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[35]);
        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_11, call_args);
        }

        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT(var_m);
        tmp_operand_name_3 = var_m;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT(par_last_serial_number);
        tmp_operand_name_4 = par_last_serial_number;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_return_value = mod_consts[9];
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(par_last_serial_number);
        tmp_return_value = par_last_serial_number;
        condexpr_end_3:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        assert(var_vid == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_vid = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        assert(var_pid == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_pid = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_None;
        assert(var_serial_number == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_serial_number = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_m);
        tmp_called_instance_5 = var_m;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 204;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_5,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_value_name_1;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_base_name_1;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_m;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 205;
        tmp_value_name_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_6,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_base_name_1 = mod_consts[39];
        tmp_assign_source_11 = BUILTIN_INT2(tmp_value_name_1, tmp_base_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_vid;
            assert(old != NULL);
            var_vid = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_4;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = var_m;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 206;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_7,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_value_name_2;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_base_name_2;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = var_m;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 207;
        tmp_value_name_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_8,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_value_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_base_name_2 = mod_consts[39];
        tmp_assign_source_12 = BUILTIN_INT2(tmp_value_name_2, tmp_base_name_2);
        Py_DECREF(tmp_value_name_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pid;
            assert(old != NULL);
            var_pid = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_5;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = var_m;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 208;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_9,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_10;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = var_m;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 209;
        tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_10,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_serial_number;
            assert(old != NULL);
            var_serial_number = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(var_serial_number);
        tmp_assign_source_14 = var_serial_number;
        assert(var_found_serial_number == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_found_serial_number = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_6;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        CHECK_OBJECT(var_serial_number);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_serial_number);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_21 = mod_consts[43];
        CHECK_OBJECT(var_serial_number);
        tmp_args_element_name_22 = var_serial_number;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_name_21, tmp_args_element_name_22};
            tmp_operand_name_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_11,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_operand_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        Py_DECREF(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_12 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_12 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_None;
        {
            PyObject *old = var_serial_number;
            var_serial_number = tmp_assign_source_15;
            Py_INCREF(var_serial_number);
            Py_XDECREF(old);
        }

    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_operand_name_7;
        CHECK_OBJECT(var_vid);
        tmp_operand_name_6 = var_vid;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_pid);
        tmp_operand_name_7 = var_pid;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_13 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_13 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_args_element_name_27;
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_devinst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_23 = var_devinst;
        CHECK_OBJECT(par_child_vid);
        tmp_args_element_name_24 = par_child_vid;
        CHECK_OBJECT(par_child_pid);
        tmp_args_element_name_25 = par_child_pid;
        CHECK_OBJECT(par_depth);
        tmp_left_name_2 = par_depth;
        tmp_right_name_2 = mod_consts[29];
        tmp_args_element_name_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_element_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_found_serial_number);
        tmp_args_element_name_27 = var_found_serial_number;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_args_element_name_26);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_pid);
        tmp_compexpr_left_3 = var_pid;
        CHECK_OBJECT(par_child_pid);
        tmp_compexpr_right_3 = par_child_pid;
        tmp_or_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        assert(tmp_or_left_value_2 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_vid);
        tmp_compexpr_left_4 = var_vid;
        CHECK_OBJECT(par_child_vid);
        tmp_compexpr_right_4 = par_child_vid;
        tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_14 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
        assert(tmp_condition_result_14 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_11:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_operand_name_8;
        CHECK_OBJECT(par_last_serial_number);
        tmp_operand_name_8 = par_last_serial_number;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        tmp_return_value = mod_consts[9];
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT(par_last_serial_number);
        tmp_return_value = par_last_serial_number;
        condexpr_end_4:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_operand_name_9;
        if (var_serial_number == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_9 = var_serial_number;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_32;
        tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_name_13 == NULL)) {
            tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_devinst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 231;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_28 = var_devinst;
        CHECK_OBJECT(par_child_vid);
        tmp_args_element_name_29 = par_child_vid;
        CHECK_OBJECT(par_child_pid);
        tmp_args_element_name_30 = par_child_pid;
        CHECK_OBJECT(par_depth);
        tmp_left_name_3 = par_depth;
        tmp_right_name_3 = mod_consts[29];
        tmp_args_element_name_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_3, tmp_right_name_3);
        if (tmp_args_element_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_found_serial_number);
        tmp_args_element_name_32 = var_found_serial_number;
        frame_3724822264bd0160ce66343a21e8da73->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = {tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_13, call_args);
        }

        Py_DECREF(tmp_args_element_name_31);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_12:;
    if (var_serial_number == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 235;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_serial_number;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3724822264bd0160ce66343a21e8da73);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3724822264bd0160ce66343a21e8da73);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3724822264bd0160ce66343a21e8da73);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3724822264bd0160ce66343a21e8da73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3724822264bd0160ce66343a21e8da73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3724822264bd0160ce66343a21e8da73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3724822264bd0160ce66343a21e8da73,
        type_description_1,
        par_child_devinst,
        par_child_vid,
        par_child_pid,
        par_depth,
        par_last_serial_number,
        var_devinst,
        var_ret,
        var_win_error,
        var_parentHardwareID,
        var_parentHardwareID_str,
        var_m,
        var_vid,
        var_pid,
        var_serial_number,
        var_found_serial_number
    );


    // Release cached frame if used for exception.
    if (frame_3724822264bd0160ce66343a21e8da73 == cache_frame_3724822264bd0160ce66343a21e8da73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3724822264bd0160ce66343a21e8da73);
        cache_frame_3724822264bd0160ce66343a21e8da73 = NULL;
    }

    assertFrameObject(frame_3724822264bd0160ce66343a21e8da73);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_child_devinst);
    Py_DECREF(par_child_devinst);
    par_child_devinst = NULL;
    CHECK_OBJECT(par_child_vid);
    Py_DECREF(par_child_vid);
    par_child_vid = NULL;
    CHECK_OBJECT(par_child_pid);
    Py_DECREF(par_child_pid);
    par_child_pid = NULL;
    Py_XDECREF(par_depth);
    par_depth = NULL;
    CHECK_OBJECT(par_last_serial_number);
    Py_DECREF(par_last_serial_number);
    par_last_serial_number = NULL;
    Py_XDECREF(var_devinst);
    var_devinst = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_win_error);
    var_win_error = NULL;
    Py_XDECREF(var_parentHardwareID);
    var_parentHardwareID = NULL;
    Py_XDECREF(var_parentHardwareID_str);
    var_parentHardwareID_str = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_vid);
    var_vid = NULL;
    Py_XDECREF(var_pid);
    var_pid = NULL;
    Py_XDECREF(var_serial_number);
    var_serial_number = NULL;
    Py_XDECREF(var_found_serial_number);
    var_found_serial_number = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_child_devinst);
    Py_DECREF(par_child_devinst);
    par_child_devinst = NULL;
    CHECK_OBJECT(par_child_vid);
    Py_DECREF(par_child_vid);
    par_child_vid = NULL;
    CHECK_OBJECT(par_child_pid);
    Py_DECREF(par_child_pid);
    par_child_pid = NULL;
    Py_XDECREF(par_depth);
    par_depth = NULL;
    CHECK_OBJECT(par_last_serial_number);
    Py_DECREF(par_last_serial_number);
    par_last_serial_number = NULL;
    Py_XDECREF(var_devinst);
    var_devinst = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_win_error);
    var_win_error = NULL;
    Py_XDECREF(var_parentHardwareID);
    var_parentHardwareID = NULL;
    Py_XDECREF(var_parentHardwareID_str);
    var_parentHardwareID_str = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_vid);
    var_vid = NULL;
    Py_XDECREF(var_pid);
    var_pid = NULL;
    Py_XDECREF(var_serial_number);
    var_serial_number = NULL;
    Py_XDECREF(var_found_serial_number);
    var_found_serial_number = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_serial$tools$list_ports_windows$$$function__5_iterate_comports(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_GENERATOR_serial$tools$list_ports_windows$$$function__5_iterate_comports$$$genobj__1_iterate_comports();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct serial$tools$list_ports_windows$$$function__5_iterate_comports$$$genobj__1_iterate_comports_locals {
    PyObject *var_PortsGUIDs;
    PyObject *var_ports_guids_size;
    PyObject *var_ModemsGUIDs;
    PyObject *var_modems_guids_size;
    PyObject *var_GUIDs;
    PyObject *var_index;
    PyObject *var_bInterfaceNumber;
    PyObject *var_g_hdi;
    PyObject *var_devinfo;
    PyObject *var_hkey;
    PyObject *var_port_name_buffer;
    PyObject *var_port_name_length;
    PyObject *var_szHardwareID;
    PyObject *var_szHardwareID_str;
    PyObject *var_info;
    PyObject *var_m;
    PyObject *var_loc_path_str;
    PyObject *var_location;
    PyObject *var_g;
    PyObject *var_szFriendlyName;
    PyObject *var_szManufacturer;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
};

static PyObject *serial$tools$list_ports_windows$$$function__5_iterate_comports$$$genobj__1_iterate_comports_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct serial$tools$list_ports_windows$$$function__5_iterate_comports$$$genobj__1_iterate_comports_locals *generator_heap = (struct serial$tools$list_ports_windows$$$function__5_iterate_comports$$$genobj__1_iterate_comports_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_PortsGUIDs = NULL;
    generator_heap->var_ports_guids_size = NULL;
    generator_heap->var_ModemsGUIDs = NULL;
    generator_heap->var_modems_guids_size = NULL;
    generator_heap->var_GUIDs = NULL;
    generator_heap->var_index = NULL;
    generator_heap->var_bInterfaceNumber = NULL;
    generator_heap->var_g_hdi = NULL;
    generator_heap->var_devinfo = NULL;
    generator_heap->var_hkey = NULL;
    generator_heap->var_port_name_buffer = NULL;
    generator_heap->var_port_name_length = NULL;
    generator_heap->var_szHardwareID = NULL;
    generator_heap->var_szHardwareID_str = NULL;
    generator_heap->var_info = NULL;
    generator_heap->var_m = NULL;
    generator_heap->var_loc_path_str = NULL;
    generator_heap->var_location = NULL;
    generator_heap->var_g = NULL;
    generator_heap->var_szFriendlyName = NULL;
    generator_heap->var_szManufacturer = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4c0b78508fd77f89ef5d7c221444cd5d, module_serial$tools$list_ports_windows, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_left_name_1 == NULL)) {
            tmp_left_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 240;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[49];
        tmp_called_name_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 240;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 240;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 240;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_PortsGUIDs == NULL);
        generator_heap->var_PortsGUIDs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 241;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_ports_guids_size == NULL);
        generator_heap->var_ports_guids_size = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_6;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[51];
        CHECK_OBJECT(generator_heap->var_PortsGUIDs);
        tmp_args_element_name_2 = generator_heap->var_PortsGUIDs;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 245;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_PortsGUIDs);
        tmp_args_element_name_4 = generator_heap->var_PortsGUIDs;
        generator->m_frame->m_frame.f_lineno = 245;
        tmp_args_element_name_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[28], tmp_args_element_name_4);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 245;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_3);

            generator_heap->exception_lineno = 246;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_ports_guids_size);
        tmp_args_element_name_6 = generator_heap->var_ports_guids_size;
        generator->m_frame->m_frame.f_lineno = 246;
        tmp_args_element_name_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[21], tmp_args_element_name_6);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_3);

            generator_heap->exception_lineno = 246;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_5};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 247;
        tmp_raise_type_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[2]);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->exception_type = tmp_raise_type_1;
        generator_heap->exception_lineno = 247;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_left_name_2 == NULL)) {
            tmp_left_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 249;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[49];
        tmp_called_name_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 249;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 249;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
        Py_DECREF(tmp_called_name_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 249;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_ModemsGUIDs == NULL);
        generator_heap->var_ModemsGUIDs = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_5;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 250;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_name_5);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_modems_guids_size == NULL);
        generator_heap->var_modems_guids_size = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_12;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = mod_consts[52];
        CHECK_OBJECT(generator_heap->var_ModemsGUIDs);
        tmp_args_element_name_8 = generator_heap->var_ModemsGUIDs;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 254;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_ModemsGUIDs);
        tmp_args_element_name_10 = generator_heap->var_ModemsGUIDs;
        generator->m_frame->m_frame.f_lineno = 254;
        tmp_args_element_name_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[28], tmp_args_element_name_10);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 254;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_9);

            generator_heap->exception_lineno = 255;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_modems_guids_size);
        tmp_args_element_name_12 = generator_heap->var_modems_guids_size;
        generator->m_frame->m_frame.f_lineno = 255;
        tmp_args_element_name_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[21], tmp_args_element_name_12);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_9);

            generator_heap->exception_lineno = 255;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_11};
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 256;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 256;
        tmp_raise_type_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[2]);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 256;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->exception_type = tmp_raise_type_2;
        generator_heap->exception_lineno = 256;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_expression_name_4;
        if (generator_heap->var_PortsGUIDs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[53]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = generator_heap->var_PortsGUIDs;
        if (generator_heap->var_ports_guids_size == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = generator_heap->var_ports_guids_size;
        tmp_stop_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[31]);
        if (tmp_stop_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = MAKE_SLICEOBJ1(tmp_stop_name_1);
        Py_DECREF(tmp_stop_name_1);
        assert(!(tmp_subscript_name_1 == NULL));
        tmp_left_name_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_ModemsGUIDs == NULL) {
            Py_DECREF(tmp_left_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[55]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = generator_heap->var_ModemsGUIDs;
        if (generator_heap->var_modems_guids_size == NULL) {
            Py_DECREF(tmp_left_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[56]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = generator_heap->var_modems_guids_size;
        tmp_stop_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[31]);
        if (tmp_stop_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_left_name_3);

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = MAKE_SLICEOBJ1(tmp_stop_name_2);
        Py_DECREF(tmp_stop_name_2);
        assert(!(tmp_subscript_name_2 == NULL));
        tmp_right_name_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_left_name_3);

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_left_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_GUIDs == NULL);
        generator_heap->var_GUIDs = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(generator_heap->var_GUIDs);
        tmp_len_arg_1 = generator_heap->var_GUIDs;
        tmp_xrange_low_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ooooooooooooooooooooo";
                generator_heap->exception_lineno = 261;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_8 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_index;
            generator_heap->var_index = tmp_assign_source_8;
            Py_INCREF(generator_heap->var_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        {
            PyObject *old = generator_heap->var_bInterfaceNumber;
            generator_heap->var_bInterfaceNumber = tmp_assign_source_9;
            Py_INCREF(generator_heap->var_bInterfaceNumber);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[21]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_GUIDs == NULL) {
            Py_DECREF(tmp_called_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[58]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_6 = generator_heap->var_GUIDs;
        CHECK_OBJECT(generator_heap->var_index);
        tmp_subscript_name_3 = generator_heap->var_index;
        tmp_args_element_name_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_3);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_8);

            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 264;
        tmp_args_element_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_15 = Py_None;
        tmp_args_element_name_16 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_name_16 == NULL)) {
            tmp_args_element_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_13);

            generator_heap->exception_lineno = 266;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_17 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_args_element_name_17 == NULL)) {
            tmp_args_element_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_13);

            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_args_element_name_13);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_g_hdi;
            generator_heap->var_g_hdi = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_9;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 269;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 269;
        tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tmp_called_name_9);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 269;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_devinfo;
            generator_heap->var_devinfo = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_devinfo);
        tmp_args_element_name_18 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 270;
        tmp_assattr_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[28], tmp_args_element_name_18);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_devinfo == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[62]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_1 = generator_heap->var_devinfo;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[0];
        {
            PyObject *old = generator_heap->var_index;
            assert(old != NULL);
            generator_heap->var_index = tmp_assign_source_12;
            Py_INCREF(generator_heap->var_index);
            Py_DECREF(old);
        }

    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_22;
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_g_hdi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[65]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_19 = generator_heap->var_g_hdi;
        if (generator_heap->var_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[66]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_20 = generator_heap->var_index;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[21]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_devinfo == NULL) {
            Py_DECREF(tmp_called_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[62]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_22 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 272;
        tmp_args_element_name_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_11);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21};
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_10, call_args);
        }

        Py_DECREF(tmp_args_element_name_21);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_2;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        if (generator_heap->var_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[66]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_4 = generator_heap->var_index;
        tmp_right_name_4 = mod_consts[29];
        generator_heap->tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_4, tmp_right_name_4);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = tmp_left_name_4;
        generator_heap->var_index = tmp_assign_source_13;

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_g_hdi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[65]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_23 = generator_heap->var_g_hdi;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 278;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[21]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 278;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_devinfo == NULL) {
            Py_DECREF(tmp_called_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[62]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 278;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_25 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 278;
        tmp_args_element_name_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_25);
        Py_DECREF(tmp_called_name_13);
        if (tmp_args_element_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 278;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_26 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_args_element_name_26 == NULL)) {
            tmp_args_element_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_args_element_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_24);

            generator_heap->exception_lineno = 279;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_27 = mod_consts[0];
        tmp_args_element_name_28 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_args_element_name_28 == NULL)) {
            tmp_args_element_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_24);

            generator_heap->exception_lineno = 281;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_29 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_args_element_name_29 == NULL)) {
            tmp_args_element_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_24);

            generator_heap->exception_lineno = 282;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS6(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_args_element_name_24);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_hkey;
            generator_heap->var_hkey = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 283;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 283;
        tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_8,
            mod_consts[24],
            &PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 283;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_port_name_buffer;
            generator_heap->var_port_name_buffer = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_14;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_name_31;
        tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_name_14 == NULL)) {
            tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 284;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 284;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_port_name_buffer);
        tmp_args_element_name_31 = generator_heap->var_port_name_buffer;
        generator->m_frame->m_frame.f_lineno = 284;
        tmp_args_element_name_30 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[28], tmp_args_element_name_31);
        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 284;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 284;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_30);
        Py_DECREF(tmp_args_element_name_30);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 284;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_port_name_length;
            generator_heap->var_port_name_length = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_name_39;
        tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_name_15 == NULL)) {
            tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 285;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_hkey);
        tmp_args_element_name_32 = generator_heap->var_hkey;
        tmp_args_element_name_33 = mod_consts[73];
        tmp_args_element_name_34 = Py_None;
        tmp_args_element_name_35 = Py_None;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 290;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[21]);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 290;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_port_name_buffer == NULL) {
            Py_DECREF(tmp_called_name_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 290;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_37 = generator_heap->var_port_name_buffer;
        generator->m_frame->m_frame.f_lineno = 290;
        tmp_args_element_name_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_37);
        Py_DECREF(tmp_called_name_16);
        if (tmp_args_element_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 290;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_36);

            generator_heap->exception_lineno = 291;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_port_name_length);
        tmp_args_element_name_39 = generator_heap->var_port_name_length;
        generator->m_frame->m_frame.f_lineno = 291;
        tmp_args_element_name_38 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[21], tmp_args_element_name_39);
        if (tmp_args_element_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_36);

            generator_heap->exception_lineno = 291;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = {tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_38};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS6(tmp_called_name_15, call_args);
        }

        Py_DECREF(tmp_args_element_name_36);
        Py_DECREF(tmp_args_element_name_38);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 285;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_40;
        tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_name_17 == NULL)) {
            tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_hkey);
        tmp_args_element_name_40 = generator_heap->var_hkey;
        generator->m_frame->m_frame.f_lineno = 292;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_40);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_1;
        if (generator_heap->var_port_name_buffer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 297;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_10 = generator_heap->var_port_name_buffer;
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[31]);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 297;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 297;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_11,
            mod_consts[76],
            &PyTuple_GET_ITEM(mod_consts[77], 0)
        );

        Py_DECREF(tmp_called_instance_11);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 297;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_3);

            generator_heap->exception_lineno = 297;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_start_2;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_12;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 301;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 301;
        tmp_assign_source_17 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_12,
            mod_consts[24],
            &PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 301;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_szHardwareID;
            generator_heap->var_szHardwareID = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_left_name_5;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_right_name_5;
        PyObject *tmp_args_element_name_47;
        tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_name_18 == NULL)) {
            tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 303;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_g_hdi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[65]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 304;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_41 = generator_heap->var_g_hdi;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 305;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[21]);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 305;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_devinfo == NULL) {
            Py_DECREF(tmp_called_name_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[62]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 305;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_43 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 305;
        tmp_args_element_name_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_43);
        Py_DECREF(tmp_called_name_19);
        if (tmp_args_element_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 305;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_szHardwareID);
        tmp_args_element_name_44 = generator_heap->var_szHardwareID;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_42);

            generator_heap->exception_lineno = 308;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_szHardwareID);
        tmp_args_element_name_46 = generator_heap->var_szHardwareID;
        generator->m_frame->m_frame.f_lineno = 308;
        tmp_left_name_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[28], tmp_args_element_name_46);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_42);

            generator_heap->exception_lineno = 308;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_5 = mod_consts[29];
        tmp_args_element_name_45 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_left_name_5);
        if (tmp_args_element_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_42);

            generator_heap->exception_lineno = 308;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_47 = Py_None;
        generator->m_frame->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = {tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_44, tmp_args_element_name_45, tmp_args_element_name_47};
            tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_18, call_args);
        }

        Py_DECREF(tmp_args_element_name_42);
        Py_DECREF(tmp_args_element_name_45);
        if (tmp_operand_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 303;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        Py_DECREF(tmp_operand_name_4);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 303;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_called_name_20;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_called_name_22;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_left_name_6;
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_right_name_6;
        PyObject *tmp_args_element_name_57;
        tmp_called_name_20 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_name_20 == NULL)) {
            tmp_called_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 311;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_g_hdi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[65]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 312;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_48 = generator_heap->var_g_hdi;
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 313;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[21]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 313;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_devinfo == NULL) {
            Py_DECREF(tmp_called_name_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[62]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 313;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_50 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 313;
        tmp_args_element_name_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_50);
        Py_DECREF(tmp_called_name_21);
        if (tmp_args_element_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 313;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_51 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_args_element_name_51 == NULL)) {
            tmp_args_element_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_args_element_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_49);

            generator_heap->exception_lineno = 314;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_52 = Py_None;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_49);

            generator_heap->exception_lineno = 316;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[21]);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_49);

            generator_heap->exception_lineno = 316;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_szHardwareID == NULL) {
            Py_DECREF(tmp_args_element_name_49);
            Py_DECREF(tmp_called_name_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[81]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 316;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_54 = generator_heap->var_szHardwareID;
        generator->m_frame->m_frame.f_lineno = 316;
        tmp_args_element_name_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_54);
        Py_DECREF(tmp_called_name_22);
        if (tmp_args_element_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_49);

            generator_heap->exception_lineno = 316;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_49);
            Py_DECREF(tmp_args_element_name_53);

            generator_heap->exception_lineno = 317;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[28]);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_49);
            Py_DECREF(tmp_args_element_name_53);

            generator_heap->exception_lineno = 317;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_szHardwareID == NULL) {
            Py_DECREF(tmp_args_element_name_49);
            Py_DECREF(tmp_args_element_name_53);
            Py_DECREF(tmp_called_name_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[81]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 317;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_56 = generator_heap->var_szHardwareID;
        generator->m_frame->m_frame.f_lineno = 317;
        tmp_left_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_56);
        Py_DECREF(tmp_called_name_23);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_49);
            Py_DECREF(tmp_args_element_name_53);

            generator_heap->exception_lineno = 317;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_6 = mod_consts[29];
        tmp_args_element_name_55 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_left_name_6);
        if (tmp_args_element_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_49);
            Py_DECREF(tmp_args_element_name_53);

            generator_heap->exception_lineno = 317;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_57 = Py_None;
        generator->m_frame->m_frame.f_lineno = 311;
        {
            PyObject *call_args[] = {tmp_args_element_name_48, tmp_args_element_name_49, tmp_args_element_name_51, tmp_args_element_name_52, tmp_args_element_name_53, tmp_args_element_name_55, tmp_args_element_name_57};
            tmp_operand_name_5 = CALL_FUNCTION_WITH_ARGS7(tmp_called_name_20, call_args);
        }

        Py_DECREF(tmp_args_element_name_49);
        Py_DECREF(tmp_args_element_name_53);
        Py_DECREF(tmp_args_element_name_55);
        if (tmp_operand_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 311;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        Py_DECREF(tmp_operand_name_5);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 311;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_6 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_14;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 320;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 320;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[82]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 320;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_compexpr_right_1 == NULL)) {
            tmp_compexpr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            generator_heap->exception_lineno = 320;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 320;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        assert(tmp_condition_result_7 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_instance_15;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 321;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 321;
        tmp_raise_type_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[2]);
        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 321;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator_heap->exception_type = tmp_raise_type_3;
        generator_heap->exception_lineno = 321;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_7:;
    branch_no_6:;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_name_15;
        if (generator_heap->var_szHardwareID == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[81]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 323;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_15 = generator_heap->var_szHardwareID;
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[31]);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 323;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_szHardwareID_str;
            generator_heap->var_szHardwareID_str = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_kwargs_name_1;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 325;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[85]);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 325;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_port_name_buffer == NULL) {
            Py_DECREF(tmp_called_name_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 325;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_17 = generator_heap->var_port_name_buffer;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[31]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_24);

            generator_heap->exception_lineno = 325;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[86]);
        generator->m_frame->m_frame.f_lineno = 325;
        tmp_assign_source_19 = CALL_FUNCTION(tmp_called_name_24, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 325;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_info;
            generator_heap->var_info = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(generator_heap->var_szHardwareID_str);
        tmp_called_instance_16 = generator_heap->var_szHardwareID_str;
        generator->m_frame->m_frame.f_lineno = 329;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_16,
            mod_consts[76],
            &PyTuple_GET_ITEM(mod_consts[87], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 329;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_4);

            generator_heap->exception_lineno = 329;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_args_element_name_60;
        PyObject *tmp_expression_name_19;
        tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_18 == NULL)) {
            tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 330;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[33]);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 330;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_58 = mod_consts[34];
        if (generator_heap->var_szHardwareID_str == NULL) {
            Py_DECREF(tmp_called_name_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[88]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 330;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_59 = generator_heap->var_szHardwareID_str;
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_25);

            generator_heap->exception_lineno = 330;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_60 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[35]);
        if (tmp_args_element_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_25);

            generator_heap->exception_lineno = 330;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 330;
        {
            PyObject *call_args[] = {tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_25, call_args);
        }

        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_element_name_60);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 330;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_m;
            generator_heap->var_m = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        CHECK_OBJECT(generator_heap->var_m);
        tmp_truth_name_3 = CHECK_IF_TRUE(generator_heap->var_m);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 331;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_value_name_1;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_base_name_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(generator_heap->var_m);
        tmp_called_instance_17 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 332;
        tmp_value_name_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_17,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_base_name_1 = mod_consts[39];
        tmp_assattr_name_2 = BUILTIN_INT2(tmp_value_name_1, tmp_base_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_info);
        tmp_assattr_target_2 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[89], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 332;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_5;
        int tmp_truth_name_4;
        if (generator_heap->var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 333;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_18 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 333;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_18,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 333;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_5);

            generator_heap->exception_lineno = 333;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_value_name_2;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_base_name_2;
        PyObject *tmp_assattr_target_3;
        if (generator_heap->var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 334;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_19 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 334;
        tmp_value_name_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_19,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_value_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 334;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_base_name_2 = mod_consts[39];
        tmp_assattr_name_3 = BUILTIN_INT2(tmp_value_name_2, tmp_base_name_2);
        Py_DECREF(tmp_value_name_2);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 334;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_info);
        tmp_assattr_target_3 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[90], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 334;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_6;
        int tmp_truth_name_5;
        if (generator_heap->var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 335;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_20 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 335;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_20,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[91], 0)
        );

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 335;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_6);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_6);

            generator_heap->exception_lineno = 335;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_11 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_6);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_21;
        if (generator_heap->var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 336;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_21 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 336;
        tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_21,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[91], 0)
        );

        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 336;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_21 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 336;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_bInterfaceNumber;
            generator_heap->var_bInterfaceNumber = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_call_result_7;
        int tmp_truth_name_6;
        PyObject *tmp_called_name_26;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_called_instance_23;
        int tmp_truth_name_7;
        if (generator_heap->var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_22 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 340;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_22,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_7);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_7);

            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_7);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[42]);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_61 = mod_consts[43];
        if (generator_heap->var_m == NULL) {
            Py_DECREF(tmp_called_name_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_23 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 340;
        tmp_args_element_name_62 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_23,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_args_element_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_26);

            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_name_61, tmp_args_element_name_62};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_26, call_args);
        }

        Py_DECREF(tmp_called_name_26);
        Py_DECREF(tmp_args_element_name_62);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_8);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_8);

            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_8);
        tmp_condition_result_12 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_12 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_assattr_target_4;
        if (generator_heap->var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_24 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 341;
        tmp_assattr_name_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_24,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_info);
        tmp_assattr_target_4 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[45], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_27;
        PyObject *tmp_args_element_name_63;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_assattr_target_5;
        tmp_called_name_27 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_name_27 == NULL)) {
            tmp_called_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_devinfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[62]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_21 = generator_heap->var_devinfo;
        tmp_args_element_name_63 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[17]);
        if (tmp_args_element_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_info);
        tmp_expression_name_22 = generator_heap->var_info;
        tmp_args_element_name_64 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[89]);
        if (tmp_args_element_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_63);

            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_info == NULL) {
            Py_DECREF(tmp_args_element_name_63);
            Py_DECREF(tmp_args_element_name_64);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[92]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_23 = generator_heap->var_info;
        tmp_args_element_name_65 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[90]);
        if (tmp_args_element_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_63);
            Py_DECREF(tmp_args_element_name_64);

            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_name_63, tmp_args_element_name_64, tmp_args_element_name_65};
            tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_27, call_args);
        }

        Py_DECREF(tmp_args_element_name_63);
        Py_DECREF(tmp_args_element_name_64);
        Py_DECREF(tmp_args_element_name_65);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_info == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[92]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_5 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[45], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_end_12:;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_25;
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 346;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 346;
        tmp_assign_source_22 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_25,
            mod_consts[24],
            &PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 346;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_loc_path_str;
            generator_heap->var_loc_path_str = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_called_name_28;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_66;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_args_element_name_69;
        PyObject *tmp_args_element_name_70;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_args_element_name_72;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_left_name_7;
        PyObject *tmp_called_name_30;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_args_element_name_74;
        PyObject *tmp_right_name_7;
        PyObject *tmp_args_element_name_75;
        int tmp_truth_name_8;
        tmp_called_name_28 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_name_28 == NULL)) {
            tmp_called_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 347;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_g_hdi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[65]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 348;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_66 = generator_heap->var_g_hdi;
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 349;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[21]);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 349;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_devinfo == NULL) {
            Py_DECREF(tmp_called_name_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[62]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 349;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_68 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 349;
        tmp_args_element_name_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_68);
        Py_DECREF(tmp_called_name_29);
        if (tmp_args_element_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 349;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_69 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_args_element_name_69 == NULL)) {
            tmp_args_element_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_args_element_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_67);

            generator_heap->exception_lineno = 350;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_70 = Py_None;
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_67);

            generator_heap->exception_lineno = 352;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_loc_path_str);
        tmp_args_element_name_72 = generator_heap->var_loc_path_str;
        generator->m_frame->m_frame.f_lineno = 352;
        tmp_args_element_name_71 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_26, mod_consts[21], tmp_args_element_name_72);
        if (tmp_args_element_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_67);

            generator_heap->exception_lineno = 352;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_67);
            Py_DECREF(tmp_args_element_name_71);

            generator_heap->exception_lineno = 353;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[28]);
        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_67);
            Py_DECREF(tmp_args_element_name_71);

            generator_heap->exception_lineno = 353;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_loc_path_str == NULL) {
            Py_DECREF(tmp_args_element_name_67);
            Py_DECREF(tmp_args_element_name_71);
            Py_DECREF(tmp_called_name_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[94]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 353;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_74 = generator_heap->var_loc_path_str;
        generator->m_frame->m_frame.f_lineno = 353;
        tmp_left_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_74);
        Py_DECREF(tmp_called_name_30);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_67);
            Py_DECREF(tmp_args_element_name_71);

            generator_heap->exception_lineno = 353;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_7 = mod_consts[29];
        tmp_args_element_name_73 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_left_name_7);
        if (tmp_args_element_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_67);
            Py_DECREF(tmp_args_element_name_71);

            generator_heap->exception_lineno = 353;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_75 = Py_None;
        generator->m_frame->m_frame.f_lineno = 347;
        {
            PyObject *call_args[] = {tmp_args_element_name_66, tmp_args_element_name_67, tmp_args_element_name_69, tmp_args_element_name_70, tmp_args_element_name_71, tmp_args_element_name_73, tmp_args_element_name_75};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS7(tmp_called_name_28, call_args);
        }

        Py_DECREF(tmp_args_element_name_67);
        Py_DECREF(tmp_args_element_name_71);
        Py_DECREF(tmp_args_element_name_73);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 347;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_9);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_9);

            generator_heap->exception_lineno = 347;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_13 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_9);
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_args_element_name_76;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_expression_name_27;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 355;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[95]);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 355;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_76 = mod_consts[96];
        if (generator_heap->var_loc_path_str == NULL) {
            Py_DECREF(tmp_called_name_31);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[94]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 355;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_27 = generator_heap->var_loc_path_str;
        tmp_args_element_name_77 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[31]);
        if (tmp_args_element_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_31);

            generator_heap->exception_lineno = 355;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = {tmp_args_element_name_76, tmp_args_element_name_77};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_31, call_args);
        }

        Py_DECREF(tmp_called_name_31);
        Py_DECREF(tmp_args_element_name_77);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 355;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_m;
            generator_heap->var_m = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyList_New(0);
        {
            PyObject *old = generator_heap->var_location;
            generator_heap->var_location = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(generator_heap->var_m);
        tmp_iter_arg_2 = generator_heap->var_m;
        tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 357;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
            generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ooooooooooooooooooooo";
                generator_heap->exception_lineno = 357;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_assign_source_27 = generator_heap->tmp_for_loop_2__iter_value;
        {
            PyObject *old = generator_heap->var_g;
            generator_heap->var_g = tmp_assign_source_27;
            Py_INCREF(generator_heap->var_g);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_10;
        int tmp_truth_name_9;
        CHECK_OBJECT(generator_heap->var_g);
        tmp_called_instance_27 = generator_heap->var_g;
        generator->m_frame->m_frame.f_lineno = 358;
        tmp_call_result_10 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_27,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 358;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_10);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_10);

            generator_heap->exception_lineno = 358;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_14 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_10);
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_name_32;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_called_name_33;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_left_name_8;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_instance_28;
        PyObject *tmp_right_name_8;
        if (generator_heap->var_location == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[97]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 359;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_28 = generator_heap->var_location;
        tmp_called_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[98]);
        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 359;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_name_29 = mod_consts[99];
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[4]);
        assert(!(tmp_called_name_33 == NULL));
        if (generator_heap->var_g == NULL) {
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_33);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[100]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 359;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_28 = generator_heap->var_g;
        generator->m_frame->m_frame.f_lineno = 359;
        tmp_int_arg_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_28,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_33);

            generator_heap->exception_lineno = 359;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_left_name_8 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_33);

            generator_heap->exception_lineno = 359;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_8 = mod_consts[29];
        tmp_args_element_name_79 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_left_name_8);
        if (tmp_args_element_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_33);

            generator_heap->exception_lineno = 359;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        generator->m_frame->m_frame.f_lineno = 359;
        tmp_args_element_name_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_79);
        Py_DECREF(tmp_called_name_33);
        Py_DECREF(tmp_args_element_name_79);
        if (tmp_args_element_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_32);

            generator_heap->exception_lineno = 359;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        generator->m_frame->m_frame.f_lineno = 359;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_78);
        Py_DECREF(tmp_called_name_32);
        Py_DECREF(tmp_args_element_name_78);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 359;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto branch_end_14;
    branch_no_14:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_tmp_condition_result_15_object_1;
        if (generator_heap->var_location == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[97]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 361;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_len_arg_2 = generator_heap->var_location;
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 361;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_2 = mod_consts[29];
        tmp_tmp_condition_result_15_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        assert(!(tmp_tmp_condition_result_15_object_1 == NULL));
        tmp_condition_result_15 = CHECK_IF_TRUE(tmp_tmp_condition_result_15_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_15_object_1);
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_called_instance_29;
        PyObject *tmp_call_result_12;
        if (generator_heap->var_location == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[97]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 362;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_29 = generator_heap->var_location;
        generator->m_frame->m_frame.f_lineno = 362;
        tmp_call_result_12 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_29,
            mod_consts[98],
            &PyTuple_GET_ITEM(mod_consts[101], 0)
        );

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 362;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_12);
    }
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_called_instance_30;
        PyObject *tmp_call_result_13;
        if (generator_heap->var_location == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[97]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 364;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_30 = generator_heap->var_location;
        generator->m_frame->m_frame.f_lineno = 364;
        tmp_call_result_13 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_30,
            mod_consts[98],
            &PyTuple_GET_ITEM(mod_consts[102], 0)
        );

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 364;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_end_15:;
    {
        PyObject *tmp_called_name_34;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_called_instance_31;
        if (generator_heap->var_location == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[97]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 365;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_30 = generator_heap->var_location;
        tmp_called_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[98]);
        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 365;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (generator_heap->var_g == NULL) {
            Py_DECREF(tmp_called_name_34);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[100]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 365;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_31 = generator_heap->var_g;
        generator->m_frame->m_frame.f_lineno = 365;
        tmp_args_element_name_80 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_31,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[103], 0)
        );

        if (tmp_args_element_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_34);

            generator_heap->exception_lineno = 365;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        generator->m_frame->m_frame.f_lineno = 365;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, tmp_args_element_name_80);
        Py_DECREF(tmp_called_name_34);
        Py_DECREF(tmp_args_element_name_80);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 365;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_end_14:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 357;
        generator_heap->type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    {
        bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if (generator_heap->var_bInterfaceNumber == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[104]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 366;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_left_3 = generator_heap->var_bInterfaceNumber;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_16 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_name_35;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_args_element_name_83;
        if (generator_heap->var_location == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[97]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 367;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_31 = generator_heap->var_location;
        tmp_called_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[98]);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 367;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_32 = mod_consts[105];
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[4]);
        assert(!(tmp_called_name_36 == NULL));
        tmp_args_element_name_82 = mod_consts[106];
        if (generator_heap->var_bInterfaceNumber == NULL) {
            Py_DECREF(tmp_called_name_35);
            Py_DECREF(tmp_called_name_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[104]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 369;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_83 = generator_heap->var_bInterfaceNumber;
        generator->m_frame->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = {tmp_args_element_name_82, tmp_args_element_name_83};
            tmp_args_element_name_81 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_36, call_args);
        }

        Py_DECREF(tmp_called_name_36);
        if (tmp_args_element_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_35);

            generator_heap->exception_lineno = 367;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 367;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, tmp_args_element_name_81);
        Py_DECREF(tmp_called_name_35);
        Py_DECREF(tmp_args_element_name_81);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 367;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_10;
        if (generator_heap->var_location == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[97]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 370;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_truth_name_10 = CHECK_IF_TRUE(generator_heap->var_location);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 370;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_17 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_name_37;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_assattr_target_6;
        tmp_expression_name_33 = mod_consts[9];
        tmp_called_name_37 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[10]);
        assert(!(tmp_called_name_37 == NULL));
        if (generator_heap->var_location == NULL) {
            Py_DECREF(tmp_called_name_37);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[97]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 371;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_84 = generator_heap->var_location;
        generator->m_frame->m_frame.f_lineno = 371;
        tmp_assattr_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_37, tmp_args_element_name_84);
        Py_DECREF(tmp_called_name_37);
        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 371;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_info == NULL) {
            Py_DECREF(tmp_assattr_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[92]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 371;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_6 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[97], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 371;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_17:;
    branch_no_13:;
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_instance_32;
        PyObject *tmp_assattr_target_7;
        if (generator_heap->var_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[92]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 372;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_32 = generator_heap->var_info;
        generator->m_frame->m_frame.f_lineno = 372;
        tmp_assattr_name_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_32, mod_consts[107]);
        if (tmp_assattr_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 372;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_info == NULL) {
            Py_DECREF(tmp_assattr_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[92]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 372;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_7 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[108], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 372;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_called_instance_33;
        PyObject *tmp_call_result_16;
        int tmp_truth_name_11;
        if (generator_heap->var_szHardwareID_str == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[88]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 373;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_33 = generator_heap->var_szHardwareID_str;
        generator->m_frame->m_frame.f_lineno = 373;
        tmp_call_result_16 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_33,
            mod_consts[76],
            &PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 373;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_call_result_16);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_16);

            generator_heap->exception_lineno = 373;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_18 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_16);
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_38;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_args_element_name_85;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_args_element_name_87;
        PyObject *tmp_expression_name_35;
        tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_34 == NULL)) {
            tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 374;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[33]);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 374;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_85 = mod_consts[110];
        if (generator_heap->var_szHardwareID_str == NULL) {
            Py_DECREF(tmp_called_name_38);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[88]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 374;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_86 = generator_heap->var_szHardwareID_str;
        tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_35 == NULL)) {
            tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_38);

            generator_heap->exception_lineno = 374;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_87 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[35]);
        if (tmp_args_element_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_38);

            generator_heap->exception_lineno = 374;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = {tmp_args_element_name_85, tmp_args_element_name_86, tmp_args_element_name_87};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_38, call_args);
        }

        Py_DECREF(tmp_called_name_38);
        Py_DECREF(tmp_args_element_name_87);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 374;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_m;
            generator_heap->var_m = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_12;
        CHECK_OBJECT(generator_heap->var_m);
        tmp_truth_name_12 = CHECK_IF_TRUE(generator_heap->var_m);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 375;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_19 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_value_name_3;
        PyObject *tmp_called_instance_34;
        PyObject *tmp_base_name_3;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(generator_heap->var_m);
        tmp_called_instance_34 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 376;
        tmp_value_name_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_34,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_value_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 376;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_base_name_3 = mod_consts[39];
        tmp_assattr_name_8 = BUILTIN_INT2(tmp_value_name_3, tmp_base_name_3);
        Py_DECREF(tmp_value_name_3);
        if (tmp_assattr_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 376;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_info);
        tmp_assattr_target_8 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[89], tmp_assattr_name_8);
        Py_DECREF(tmp_assattr_name_8);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 376;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_value_name_4;
        PyObject *tmp_called_instance_35;
        PyObject *tmp_base_name_4;
        PyObject *tmp_assattr_target_9;
        if (generator_heap->var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 377;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_35 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 377;
        tmp_value_name_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_35,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[103], 0)
        );

        if (tmp_value_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 377;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_base_name_4 = mod_consts[39];
        tmp_assattr_name_9 = BUILTIN_INT2(tmp_value_name_4, tmp_base_name_4);
        Py_DECREF(tmp_value_name_4);
        if (tmp_assattr_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 377;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_info);
        tmp_assattr_target_9 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[90], tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 377;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_called_instance_36;
        PyObject *tmp_call_result_17;
        int tmp_truth_name_13;
        if (generator_heap->var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 378;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_36 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 378;
        tmp_call_result_17 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_36,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[111], 0)
        );

        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 378;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_call_result_17);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_17);

            generator_heap->exception_lineno = 378;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_20 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_17);
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_called_instance_37;
        PyObject *tmp_assattr_target_10;
        if (generator_heap->var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 379;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_37 = generator_heap->var_m;
        generator->m_frame->m_frame.f_lineno = 379;
        tmp_assattr_name_10 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_37,
            mod_consts[36],
            &PyTuple_GET_ITEM(mod_consts[111], 0)
        );

        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 379;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_info);
        tmp_assattr_target_10 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[45], tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 379;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_20:;
    branch_no_19:;
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_called_instance_38;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(generator_heap->var_info);
        tmp_called_instance_38 = generator_heap->var_info;
        generator->m_frame->m_frame.f_lineno = 381;
        tmp_assattr_name_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_38, mod_consts[107]);
        if (tmp_assattr_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 381;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_info == NULL) {
            Py_DECREF(tmp_assattr_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[92]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 381;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_11 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[108], tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 381;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        if (generator_heap->var_szHardwareID_str == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[88]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 383;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_name_12 = generator_heap->var_szHardwareID_str;
        CHECK_OBJECT(generator_heap->var_info);
        tmp_assattr_target_12 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[108], tmp_assattr_name_12);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 383;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_end_18:;
    branch_end_8:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_39;
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 386;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 386;
        tmp_assign_source_29 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_39,
            mod_consts[24],
            &PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 386;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_szFriendlyName;
            generator_heap->var_szFriendlyName = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_called_name_39;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_name_88;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_called_name_40;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_args_element_name_90;
        PyObject *tmp_args_element_name_91;
        PyObject *tmp_args_element_name_92;
        PyObject *tmp_args_element_name_93;
        PyObject *tmp_called_instance_40;
        PyObject *tmp_args_element_name_94;
        PyObject *tmp_args_element_name_95;
        PyObject *tmp_left_name_9;
        PyObject *tmp_called_name_41;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_args_element_name_96;
        PyObject *tmp_right_name_9;
        PyObject *tmp_args_element_name_97;
        int tmp_truth_name_14;
        tmp_called_name_39 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_name_39 == NULL)) {
            tmp_called_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 387;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_g_hdi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[65]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 388;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_88 = generator_heap->var_g_hdi;
        tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_36 == NULL)) {
            tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 389;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_40 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[21]);
        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 389;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_devinfo == NULL) {
            Py_DECREF(tmp_called_name_40);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[62]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 389;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_90 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 389;
        tmp_args_element_name_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_40, tmp_args_element_name_90);
        Py_DECREF(tmp_called_name_40);
        if (tmp_args_element_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 389;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_91 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_args_element_name_91 == NULL)) {
            tmp_args_element_name_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_args_element_name_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_89);

            generator_heap->exception_lineno = 390;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_92 = Py_None;
        tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_40 == NULL)) {
            tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_89);

            generator_heap->exception_lineno = 393;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_szFriendlyName);
        tmp_args_element_name_94 = generator_heap->var_szFriendlyName;
        generator->m_frame->m_frame.f_lineno = 393;
        tmp_args_element_name_93 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_40, mod_consts[21], tmp_args_element_name_94);
        if (tmp_args_element_name_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_89);

            generator_heap->exception_lineno = 393;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_37 == NULL)) {
            tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_89);
            Py_DECREF(tmp_args_element_name_93);

            generator_heap->exception_lineno = 394;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[28]);
        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_89);
            Py_DECREF(tmp_args_element_name_93);

            generator_heap->exception_lineno = 394;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_szFriendlyName == NULL) {
            Py_DECREF(tmp_args_element_name_89);
            Py_DECREF(tmp_args_element_name_93);
            Py_DECREF(tmp_called_name_41);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[113]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 394;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_96 = generator_heap->var_szFriendlyName;
        generator->m_frame->m_frame.f_lineno = 394;
        tmp_left_name_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_41, tmp_args_element_name_96);
        Py_DECREF(tmp_called_name_41);
        if (tmp_left_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_89);
            Py_DECREF(tmp_args_element_name_93);

            generator_heap->exception_lineno = 394;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_9 = mod_consts[29];
        tmp_args_element_name_95 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_left_name_9);
        if (tmp_args_element_name_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_89);
            Py_DECREF(tmp_args_element_name_93);

            generator_heap->exception_lineno = 394;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_97 = Py_None;
        generator->m_frame->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = {tmp_args_element_name_88, tmp_args_element_name_89, tmp_args_element_name_91, tmp_args_element_name_92, tmp_args_element_name_93, tmp_args_element_name_95, tmp_args_element_name_97};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS7(tmp_called_name_39, call_args);
        }

        Py_DECREF(tmp_args_element_name_89);
        Py_DECREF(tmp_args_element_name_93);
        Py_DECREF(tmp_args_element_name_95);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 387;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_call_result_18);
        if (tmp_truth_name_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_18);

            generator_heap->exception_lineno = 387;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_21 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_18);
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_assattr_target_13;
        if (generator_heap->var_szFriendlyName == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[113]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 396;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_38 = generator_heap->var_szFriendlyName;
        tmp_assattr_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[31]);
        if (tmp_assattr_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 396;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_info == NULL) {
            Py_DECREF(tmp_assattr_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[92]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 396;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_13 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[114], tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_name_13);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 396;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_21:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_instance_41;
        tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_41 == NULL)) {
            tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 404;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 404;
        tmp_assign_source_30 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_41,
            mod_consts[24],
            &PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 404;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_szManufacturer;
            generator_heap->var_szManufacturer = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_called_name_42;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_name_98;
        PyObject *tmp_args_element_name_99;
        PyObject *tmp_called_name_43;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_args_element_name_100;
        PyObject *tmp_args_element_name_101;
        PyObject *tmp_args_element_name_102;
        PyObject *tmp_args_element_name_103;
        PyObject *tmp_called_instance_42;
        PyObject *tmp_args_element_name_104;
        PyObject *tmp_args_element_name_105;
        PyObject *tmp_left_name_10;
        PyObject *tmp_called_name_44;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_args_element_name_106;
        PyObject *tmp_right_name_10;
        PyObject *tmp_args_element_name_107;
        int tmp_truth_name_15;
        tmp_called_name_42 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_name_42 == NULL)) {
            tmp_called_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 405;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_g_hdi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[65]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 406;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_98 = generator_heap->var_g_hdi;
        tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_39 == NULL)) {
            tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 407;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_43 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[21]);
        if (tmp_called_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 407;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_devinfo == NULL) {
            Py_DECREF(tmp_called_name_43);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[62]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 407;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_100 = generator_heap->var_devinfo;
        generator->m_frame->m_frame.f_lineno = 407;
        tmp_args_element_name_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_43, tmp_args_element_name_100);
        Py_DECREF(tmp_called_name_43);
        if (tmp_args_element_name_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 407;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_101 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_args_element_name_101 == NULL)) {
            tmp_args_element_name_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_args_element_name_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_99);

            generator_heap->exception_lineno = 408;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_102 = Py_None;
        tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_42 == NULL)) {
            tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_99);

            generator_heap->exception_lineno = 411;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_szManufacturer);
        tmp_args_element_name_104 = generator_heap->var_szManufacturer;
        generator->m_frame->m_frame.f_lineno = 411;
        tmp_args_element_name_103 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_42, mod_consts[21], tmp_args_element_name_104);
        if (tmp_args_element_name_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_99);

            generator_heap->exception_lineno = 411;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_40 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_40 == NULL)) {
            tmp_expression_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_99);
            Py_DECREF(tmp_args_element_name_103);

            generator_heap->exception_lineno = 412;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[28]);
        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_99);
            Py_DECREF(tmp_args_element_name_103);

            generator_heap->exception_lineno = 412;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_szManufacturer == NULL) {
            Py_DECREF(tmp_args_element_name_99);
            Py_DECREF(tmp_args_element_name_103);
            Py_DECREF(tmp_called_name_44);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[116]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 412;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_106 = generator_heap->var_szManufacturer;
        generator->m_frame->m_frame.f_lineno = 412;
        tmp_left_name_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_44, tmp_args_element_name_106);
        Py_DECREF(tmp_called_name_44);
        if (tmp_left_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_99);
            Py_DECREF(tmp_args_element_name_103);

            generator_heap->exception_lineno = 412;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_10 = mod_consts[29];
        tmp_args_element_name_105 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_left_name_10);
        if (tmp_args_element_name_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_99);
            Py_DECREF(tmp_args_element_name_103);

            generator_heap->exception_lineno = 412;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_107 = Py_None;
        generator->m_frame->m_frame.f_lineno = 405;
        {
            PyObject *call_args[] = {tmp_args_element_name_98, tmp_args_element_name_99, tmp_args_element_name_101, tmp_args_element_name_102, tmp_args_element_name_103, tmp_args_element_name_105, tmp_args_element_name_107};
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS7(tmp_called_name_42, call_args);
        }

        Py_DECREF(tmp_args_element_name_99);
        Py_DECREF(tmp_args_element_name_103);
        Py_DECREF(tmp_args_element_name_105);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 405;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_call_result_19);
        if (tmp_truth_name_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_19);

            generator_heap->exception_lineno = 405;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_22 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_19);
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_assattr_target_14;
        if (generator_heap->var_szManufacturer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[116]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 414;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_41 = generator_heap->var_szManufacturer;
        tmp_assattr_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[31]);
        if (tmp_assattr_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 414;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_info == NULL) {
            Py_DECREF(tmp_assattr_name_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[92]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 414;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_14 = generator_heap->var_info;
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[117], tmp_assattr_name_14);
        Py_DECREF(tmp_assattr_name_14);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 414;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_22:;
    {
        PyObject *tmp_expression_name_42;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (generator_heap->var_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[92]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 415;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_42 = generator_heap->var_info;
        Py_INCREF(tmp_expression_name_42);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_42;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 415;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 272;
        generator_heap->type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_called_name_45;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_name_108;
        tmp_called_name_45 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_called_name_45 == NULL)) {
            tmp_called_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_called_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 416;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (generator_heap->var_g_hdi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[65]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 416;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_108 = generator_heap->var_g_hdi;
        generator->m_frame->m_frame.f_lineno = 416;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_45, tmp_args_element_name_108);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 416;
            generator_heap->type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_20);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 261;
        generator_heap->type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator_heap->var_PortsGUIDs,
            generator_heap->var_ports_guids_size,
            generator_heap->var_ModemsGUIDs,
            generator_heap->var_modems_guids_size,
            generator_heap->var_GUIDs,
            generator_heap->var_index,
            generator_heap->var_bInterfaceNumber,
            generator_heap->var_g_hdi,
            generator_heap->var_devinfo,
            generator_heap->var_hkey,
            generator_heap->var_port_name_buffer,
            generator_heap->var_port_name_length,
            generator_heap->var_szHardwareID,
            generator_heap->var_szHardwareID_str,
            generator_heap->var_info,
            generator_heap->var_m,
            generator_heap->var_loc_path_str,
            generator_heap->var_location,
            generator_heap->var_g,
            generator_heap->var_szFriendlyName,
            generator_heap->var_szManufacturer
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_PortsGUIDs);
    generator_heap->var_PortsGUIDs = NULL;
    Py_XDECREF(generator_heap->var_ports_guids_size);
    generator_heap->var_ports_guids_size = NULL;
    Py_XDECREF(generator_heap->var_ModemsGUIDs);
    generator_heap->var_ModemsGUIDs = NULL;
    Py_XDECREF(generator_heap->var_modems_guids_size);
    generator_heap->var_modems_guids_size = NULL;
    Py_XDECREF(generator_heap->var_GUIDs);
    generator_heap->var_GUIDs = NULL;
    Py_XDECREF(generator_heap->var_index);
    generator_heap->var_index = NULL;
    Py_XDECREF(generator_heap->var_bInterfaceNumber);
    generator_heap->var_bInterfaceNumber = NULL;
    Py_XDECREF(generator_heap->var_g_hdi);
    generator_heap->var_g_hdi = NULL;
    Py_XDECREF(generator_heap->var_devinfo);
    generator_heap->var_devinfo = NULL;
    Py_XDECREF(generator_heap->var_hkey);
    generator_heap->var_hkey = NULL;
    Py_XDECREF(generator_heap->var_port_name_buffer);
    generator_heap->var_port_name_buffer = NULL;
    Py_XDECREF(generator_heap->var_port_name_length);
    generator_heap->var_port_name_length = NULL;
    Py_XDECREF(generator_heap->var_szHardwareID);
    generator_heap->var_szHardwareID = NULL;
    Py_XDECREF(generator_heap->var_szHardwareID_str);
    generator_heap->var_szHardwareID_str = NULL;
    Py_XDECREF(generator_heap->var_info);
    generator_heap->var_info = NULL;
    Py_XDECREF(generator_heap->var_m);
    generator_heap->var_m = NULL;
    Py_XDECREF(generator_heap->var_loc_path_str);
    generator_heap->var_loc_path_str = NULL;
    Py_XDECREF(generator_heap->var_location);
    generator_heap->var_location = NULL;
    Py_XDECREF(generator_heap->var_g);
    generator_heap->var_g = NULL;
    Py_XDECREF(generator_heap->var_szFriendlyName);
    generator_heap->var_szFriendlyName = NULL;
    Py_XDECREF(generator_heap->var_szManufacturer);
    generator_heap->var_szManufacturer = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    Py_XDECREF(generator_heap->var_PortsGUIDs);
    generator_heap->var_PortsGUIDs = NULL;
    Py_XDECREF(generator_heap->var_ports_guids_size);
    generator_heap->var_ports_guids_size = NULL;
    Py_XDECREF(generator_heap->var_ModemsGUIDs);
    generator_heap->var_ModemsGUIDs = NULL;
    Py_XDECREF(generator_heap->var_modems_guids_size);
    generator_heap->var_modems_guids_size = NULL;
    Py_XDECREF(generator_heap->var_GUIDs);
    generator_heap->var_GUIDs = NULL;
    Py_XDECREF(generator_heap->var_index);
    generator_heap->var_index = NULL;
    Py_XDECREF(generator_heap->var_bInterfaceNumber);
    generator_heap->var_bInterfaceNumber = NULL;
    Py_XDECREF(generator_heap->var_g_hdi);
    generator_heap->var_g_hdi = NULL;
    Py_XDECREF(generator_heap->var_devinfo);
    generator_heap->var_devinfo = NULL;
    Py_XDECREF(generator_heap->var_hkey);
    generator_heap->var_hkey = NULL;
    Py_XDECREF(generator_heap->var_port_name_buffer);
    generator_heap->var_port_name_buffer = NULL;
    Py_XDECREF(generator_heap->var_port_name_length);
    generator_heap->var_port_name_length = NULL;
    Py_XDECREF(generator_heap->var_szHardwareID);
    generator_heap->var_szHardwareID = NULL;
    Py_XDECREF(generator_heap->var_szHardwareID_str);
    generator_heap->var_szHardwareID_str = NULL;
    Py_XDECREF(generator_heap->var_info);
    generator_heap->var_info = NULL;
    Py_XDECREF(generator_heap->var_m);
    generator_heap->var_m = NULL;
    Py_XDECREF(generator_heap->var_loc_path_str);
    generator_heap->var_loc_path_str = NULL;
    Py_XDECREF(generator_heap->var_location);
    generator_heap->var_location = NULL;
    Py_XDECREF(generator_heap->var_g);
    generator_heap->var_g = NULL;
    Py_XDECREF(generator_heap->var_szFriendlyName);
    generator_heap->var_szFriendlyName = NULL;
    Py_XDECREF(generator_heap->var_szManufacturer);
    generator_heap->var_szManufacturer = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_serial$tools$list_ports_windows$$$function__5_iterate_comports$$$genobj__1_iterate_comports() {
    return Nuitka_Generator_New(
        serial$tools$list_ports_windows$$$function__5_iterate_comports$$$genobj__1_iterate_comports_context,
        module_serial$tools$list_ports_windows,
        mod_consts[119],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_4c0b78508fd77f89ef5d7c221444cd5d,
        NULL,
        0,
        sizeof(struct serial$tools$list_ports_windows$$$function__5_iterate_comports$$$genobj__1_iterate_comports_locals)
    );
}


static PyObject *impl_serial$tools$list_ports_windows$$$function__6_comports(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_include_links = python_pars[0];
    struct Nuitka_FrameObject *frame_9c06589499fb7521b6c7220be77c49ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9c06589499fb7521b6c7220be77c49ac = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9c06589499fb7521b6c7220be77c49ac)) {
        Py_XDECREF(cache_frame_9c06589499fb7521b6c7220be77c49ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c06589499fb7521b6c7220be77c49ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c06589499fb7521b6c7220be77c49ac = MAKE_FUNCTION_FRAME(codeobj_9c06589499fb7521b6c7220be77c49ac, module_serial$tools$list_ports_windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9c06589499fb7521b6c7220be77c49ac->m_type_description == NULL);
    frame_9c06589499fb7521b6c7220be77c49ac = cache_frame_9c06589499fb7521b6c7220be77c49ac;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9c06589499fb7521b6c7220be77c49ac);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9c06589499fb7521b6c7220be77c49ac) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9c06589499fb7521b6c7220be77c49ac->m_frame.f_lineno = 421;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9c06589499fb7521b6c7220be77c49ac);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9c06589499fb7521b6c7220be77c49ac);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9c06589499fb7521b6c7220be77c49ac);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9c06589499fb7521b6c7220be77c49ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c06589499fb7521b6c7220be77c49ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c06589499fb7521b6c7220be77c49ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c06589499fb7521b6c7220be77c49ac,
        type_description_1,
        par_include_links
    );


    // Release cached frame if used for exception.
    if (frame_9c06589499fb7521b6c7220be77c49ac == cache_frame_9c06589499fb7521b6c7220be77c49ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9c06589499fb7521b6c7220be77c49ac);
        cache_frame_9c06589499fb7521b6c7220be77c49ac = NULL;
    }

    assertFrameObject(frame_9c06589499fb7521b6c7220be77c49ac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_include_links);
    Py_DECREF(par_include_links);
    par_include_links = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_include_links);
    Py_DECREF(par_include_links);
    par_include_links = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__1_ValidHandle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function__1_ValidHandle,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_853873b50ebd8e32f741079efea16919,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_windows,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__2___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function__2___str__,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_132b50f119eeb2796b3bf38068100023,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_windows,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__3___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function__3___str__,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_f080456bece37bb3062093a7f8c6c020,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_windows,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__4_get_parent_serial_number(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function__4_get_parent_serial_number,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3724822264bd0160ce66343a21e8da73,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_windows,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__5_iterate_comports() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function__5_iterate_comports,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c0b78508fd77f89ef5d7c221444cd5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_windows,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__6_comports(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function__6_comports,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9c06589499fb7521b6c7220be77c49ac,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_serial$tools$list_ports_windows,
        mod_consts[120],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_serial$tools$list_ports_windows[] = {
    impl_serial$tools$list_ports_windows$$$function__1_ValidHandle,
    impl_serial$tools$list_ports_windows$$$function__2___str__,
    impl_serial$tools$list_ports_windows$$$function__3___str__,
    impl_serial$tools$list_ports_windows$$$function__4_get_parent_serial_number,
    impl_serial$tools$list_ports_windows$$$function__5_iterate_comports,
    impl_serial$tools$list_ports_windows$$$function__6_comports,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_serial$tools$list_ports_windows;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_serial$tools$list_ports_windows) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_serial$tools$list_ports_windows[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_serial$tools$list_ports_windows,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_serial$tools$list_ports_windows(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_serial$tools$list_ports_windows = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("serial.tools.list_ports_windows: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("serial.tools.list_ports_windows: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("serial.tools.list_ports_windows: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initserial$tools$list_ports_windows\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_serial$tools$list_ports_windows = MODULE_DICT(module_serial$tools$list_ports_windows);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_serial$tools$list_ports_windows,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_serial$tools$list_ports_windows,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_serial$tools$list_ports_windows,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_serial$tools$list_ports_windows,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_serial$tools$list_ports_windows,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_serial$tools$list_ports_windows);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_serial$tools$list_ports_windows);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_5d3e5afc468b0898e11cda2110bac463;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_serial$tools$list_ports_windows$$$class__1_GUID_48 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_a0867b1c17246fabc808099af00e15ab_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a0867b1c17246fabc808099af00e15ab_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66 = NULL;
    struct Nuitka_FrameObject *frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_5d3e5afc468b0898e11cda2110bac463 = MAKE_MODULE_FRAME(codeobj_5d3e5afc468b0898e11cda2110bac463, module_serial$tools$list_ports_windows);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_5d3e5afc468b0898e11cda2110bac463);
    assert(Py_REFCNT(frame_5d3e5afc468b0898e11cda2110bac463) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[122];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[125], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[126], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 11;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[128]);
        }

        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[32];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 14;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[1];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 15;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[129];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[130];
        tmp_level_name_3 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_serial$tools$list_ports_windows,
                mod_consts[131],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[129];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[132];
        tmp_level_name_4 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 17;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_serial$tools$list_ports_windows,
                mod_consts[133],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[133]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[129];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[134];
        tmp_level_name_5 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 18;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_serial$tools$list_ports_windows,
                mod_consts[19],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[129];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[135];
        tmp_level_name_6 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 19;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_serial$tools$list_ports_windows,
                mod_consts[136],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[136]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[129];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[137];
        tmp_level_name_7 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 20;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_serial$tools$list_ports_windows,
                mod_consts[138],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[138]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[129];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[139];
        tmp_level_name_8 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 21;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_serial$tools$list_ports_windows,
                mod_consts[71],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[71]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_arg_name_9;
        PyObject *tmp_locals_arg_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = mod_consts[129];
        tmp_globals_arg_name_9 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[140];
        tmp_level_name_9 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 22;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_arg_name_9, tmp_locals_arg_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_serial$tools$list_ports_windows,
                mod_consts[141],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[141]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_arg_name_10;
        PyObject *tmp_locals_arg_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = mod_consts[129];
        tmp_globals_arg_name_10 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[142];
        tmp_level_name_10 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 23;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_arg_name_10, tmp_locals_arg_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_serial$tools$list_ports_windows,
                mod_consts[143],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[143]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_arg_name_11;
        PyObject *tmp_locals_arg_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = mod_consts[144];
        tmp_globals_arg_name_11 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_11 = Py_None;
        tmp_fromlist_name_11 = Py_None;
        tmp_level_name_11 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 24;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_arg_name_11, tmp_locals_arg_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_arg_name_12;
        PyObject *tmp_locals_arg_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = mod_consts[145];
        tmp_globals_arg_name_12 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_12 = Py_None;
        tmp_fromlist_name_12 = mod_consts[146];
        tmp_level_name_12 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 25;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_arg_name_12, tmp_locals_arg_name_12, tmp_fromlist_name_12, tmp_level_name_12);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_serial$tools$list_ports_windows,
                mod_consts[147],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[147]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_arg_name_13;
        PyObject *tmp_locals_arg_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = mod_consts[148];
        tmp_globals_arg_name_13 = (PyObject *)moduledict_serial$tools$list_ports_windows;
        tmp_locals_arg_name_13 = Py_None;
        tmp_fromlist_name_13 = mod_consts[149];
        tmp_level_name_13 = mod_consts[0];
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 26;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_13, tmp_globals_arg_name_13, tmp_locals_arg_name_13, tmp_fromlist_name_13, tmp_level_name_13);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_serial$tools$list_ports_windows,
                mod_consts[84],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[84]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__1_ValidHandle();

        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[151]);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[153]);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[153]);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_name_4;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[153]);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[157]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_name_1 == NULL)) {
            tmp_args_element_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 40;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_25 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_26 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_26);
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_name_6;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[151]);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_2__assign_source == NULL);
        tmp_assign_unpack_2__assign_source = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_28 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_29 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_29);
    }
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assign_source_30 == NULL)) {
            tmp_assign_source_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_assign_source_31 == NULL)) {
            tmp_assign_source_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        assert(!(tmp_assign_source_31 == NULL));
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_31);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_7;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[164]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        tmp_assign_source_32 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_32, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_33 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[165];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_8 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[0];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_8, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_35 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[165];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 48;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_9 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_9, mod_consts[166]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_10 = tmp_class_creation_1__metaclass;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[166]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[48];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 48;
        tmp_assign_source_36 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_11 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_11, mod_consts[167]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[168];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[169];
        tmp_getattr_default_1 = mod_consts[170];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_12;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_12 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_12 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[169]);
            Py_DECREF(tmp_expression_name_12);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 48;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_37;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_serial$tools$list_ports_windows$$$class__1_GUID_48 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyObject_SetItem(locals_serial$tools$list_ports_windows$$$class__1_GUID_48, mod_consts[172], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[48];
        tmp_res = PyObject_SetItem(locals_serial$tools$list_ports_windows$$$class__1_GUID_48, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_a0867b1c17246fabc808099af00e15ab_2)) {
            Py_XDECREF(cache_frame_a0867b1c17246fabc808099af00e15ab_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a0867b1c17246fabc808099af00e15ab_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a0867b1c17246fabc808099af00e15ab_2 = MAKE_FUNCTION_FRAME(codeobj_a0867b1c17246fabc808099af00e15ab, module_serial$tools$list_ports_windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a0867b1c17246fabc808099af00e15ab_2->m_type_description == NULL);
        frame_a0867b1c17246fabc808099af00e15ab_2 = cache_frame_a0867b1c17246fabc808099af00e15ab_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a0867b1c17246fabc808099af00e15ab_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a0867b1c17246fabc808099af00e15ab_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[5];
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_serial$tools$list_ports_windows$$$class__1_GUID_48, mod_consts[19]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 50;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[7];
                tmp_list_element_1 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_serial$tools$list_ports_windows$$$class__1_GUID_48, mod_consts[136]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[136]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 51;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
                tmp_tuple_element_6 = mod_consts[8];
                tmp_list_element_1 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_serial$tools$list_ports_windows$$$class__1_GUID_48, mod_consts[136]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[136]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 52;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
                tmp_tuple_element_7 = mod_consts[11];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_right_name_2;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                    tmp_left_name_2 = PyObject_GetItem(locals_serial$tools$list_ports_windows$$$class__1_GUID_48, mod_consts[143]);

                    if (tmp_left_name_2 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_left_name_2 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[143]);

                            if (unlikely(tmp_left_name_2 == NULL)) {
                                tmp_left_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                            }

                            if (tmp_left_name_2 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 53;
                                type_description_2 = "o";
                                goto tuple_build_exception_5;
                            }
                            Py_INCREF(tmp_left_name_2);
                        }
                    }

                    tmp_right_name_2 = mod_consts[49];
                    tmp_tuple_element_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
                    Py_DECREF(tmp_left_name_2);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_serial$tools$list_ports_windows$$$class__1_GUID_48, mod_consts[174], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__2___str__();

        tmp_res = PyObject_SetItem(locals_serial$tools$list_ports_windows$$$class__1_GUID_48, mod_consts[175], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a0867b1c17246fabc808099af00e15ab_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a0867b1c17246fabc808099af00e15ab_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a0867b1c17246fabc808099af00e15ab_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a0867b1c17246fabc808099af00e15ab_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a0867b1c17246fabc808099af00e15ab_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a0867b1c17246fabc808099af00e15ab_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_a0867b1c17246fabc808099af00e15ab_2 == cache_frame_a0867b1c17246fabc808099af00e15ab_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a0867b1c17246fabc808099af00e15ab_2);
            cache_frame_a0867b1c17246fabc808099af00e15ab_2 = NULL;
        }

        assertFrameObject(frame_a0867b1c17246fabc808099af00e15ab_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_serial$tools$list_ports_windows$$$class__1_GUID_48, mod_consts[177], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_8 = mod_consts[48];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_8 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_serial$tools$list_ports_windows$$$class__1_GUID_48;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 48;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_38 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_serial$tools$list_ports_windows$$$class__1_GUID_48);
        locals_serial$tools$list_ports_windows$$$class__1_GUID_48 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_serial$tools$list_ports_windows$$$class__1_GUID_48);
        locals_serial$tools$list_ports_windows$$$class__1_GUID_48 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 48;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_38);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_name_13;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[164]);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_assign_source_40 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_40, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_41 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[165];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_14 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = mod_consts[0];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_14, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_43 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[165];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 66;

        goto try_except_handler_4;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_15 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_15, mod_consts[166]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_16 = tmp_class_creation_2__metaclass;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[166]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_tuple_element_10 = mod_consts[61];
        tmp_args_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_10 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 66;
        tmp_assign_source_44 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_44;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_17;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_17 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_17, mod_consts[167]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_3 = mod_consts[168];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[169];
        tmp_getattr_default_2 = mod_consts[170];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_18;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_name_18 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_18 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[169]);
            Py_DECREF(tmp_expression_name_18);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_right_name_3);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 66;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_45;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_46;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyObject_SetItem(locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66, mod_consts[172], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3)) {
            Py_XDECREF(cache_frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3 = MAKE_FUNCTION_FRAME(codeobj_f66d2e5bcc4fde99ef5967eb25e64ef2, module_serial$tools$list_ports_windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3->m_type_description == NULL);
        frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3 = cache_frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_12;
            tmp_tuple_element_12 = mod_consts[63];
            tmp_list_element_2 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = PyObject_GetItem(locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66, mod_consts[19]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 68;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_12);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_tuple_element_15;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_13 = mod_consts[16];
                tmp_list_element_2 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66, mod_consts[48]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[48]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 69;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_13);
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_14 = mod_consts[17];
                tmp_list_element_2 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66, mod_consts[19]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 70;
                            type_description_2 = "o";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_14);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_15 = mod_consts[178];
                tmp_list_element_2 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66, mod_consts[147]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[147]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 71;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_15);
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66, mod_consts[174], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__3___str__();

        tmp_res = PyObject_SetItem(locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66, mod_consts[175], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3 == cache_frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3);
            cache_frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3 = NULL;
        }

        assertFrameObject(frame_f66d2e5bcc4fde99ef5967eb25e64ef2_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66, mod_consts[177], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_6;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_16 = mod_consts[61];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_16 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 66;
            tmp_assign_source_47 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_47;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_46 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_46);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66);
        locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66);
        locals_serial$tools$list_ports_windows$$$class__2_SP_DEVINFO_DATA_66 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 66;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_46);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_args_element_name_2;
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[157]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_name_2 == NULL)) {
            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 78;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_6);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_expression_name_20;
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[151]);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_21;
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[182]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 82;
        tmp_assign_source_50 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[183],
            &PyTuple_GET_ITEM(mod_consts[184], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_expression_name_22;
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        assert(!(tmp_expression_name_22 == NULL));
        tmp_assign_source_51 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[118]);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_list_element_3;
        PyObject *tmp_assattr_target_3;
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = PyList_New(1);
        PyList_SET_ITEM0(tmp_assattr_name_3, 0, tmp_list_element_3);
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[186], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_assattr_name_4 == NULL)) {
            tmp_assattr_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[187], tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_expression_name_23;
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_52 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[188]);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_list_element_4;
        PyObject *tmp_assattr_target_5;
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_5 = PyList_New(4);
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_expression_name_24;
            PyObject *tmp_args_element_name_3;
            PyList_SET_ITEM0(tmp_assattr_name_5, 0, tmp_list_element_4);
            tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_name_24 == NULL)) {
                tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_name_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_3;
            }
            tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[157]);
            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_3;
            }
            tmp_args_element_name_3 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_args_element_name_3 == NULL)) {
                tmp_args_element_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_7);

                exception_lineno = 88;

                goto list_build_exception_3;
            }
            frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 88;
            tmp_list_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_3);
            Py_DECREF(tmp_called_name_7);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_assattr_name_5, 1, tmp_list_element_4);
            tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_list_element_4 == NULL)) {
                tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM0(tmp_assattr_name_5, 2, tmp_list_element_4);
            tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[159]);

            if (unlikely(tmp_list_element_4 == NULL)) {
                tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
            }

            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM0(tmp_assattr_name_5, 3, tmp_list_element_4);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assattr_name_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_5);

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[186], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_assattr_name_6 == NULL)) {
            tmp_assattr_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[187], tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_expression_name_25;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[64]);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_list_element_5;
        PyObject *tmp_assattr_target_7;
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_7 = PyList_New(3);
        PyList_SET_ITEM0(tmp_assattr_name_7, 0, tmp_list_element_5);
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_name_7, 1, tmp_list_element_5);
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_name_7, 2, tmp_list_element_5);
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assattr_name_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assattr_target_7 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[186], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_assattr_name_8 == NULL)) {
            tmp_assattr_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_assattr_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[187], tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_expression_name_26;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_54 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[189]);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_list_element_6;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_assattr_target_9;
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[157]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_args_element_name_4 == NULL)) {
            tmp_args_element_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 96;
        tmp_list_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_8);
        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_9 = PyList_New(4);
        PyList_SET_ITEM(tmp_assattr_name_9, 0, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_assattr_name_9, 1, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_assattr_name_9, 2, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_assattr_name_9, 3, tmp_list_element_6);
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assattr_name_9);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_9);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[186], tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_name_10 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_assattr_name_10 == NULL)) {
            tmp_assattr_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[187], tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_name_11 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_assattr_name_11 == NULL)) {
            tmp_assattr_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_assattr_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_assattr_target_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[190], tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_expression_name_28;
        tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_expression_name_28 == NULL)) {
            tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[191]);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_list_element_7;
        PyObject *tmp_assattr_target_12;
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_12 = PyList_New(7);
        PyList_SET_ITEM0(tmp_assattr_name_12, 0, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_name_12, 1, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_name_12, 2, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_name_12, 3, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_name_12, 4, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_name_12, 5, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_name_12, 6, tmp_list_element_7);
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_name_12);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_assattr_target_12 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[186], tmp_assattr_name_12);
        Py_DECREF(tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_name_13 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_assattr_name_13 == NULL)) {
            tmp_assattr_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_assattr_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[187], tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_expression_name_29;
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_56 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[192]);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_list_element_8;
        PyObject *tmp_assattr_target_14;
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_14 = PyList_New(5);
        PyList_SET_ITEM0(tmp_assattr_name_14, 0, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_assattr_name_14, 1, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_assattr_name_14, 2, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_assattr_name_14, 3, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_assattr_name_14, 4, tmp_list_element_8);
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_name_14);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        assert(!(tmp_assattr_target_14 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[186], tmp_assattr_name_14);
        Py_DECREF(tmp_assattr_name_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_name_15 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_assattr_name_15 == NULL)) {
            tmp_assattr_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_assattr_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[187], tmp_assattr_name_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_expression_name_30;
        tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_expression_name_30 == NULL)) {
            tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_57 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[67]);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_list_element_9;
        PyObject *tmp_assattr_target_16;
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_16 = PyList_New(6);
        PyList_SET_ITEM0(tmp_assattr_name_16, 0, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto list_build_exception_8;
        }
        PyList_SET_ITEM0(tmp_assattr_name_16, 1, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto list_build_exception_8;
        }
        PyList_SET_ITEM0(tmp_assattr_name_16, 2, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto list_build_exception_8;
        }
        PyList_SET_ITEM0(tmp_assattr_name_16, 3, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto list_build_exception_8;
        }
        PyList_SET_ITEM0(tmp_assattr_name_16, 4, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto list_build_exception_8;
        }
        PyList_SET_ITEM0(tmp_assattr_name_16, 5, tmp_list_element_9);
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_name_16);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        assert(!(tmp_assattr_target_16 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[186], tmp_assattr_name_16);
        Py_DECREF(tmp_assattr_name_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_assattr_target_17;
        tmp_assattr_name_17 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_assattr_name_17 == NULL)) {
            tmp_assattr_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_assattr_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_assattr_target_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[187], tmp_assattr_name_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_31;
        tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_31 == NULL)) {
            tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[182]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 112;
        tmp_assign_source_58 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[183],
            &PyTuple_GET_ITEM(mod_consts[193], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_expression_name_32;
        tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_expression_name_32 == NULL)) {
            tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        assert(!(tmp_expression_name_32 == NULL));
        tmp_assign_source_59 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[75]);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_list_element_10;
        PyObject *tmp_assattr_target_18;
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_18 = PyList_New(1);
        PyList_SET_ITEM0(tmp_assattr_name_18, 0, tmp_list_element_10);
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        assert(!(tmp_assattr_target_18 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[186], tmp_assattr_name_18);
        Py_DECREF(tmp_assattr_name_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_19;
        PyObject *tmp_assattr_target_19;
        tmp_assattr_name_19 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_assattr_name_19 == NULL)) {
            tmp_assattr_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_assattr_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_assattr_target_19 == NULL)) {
            tmp_assattr_target_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_assattr_target_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[187], tmp_assattr_name_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_expression_name_33;
        tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_expression_name_33 == NULL)) {
            tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_60 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[195]);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assattr_name_20;
        PyObject *tmp_list_element_11;
        PyObject *tmp_assattr_target_20;
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_20 = PyList_New(6);
        PyList_SET_ITEM0(tmp_assattr_name_20, 0, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_assattr_name_20, 1, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_assattr_name_20, 2, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_assattr_name_20, 3, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_assattr_name_20, 4, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_assattr_name_20, 5, tmp_list_element_11);
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assattr_name_20);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_assattr_target_20 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[186], tmp_assattr_name_20);
        Py_DECREF(tmp_assattr_name_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_21;
        PyObject *tmp_assattr_target_21;
        tmp_assattr_name_21 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_assattr_name_21 == NULL)) {
            tmp_assattr_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_assattr_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_21 == NULL)) {
            tmp_assattr_target_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_assattr_target_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[187], tmp_assattr_name_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_34;
        tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_34 == NULL)) {
            tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[182]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_5d3e5afc468b0898e11cda2110bac463->m_frame.f_lineno = 121;
        tmp_assign_source_61 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[183],
            &PyTuple_GET_ITEM(mod_consts[196], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_expression_name_35;
        tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_expression_name_35 == NULL)) {
            tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        assert(!(tmp_expression_name_35 == NULL));
        tmp_assign_source_62 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[20]);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assattr_name_22;
        PyObject *tmp_list_element_12;
        PyObject *tmp_assattr_target_22;
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_22 = PyList_New(3);
        PyList_SET_ITEM0(tmp_assattr_name_22, 0, tmp_list_element_12);
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_assattr_name_22, 1, tmp_list_element_12);
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_assattr_name_22, 2, tmp_list_element_12);
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assattr_name_22);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_assattr_target_22 == NULL)) {
            tmp_assattr_target_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_assattr_target_22 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[186], tmp_assattr_name_22);
        Py_DECREF(tmp_assattr_name_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_23;
        PyObject *tmp_assattr_target_23;
        tmp_assattr_name_23 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_assattr_name_23 == NULL)) {
            tmp_assattr_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_assattr_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_assattr_target_23 == NULL)) {
            tmp_assattr_target_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_assattr_target_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[187], tmp_assattr_name_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_expression_name_36;
        tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_expression_name_36 == NULL)) {
            tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_expression_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_63 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[26]);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assattr_name_24;
        PyObject *tmp_list_element_13;
        PyObject *tmp_assattr_target_24;
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_24 = PyList_New(4);
        PyList_SET_ITEM0(tmp_assattr_name_24, 0, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_name_24, 1, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_name_24, 2, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_name_24, 3, tmp_list_element_13);
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assattr_name_24);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_assattr_target_24 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_24, mod_consts[186], tmp_assattr_name_24);
        Py_DECREF(tmp_assattr_name_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_25;
        PyObject *tmp_assattr_target_25;
        tmp_assattr_name_25 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_assattr_name_25 == NULL)) {
            tmp_assattr_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_assattr_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_assattr_target_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_25, mod_consts[187], tmp_assattr_name_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_expression_name_37;
        tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_expression_name_37 == NULL)) {
            tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_64 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[22]);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assattr_name_26;
        PyObject *tmp_list_element_14;
        PyObject *tmp_assattr_target_26;
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_26 = PyList_New(2);
        PyList_SET_ITEM0(tmp_assattr_name_26, 0, tmp_list_element_14);
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto list_build_exception_12;
        }
        PyList_SET_ITEM0(tmp_assattr_name_26, 1, tmp_list_element_14);
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_name_26);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_target_26 == NULL)) {
            tmp_assattr_target_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_assattr_target_26 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_26, mod_consts[186], tmp_assattr_name_26);
        Py_DECREF(tmp_assattr_name_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_27;
        PyObject *tmp_assattr_target_27;
        tmp_assattr_name_27 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_name_27 == NULL)) {
            tmp_assattr_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_assattr_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_27 = GET_STRING_DICT_VALUE(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_target_27 == NULL)) {
            tmp_assattr_target_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_assattr_target_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_27, mod_consts[187], tmp_assattr_name_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d3e5afc468b0898e11cda2110bac463);
#endif
    popFrameStack();

    assertFrameObject(frame_5d3e5afc468b0898e11cda2110bac463);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d3e5afc468b0898e11cda2110bac463);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5d3e5afc468b0898e11cda2110bac463, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d3e5afc468b0898e11cda2110bac463->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d3e5afc468b0898e11cda2110bac463, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[198];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[201];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[205];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[206];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[208];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_78 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__4_get_parent_serial_number(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;


        tmp_assign_source_79 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__5_iterate_comports();

        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[209];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_80 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function__6_comports(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_80);
    }

    return module_serial$tools$list_ports_windows;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

