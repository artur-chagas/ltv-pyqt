/* Generated code for Python module 'pygments.regexopt'
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

/* The "module_pygments$regexopt" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pygments$regexopt;
PyDictObject *moduledict_pygments$regexopt;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[74];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pygments.regexopt"));
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
void checkModuleConstants_pygments$regexopt(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "pygments.regexopt");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_64fb78e3f53f45811d1b73900b495e6a;
static PyCodeObject *codeobj_37c03fc3ae967effc72b3d2f0c0b853b;
static PyCodeObject *codeobj_3548a94f4817fc8bd0b435150813597a;
static PyCodeObject *codeobj_0a8fb01f8941a632d0bc79767e82652e;
static PyCodeObject *codeobj_87eaa39c3a644cc2e0f5af31d7d126b4;
static PyCodeObject *codeobj_7040aaf4ce8e68253b264270fd2d7362;
static PyCodeObject *codeobj_83b99577636a2ac1488f5a0a08dae9d9;
static PyCodeObject *codeobj_5a3e579e5b921069821abfc6a9ede614;
static PyCodeObject *codeobj_d88da0fdf3e9d05f9cc6559b23fab59f;
static PyCodeObject *codeobj_7fcb075eed9c947aeda0baedb26311c6;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[42]; CHECK_OBJECT(module_filename_obj);
    codeobj_64fb78e3f53f45811d1b73900b495e6a = MAKE_CODEOBJECT(module_filename_obj, 77, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[62], NULL, 1, 0, 0);
    codeobj_37c03fc3ae967effc72b3d2f0c0b853b = MAKE_CODEOBJECT(module_filename_obj, 72, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[63], NULL, 1, 0, 0);
    codeobj_3548a94f4817fc8bd0b435150813597a = MAKE_CODEOBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[64], NULL, 1, 0, 0);
    codeobj_0a8fb01f8941a632d0bc79767e82652e = MAKE_CODEOBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[65], mod_consts[66], 1, 0, 0);
    codeobj_87eaa39c3a644cc2e0f5af31d7d126b4 = MAKE_CODEOBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[68], NULL, 1, 0, 0);
    codeobj_7040aaf4ce8e68253b264270fd2d7362 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[69], NULL, 1, 0, 0);
    codeobj_83b99577636a2ac1488f5a0a08dae9d9 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[70], NULL, NULL, 0, 0, 0);
    codeobj_5a3e579e5b921069821abfc6a9ede614 = MAKE_CODEOBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[71], NULL, 1, 0, 0);
    codeobj_d88da0fdf3e9d05f9cc6559b23fab59f = MAKE_CODEOBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[72], NULL, 3, 0, 0);
    codeobj_7fcb075eed9c947aeda0baedb26311c6 = MAKE_CODEOBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[73], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pygments$regexopt$$$function__1_make_charset();


static PyObject *MAKE_FUNCTION_pygments$regexopt$$$function__1_make_charset$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_pygments$regexopt$$$function__2_regex_opt_inner();


static PyObject *MAKE_FUNCTION_pygments$regexopt$$$function__2_regex_opt_inner$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pygments$regexopt$$$function__3_regex_opt(PyObject *defaults);


// The module function definitions.
static PyObject *impl_pygments$regexopt$$$function__1_make_charset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_letters = python_pars[0];
    struct Nuitka_FrameObject *frame_5a3e579e5b921069821abfc6a9ede614;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5a3e579e5b921069821abfc6a9ede614 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5a3e579e5b921069821abfc6a9ede614)) {
        Py_XDECREF(cache_frame_5a3e579e5b921069821abfc6a9ede614);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5a3e579e5b921069821abfc6a9ede614 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5a3e579e5b921069821abfc6a9ede614 = MAKE_FUNCTION_FRAME(codeobj_5a3e579e5b921069821abfc6a9ede614, module_pygments$regexopt, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5a3e579e5b921069821abfc6a9ede614->m_type_description == NULL);
    frame_5a3e579e5b921069821abfc6a9ede614 = cache_frame_5a3e579e5b921069821abfc6a9ede614;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5a3e579e5b921069821abfc6a9ede614);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5a3e579e5b921069821abfc6a9ede614) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = mod_consts[0];
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[2]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }


        tmp_args_element_name_1 = MAKE_FUNCTION_pygments$regexopt$$$function__1_make_charset$$$function__1_lambda();

        tmp_called_instance_1 = mod_consts[5];
        CHECK_OBJECT(par_letters);
        tmp_args_element_name_3 = par_letters;
        frame_5a3e579e5b921069821abfc6a9ede614->m_frame.f_lineno = 23;
        tmp_args_element_name_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5a3e579e5b921069821abfc6a9ede614->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[7];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5a3e579e5b921069821abfc6a9ede614);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5a3e579e5b921069821abfc6a9ede614);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5a3e579e5b921069821abfc6a9ede614);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5a3e579e5b921069821abfc6a9ede614, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5a3e579e5b921069821abfc6a9ede614->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5a3e579e5b921069821abfc6a9ede614, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5a3e579e5b921069821abfc6a9ede614,
        type_description_1,
        par_letters
    );


    // Release cached frame if used for exception.
    if (frame_5a3e579e5b921069821abfc6a9ede614 == cache_frame_5a3e579e5b921069821abfc6a9ede614) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5a3e579e5b921069821abfc6a9ede614);
        cache_frame_5a3e579e5b921069821abfc6a9ede614 = NULL;
    }

    assertFrameObject(frame_5a3e579e5b921069821abfc6a9ede614);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_letters);
    par_letters = NULL;
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

    Py_XDECREF(par_letters);
    par_letters = NULL;
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


static PyObject *impl_pygments$regexopt$$$function__1_make_charset$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[0];
    struct Nuitka_FrameObject *frame_3548a94f4817fc8bd0b435150813597a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3548a94f4817fc8bd0b435150813597a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3548a94f4817fc8bd0b435150813597a)) {
        Py_XDECREF(cache_frame_3548a94f4817fc8bd0b435150813597a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3548a94f4817fc8bd0b435150813597a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3548a94f4817fc8bd0b435150813597a = MAKE_FUNCTION_FRAME(codeobj_3548a94f4817fc8bd0b435150813597a, module_pygments$regexopt, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3548a94f4817fc8bd0b435150813597a->m_type_description == NULL);
    frame_3548a94f4817fc8bd0b435150813597a = cache_frame_3548a94f4817fc8bd0b435150813597a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3548a94f4817fc8bd0b435150813597a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3548a94f4817fc8bd0b435150813597a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        tmp_left_name_1 = mod_consts[8];
        CHECK_OBJECT(par_m);
        tmp_called_instance_1 = par_m;
        frame_3548a94f4817fc8bd0b435150813597a->m_frame.f_lineno = 23;
        tmp_right_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3548a94f4817fc8bd0b435150813597a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3548a94f4817fc8bd0b435150813597a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3548a94f4817fc8bd0b435150813597a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3548a94f4817fc8bd0b435150813597a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3548a94f4817fc8bd0b435150813597a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3548a94f4817fc8bd0b435150813597a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3548a94f4817fc8bd0b435150813597a,
        type_description_1,
        par_m
    );


    // Release cached frame if used for exception.
    if (frame_3548a94f4817fc8bd0b435150813597a == cache_frame_3548a94f4817fc8bd0b435150813597a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3548a94f4817fc8bd0b435150813597a);
        cache_frame_3548a94f4817fc8bd0b435150813597a = NULL;
    }

    assertFrameObject(frame_3548a94f4817fc8bd0b435150813597a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_m);
    par_m = NULL;
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

    Py_XDECREF(par_m);
    par_m = NULL;
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


static PyObject *impl_pygments$regexopt$$$function__2_regex_opt_inner(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_strings = python_pars[0];
    PyObject *par_open_paren = python_pars[1];
    PyObject *var_close_paren = NULL;
    struct Nuitka_CellObject *var_first = Nuitka_Cell_Empty();
    PyObject *var_oneletter = NULL;
    PyObject *var_rest = NULL;
    PyObject *var_s = NULL;
    PyObject *var_prefix = NULL;
    PyObject *var_plen = NULL;
    PyObject *var_strings_rev = NULL;
    PyObject *var_suffix = NULL;
    struct Nuitka_CellObject *var_slen = Nuitka_Cell_Empty();
    PyObject *outline_0_var_s = NULL;
    PyObject *outline_1_var_s = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_7fcb075eed9c947aeda0baedb26311c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_FrameObject *frame_7040aaf4ce8e68253b264270fd2d7362_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_7040aaf4ce8e68253b264270fd2d7362_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_87eaa39c3a644cc2e0f5af31d7d126b4_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_87eaa39c3a644cc2e0f5af31d7d126b4_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_7fcb075eed9c947aeda0baedb26311c6 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7fcb075eed9c947aeda0baedb26311c6)) {
        Py_XDECREF(cache_frame_7fcb075eed9c947aeda0baedb26311c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7fcb075eed9c947aeda0baedb26311c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7fcb075eed9c947aeda0baedb26311c6 = MAKE_FUNCTION_FRAME(codeobj_7fcb075eed9c947aeda0baedb26311c6, module_pygments$regexopt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7fcb075eed9c947aeda0baedb26311c6->m_type_description == NULL);
    frame_7fcb075eed9c947aeda0baedb26311c6 = cache_frame_7fcb075eed9c947aeda0baedb26311c6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7fcb075eed9c947aeda0baedb26311c6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7fcb075eed9c947aeda0baedb26311c6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par_open_paren);
        tmp_and_left_value_1 = par_open_paren;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[10];
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[5];
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_close_paren == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_close_paren = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_strings);
        tmp_operand_name_1 = par_strings;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[5];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_strings);
        tmp_expression_name_1 = par_strings;
        tmp_subscript_name_1 = mod_consts[11];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_first) == NULL);
        PyCell_SET(var_first, tmp_assign_source_2);

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_2_object_1;
        CHECK_OBJECT(par_strings);
        tmp_len_arg_1 = par_strings;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[12];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_condition_result_2_object_1 == NULL));
        tmp_condition_result_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_open_paren);
        tmp_left_name_2 = par_open_paren;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(var_first) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(var_first);
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 36;
        tmp_right_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_close_paren);
        tmp_right_name_2 = var_close_paren;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        if (Nuitka_Cell_GET(var_first) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_2 = Nuitka_Cell_GET(var_first);
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT(par_open_paren);
        tmp_left_name_5 = par_open_paren;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        if (par_strings == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 39;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_strings;
        tmp_subscript_name_2 = mod_consts[17];
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = mod_consts[18];
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = mod_consts[19];
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_left_name_4);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_close_paren);
        tmp_right_name_5 = var_close_paren;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_5);
        Py_DECREF(tmp_left_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_tmp_condition_result_4_object_1;
        if (Nuitka_Cell_GET(var_first) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = Nuitka_Cell_GET(var_first);
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[12];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        assert(!(tmp_tmp_condition_result_4_object_1 == NULL));
        tmp_condition_result_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyList_New(0);
        assert(var_oneletter == NULL);
        var_oneletter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyList_New(0);
        assert(var_rest == NULL);
        var_rest = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        if (par_strings == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = par_strings;
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooocoooooooc";
                exception_lineno = 45;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_s;
            var_s = tmp_assign_source_7;
            Py_INCREF(var_s);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_tmp_condition_result_5_object_1;
        CHECK_OBJECT(var_s);
        tmp_len_arg_3 = var_s;
        tmp_compexpr_left_3 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_3 = mod_consts[12];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        assert(!(tmp_tmp_condition_result_5_object_1 == NULL));
        tmp_condition_result_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        if (var_oneletter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_name_3 = var_oneletter;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[21]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        if (var_s == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_args_element_name_4 = var_s;
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 47;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_5;
        if (var_rest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_name_4 = var_rest;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[21]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        if (var_s == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_args_element_name_5 = var_s;
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 49;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 45;
        type_description_1 = "ooocoooooooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_tmp_condition_result_6_object_1;
        if (var_oneletter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_4 = var_oneletter;
        tmp_compexpr_left_4 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = mod_consts[12];
        tmp_tmp_condition_result_6_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        assert(!(tmp_tmp_condition_result_6_object_1 == NULL));
        tmp_condition_result_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_6_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_6_object_1);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_1;
        if (var_rest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_rest);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT(par_open_paren);
        tmp_left_name_9 = par_open_paren;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        if (var_rest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = var_rest;
        tmp_args_element_name_7 = mod_consts[5];
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_right_name_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        if (tmp_right_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = mod_consts[24];
        tmp_left_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_8, tmp_right_name_7);
        Py_DECREF(tmp_left_name_8);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);

            exception_lineno = 54;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        if (var_oneletter == NULL) {
            Py_DECREF(tmp_left_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_8 = var_oneletter;
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 54;
        tmp_right_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_8);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);

            exception_lineno = 54;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_8);
        Py_DECREF(tmp_left_name_7);
        Py_DECREF(tmp_right_name_8);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_close_paren);
        tmp_right_name_9 = var_close_paren;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_9);
        Py_DECREF(tmp_left_name_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_7:;
    {
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_10;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT(par_open_paren);
        tmp_left_name_11 = par_open_paren;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        if (var_oneletter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = var_oneletter;
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 56;
        tmp_right_name_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_9);
        if (tmp_right_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_11, tmp_right_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_left_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_close_paren);
        tmp_right_name_11 = var_close_paren;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_11);
        Py_DECREF(tmp_left_name_10);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_6:;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_10;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        if (par_strings == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = par_strings;
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 57;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_10);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_prefix == NULL);
        var_prefix = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_prefix);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_prefix);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT(var_prefix);
        tmp_len_arg_5 = var_prefix;
        tmp_assign_source_9 = BUILTIN_LEN(tmp_len_arg_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_plen == NULL);
        var_plen = tmp_assign_source_9;
    }
    {
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_12;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_right_name_13;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT(par_open_paren);
        tmp_left_name_14 = par_open_paren;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = var_prefix;
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 62;
        tmp_right_name_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_11);
        if (tmp_right_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_14, tmp_right_name_12);
        Py_DECREF(tmp_right_name_12);
        if (tmp_left_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_13);

            exception_lineno = 63;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            if (par_strings == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[16]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_1 = "ooocoooooooc";
                goto try_except_handler_3;
            }

            tmp_iter_arg_2 = par_strings;
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "ooocoooooooc";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_11;
        }
        if (isFrameUnusable(cache_frame_7040aaf4ce8e68253b264270fd2d7362_2)) {
            Py_XDECREF(cache_frame_7040aaf4ce8e68253b264270fd2d7362_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7040aaf4ce8e68253b264270fd2d7362_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7040aaf4ce8e68253b264270fd2d7362_2 = MAKE_FUNCTION_FRAME(codeobj_7040aaf4ce8e68253b264270fd2d7362, module_pygments$regexopt, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_7040aaf4ce8e68253b264270fd2d7362_2->m_type_description == NULL);
        frame_7040aaf4ce8e68253b264270fd2d7362_2 = cache_frame_7040aaf4ce8e68253b264270fd2d7362_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_7040aaf4ce8e68253b264270fd2d7362_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_7040aaf4ce8e68253b264270fd2d7362_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_12 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 63;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_13 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_s;
                outline_0_var_s = tmp_assign_source_13;
                Py_INCREF(outline_0_var_s);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_name_5;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_s);
            tmp_expression_name_5 = outline_0_var_s;
            if (var_plen == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }

            tmp_start_name_1 = var_plen;
            tmp_stop_name_1 = Py_None;
            tmp_subscript_name_3 = MAKE_SLICEOBJ2(tmp_start_name_1, tmp_stop_name_1);
            assert(!(tmp_subscript_name_3 == NULL));
            tmp_append_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_3);
            Py_DECREF(tmp_subscript_name_3);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "oo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_name_12 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_name_12);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
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
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7040aaf4ce8e68253b264270fd2d7362_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_7040aaf4ce8e68253b264270fd2d7362_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7040aaf4ce8e68253b264270fd2d7362_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7040aaf4ce8e68253b264270fd2d7362_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7040aaf4ce8e68253b264270fd2d7362_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7040aaf4ce8e68253b264270fd2d7362_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7040aaf4ce8e68253b264270fd2d7362_2,
            type_description_2,
            outline_0_var_s,
            var_plen
        );


        // Release cached frame if used for exception.
        if (frame_7040aaf4ce8e68253b264270fd2d7362_2 == cache_frame_7040aaf4ce8e68253b264270fd2d7362_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_7040aaf4ce8e68253b264270fd2d7362_2);
            cache_frame_7040aaf4ce8e68253b264270fd2d7362_2 = NULL;
        }

        assertFrameObject(frame_7040aaf4ce8e68253b264270fd2d7362_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooocoooooooc";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_s);
        outline_0_var_s = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_s);
        outline_0_var_s = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 63;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_args_element_name_13 = mod_consts[18];
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_right_name_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_10, call_args);
        }

        Py_DECREF(tmp_args_element_name_12);
        if (tmp_right_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_13);

            exception_lineno = 63;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_left_name_13);
        Py_DECREF(tmp_right_name_13);
        if (tmp_left_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_close_paren);
        tmp_right_name_14 = var_close_paren;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_12, tmp_right_name_14);
        Py_DECREF(tmp_left_name_12);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_14;
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_3;
            if (par_strings == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[16]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_1 = "ooocoooooooc";
                goto try_except_handler_5;
            }

            tmp_iter_arg_3 = par_strings;
            tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooocoooooooc";
                goto try_except_handler_5;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = PyList_New(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_16;
        }
        if (isFrameUnusable(cache_frame_87eaa39c3a644cc2e0f5af31d7d126b4_3)) {
            Py_XDECREF(cache_frame_87eaa39c3a644cc2e0f5af31d7d126b4_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_87eaa39c3a644cc2e0f5af31d7d126b4_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_87eaa39c3a644cc2e0f5af31d7d126b4_3 = MAKE_FUNCTION_FRAME(codeobj_87eaa39c3a644cc2e0f5af31d7d126b4, module_pygments$regexopt, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_87eaa39c3a644cc2e0f5af31d7d126b4_3->m_type_description == NULL);
        frame_87eaa39c3a644cc2e0f5af31d7d126b4_3 = cache_frame_87eaa39c3a644cc2e0f5af31d7d126b4_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_87eaa39c3a644cc2e0f5af31d7d126b4_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_87eaa39c3a644cc2e0f5af31d7d126b4_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_17 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 66;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_18 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_s;
                outline_1_var_s = tmp_assign_source_18;
                Py_INCREF(outline_1_var_s);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_s);
            tmp_expression_name_6 = outline_1_var_s;
            tmp_subscript_name_4 = mod_consts[29];
            tmp_append_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_4);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_14 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
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

        Py_XDECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_87eaa39c3a644cc2e0f5af31d7d126b4_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_87eaa39c3a644cc2e0f5af31d7d126b4_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_87eaa39c3a644cc2e0f5af31d7d126b4_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_87eaa39c3a644cc2e0f5af31d7d126b4_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_87eaa39c3a644cc2e0f5af31d7d126b4_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_87eaa39c3a644cc2e0f5af31d7d126b4_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_87eaa39c3a644cc2e0f5af31d7d126b4_3,
            type_description_2,
            outline_1_var_s
        );


        // Release cached frame if used for exception.
        if (frame_87eaa39c3a644cc2e0f5af31d7d126b4_3 == cache_frame_87eaa39c3a644cc2e0f5af31d7d126b4_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_87eaa39c3a644cc2e0f5af31d7d126b4_3);
            cache_frame_87eaa39c3a644cc2e0f5af31d7d126b4_3 = NULL;
        }

        assertFrameObject(frame_87eaa39c3a644cc2e0f5af31d7d126b4_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooocoooooooc";
        goto try_except_handler_5;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_1_var_s);
        outline_1_var_s = NULL;
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

        Py_XDECREF(outline_1_var_s);
        outline_1_var_s = NULL;
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
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_strings_rev == NULL);
        var_strings_rev = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_14;
        tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_name_11 == NULL)) {
            tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_strings_rev);
        tmp_args_element_name_14 = var_strings_rev;
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 67;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_14);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_suffix == NULL);
        var_suffix = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_suffix);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_suffix);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_20;
        PyObject *tmp_len_arg_6;
        CHECK_OBJECT(var_suffix);
        tmp_len_arg_6 = var_suffix;
        tmp_assign_source_20 = BUILTIN_LEN(tmp_len_arg_6);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_slen) == NULL);
        PyCell_SET(var_slen, tmp_assign_source_20);

    }
    {
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_15;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_right_name_16;
        PyObject *tmp_called_name_14;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT(par_open_paren);
        tmp_left_name_17 = par_open_paren;
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_BUILTIN(mod_consts[30]);
        assert(tmp_called_name_13 != NULL);
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_iter_arg_4;
            if (par_strings == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 72;
                type_description_1 = "ooocoooooooc";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_4 = par_strings;
            tmp_assign_source_21 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "ooocoooooooc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_21;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = var_slen;
            Py_INCREF(tmp_closure_1[1]);

            tmp_args_element_name_16 = MAKE_GENERATOR_pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_7;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_3;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_3:;
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 72;
        tmp_args_element_name_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_16);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_17 = mod_consts[18];
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_name_15, tmp_args_element_name_17};
            tmp_right_name_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_args_element_name_15);
        if (tmp_right_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_17, tmp_right_name_15);
        Py_DECREF(tmp_right_name_15);
        if (tmp_left_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_name_14 == NULL)) {
            tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 73;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        if (var_suffix == NULL) {
            Py_DECREF(tmp_left_name_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = var_suffix;
        tmp_subscript_name_5 = mod_consts[29];
        tmp_args_element_name_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_5);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 73;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 73;
        tmp_right_name_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_18);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_right_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 73;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_16, tmp_right_name_16);
        Py_DECREF(tmp_left_name_16);
        Py_DECREF(tmp_right_name_16);
        if (tmp_left_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_close_paren);
        tmp_right_name_17 = var_close_paren;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_15, tmp_right_name_17);
        Py_DECREF(tmp_left_name_15);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_9:;
    {
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_18;
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_right_name_19;
        CHECK_OBJECT(par_open_paren);
        tmp_left_name_19 = par_open_paren;
        tmp_expression_name_8 = mod_consts[24];
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[6]);
        assert(!(tmp_called_name_15 == NULL));
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_called_name_16 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_called_name_16 == NULL)) {
                tmp_called_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_called_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "ooocoooooooc";
                goto frame_exception_exit_1;
            }
            if (par_strings == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 78;
                type_description_1 = "ooocoooooooc";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_20 = par_strings;

            tmp_closure_2[0] = var_first;
            Py_INCREF(tmp_closure_2[0]);

            tmp_args_element_name_21 = MAKE_FUNCTION_pygments$regexopt$$$function__2_regex_opt_inner$$$function__1_lambda(tmp_closure_2);

            frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 78;
            {
                PyObject *call_args[] = {tmp_args_element_name_20, tmp_args_element_name_21};
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_16, call_args);
            }

            Py_DECREF(tmp_args_element_name_21);
            if (tmp_iter_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "ooocoooooooc";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_22 = MAKE_ITERATOR(tmp_iter_arg_5);
            Py_DECREF(tmp_iter_arg_5);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_1 = "ooocoooooooc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_2__$0 == NULL);
            tmp_genexpr_2__$0 = tmp_assign_source_22;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_3[1];

            tmp_closure_3[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);

            tmp_args_element_name_19 = MAKE_GENERATOR_pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__2_genexpr(tmp_closure_3);

            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_genexpr_2__$0);
        Py_DECREF(tmp_genexpr_2__$0);
        tmp_genexpr_2__$0 = NULL;
        goto outline_result_4;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_2__$0);
        Py_DECREF(tmp_genexpr_2__$0);
        tmp_genexpr_2__$0 = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_4:;
        frame_7fcb075eed9c947aeda0baedb26311c6->m_frame.f_lineno = 77;
        tmp_right_name_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_19);
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_right_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_19, tmp_right_name_18);
        Py_DECREF(tmp_right_name_18);
        if (tmp_left_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_close_paren);
        tmp_right_name_19 = var_close_paren;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_18, tmp_right_name_19);
        Py_DECREF(tmp_left_name_18);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7fcb075eed9c947aeda0baedb26311c6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7fcb075eed9c947aeda0baedb26311c6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7fcb075eed9c947aeda0baedb26311c6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7fcb075eed9c947aeda0baedb26311c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7fcb075eed9c947aeda0baedb26311c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7fcb075eed9c947aeda0baedb26311c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7fcb075eed9c947aeda0baedb26311c6,
        type_description_1,
        par_strings,
        par_open_paren,
        var_close_paren,
        var_first,
        var_oneletter,
        var_rest,
        var_s,
        var_prefix,
        var_plen,
        var_strings_rev,
        var_suffix,
        var_slen
    );


    // Release cached frame if used for exception.
    if (frame_7fcb075eed9c947aeda0baedb26311c6 == cache_frame_7fcb075eed9c947aeda0baedb26311c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7fcb075eed9c947aeda0baedb26311c6);
        cache_frame_7fcb075eed9c947aeda0baedb26311c6 = NULL;
    }

    assertFrameObject(frame_7fcb075eed9c947aeda0baedb26311c6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_strings);
    par_strings = NULL;
    Py_XDECREF(par_open_paren);
    par_open_paren = NULL;
    Py_XDECREF(var_close_paren);
    var_close_paren = NULL;
    CHECK_OBJECT(var_first);
    Py_DECREF(var_first);
    var_first = NULL;
    Py_XDECREF(var_oneletter);
    var_oneletter = NULL;
    Py_XDECREF(var_rest);
    var_rest = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_plen);
    var_plen = NULL;
    Py_XDECREF(var_strings_rev);
    var_strings_rev = NULL;
    Py_XDECREF(var_suffix);
    var_suffix = NULL;
    CHECK_OBJECT(var_slen);
    Py_DECREF(var_slen);
    var_slen = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_strings);
    par_strings = NULL;
    Py_XDECREF(par_open_paren);
    par_open_paren = NULL;
    Py_XDECREF(var_close_paren);
    var_close_paren = NULL;
    CHECK_OBJECT(var_first);
    Py_DECREF(var_first);
    var_first = NULL;
    Py_XDECREF(var_oneletter);
    var_oneletter = NULL;
    Py_XDECREF(var_rest);
    var_rest = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_plen);
    var_plen = NULL;
    Py_XDECREF(var_strings_rev);
    var_strings_rev = NULL;
    Py_XDECREF(var_suffix);
    var_suffix = NULL;
    CHECK_OBJECT(var_slen);
    Py_DECREF(var_slen);
    var_slen = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

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



struct pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__1_genexpr_locals {
    PyObject *var_s;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__1_genexpr_locals *generator_heap = (struct pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_s = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_37c03fc3ae967effc72b3d2f0c0b853b, module_pygments$regexopt, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 72;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_s;
            generator_heap->var_s = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_s);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_operand_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_s);
        tmp_expression_name_2 = generator_heap->var_s;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 72;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_operand_name_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_stop_name_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_1);
        if (tmp_stop_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 72;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_subscript_name_1 = MAKE_SLICEOBJ1(tmp_stop_name_1);
        Py_DECREF(tmp_stop_name_1);
        assert(!(tmp_subscript_name_1 == NULL));
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 72;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), &tmp_stop_name_1, sizeof(PyObject *), &tmp_operand_name_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), &tmp_stop_name_1, sizeof(PyObject *), &tmp_operand_name_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 72;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 72;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            NULL,
            generator_heap->var_s,
            generator->m_closure[1]
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_s);
    generator_heap->var_s = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_s);
    generator_heap->var_s = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__1_genexpr_context,
        module_pygments$regexopt,
        mod_consts[36],
#if PYTHON_VERSION >= 0x350
        mod_consts[37],
#endif
        codeobj_37c03fc3ae967effc72b3d2f0c0b853b,
        closure,
        2,
        sizeof(struct pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_pygments$regexopt$$$function__2_regex_opt_inner$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_0a8fb01f8941a632d0bc79767e82652e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0a8fb01f8941a632d0bc79767e82652e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0a8fb01f8941a632d0bc79767e82652e)) {
        Py_XDECREF(cache_frame_0a8fb01f8941a632d0bc79767e82652e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a8fb01f8941a632d0bc79767e82652e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a8fb01f8941a632d0bc79767e82652e = MAKE_FUNCTION_FRAME(codeobj_0a8fb01f8941a632d0bc79767e82652e, module_pygments$regexopt, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0a8fb01f8941a632d0bc79767e82652e->m_type_description == NULL);
    frame_0a8fb01f8941a632d0bc79767e82652e = cache_frame_0a8fb01f8941a632d0bc79767e82652e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0a8fb01f8941a632d0bc79767e82652e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0a8fb01f8941a632d0bc79767e82652e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_s);
        tmp_expression_name_1 = par_s;
        tmp_subscript_name_1 = mod_consts[11];
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_subscript_name_2 = mod_consts[11];
        tmp_compexpr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_2, 0);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 78;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a8fb01f8941a632d0bc79767e82652e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a8fb01f8941a632d0bc79767e82652e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a8fb01f8941a632d0bc79767e82652e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a8fb01f8941a632d0bc79767e82652e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a8fb01f8941a632d0bc79767e82652e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a8fb01f8941a632d0bc79767e82652e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a8fb01f8941a632d0bc79767e82652e,
        type_description_1,
        par_s,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0a8fb01f8941a632d0bc79767e82652e == cache_frame_0a8fb01f8941a632d0bc79767e82652e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0a8fb01f8941a632d0bc79767e82652e);
        cache_frame_0a8fb01f8941a632d0bc79767e82652e = NULL;
    }

    assertFrameObject(frame_0a8fb01f8941a632d0bc79767e82652e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    par_s = NULL;
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

    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    par_s = NULL;
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



struct pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__2_genexpr_locals {
    PyObject *var_group;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__2_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__2_genexpr_locals *generator_heap = (struct pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_group = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_64fb78e3f53f45811d1b73900b495e6a, module_pygments$regexopt, sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 77;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_group;
            generator_heap->var_group = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_group);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 77;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_group);
        tmp_expression_name_2 = generator_heap->var_group;
        tmp_subscript_name_1 = mod_consts[12];
        tmp_list_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 77;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 77;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_args_element_name_2 = mod_consts[5];
        generator->m_frame->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 77;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_list_arg_1, sizeof(PyObject *), &tmp_expression_name_2, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_list_arg_1, sizeof(PyObject *), &tmp_expression_name_2, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 77;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 77;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            NULL,
            generator_heap->var_group
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_group);
    generator_heap->var_group = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_group);
    generator_heap->var_group = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__2_genexpr_context,
        module_pygments$regexopt,
        mod_consts[36],
#if PYTHON_VERSION >= 0x350
        mod_consts[37],
#endif
        codeobj_64fb78e3f53f45811d1b73900b495e6a,
        closure,
        1,
        sizeof(struct pygments$regexopt$$$function__2_regex_opt_inner$$$genexpr__2_genexpr_locals)
    );
}


static PyObject *impl_pygments$regexopt$$$function__3_regex_opt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_strings = python_pars[0];
    PyObject *par_prefix = python_pars[1];
    PyObject *par_suffix = python_pars[2];
    struct Nuitka_FrameObject *frame_d88da0fdf3e9d05f9cc6559b23fab59f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d88da0fdf3e9d05f9cc6559b23fab59f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d88da0fdf3e9d05f9cc6559b23fab59f)) {
        Py_XDECREF(cache_frame_d88da0fdf3e9d05f9cc6559b23fab59f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d88da0fdf3e9d05f9cc6559b23fab59f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d88da0fdf3e9d05f9cc6559b23fab59f = MAKE_FUNCTION_FRAME(codeobj_d88da0fdf3e9d05f9cc6559b23fab59f, module_pygments$regexopt, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d88da0fdf3e9d05f9cc6559b23fab59f->m_type_description == NULL);
    frame_d88da0fdf3e9d05f9cc6559b23fab59f = cache_frame_d88da0fdf3e9d05f9cc6559b23fab59f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d88da0fdf3e9d05f9cc6559b23fab59f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d88da0fdf3e9d05f9cc6559b23fab59f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[30]);
        assert(tmp_called_name_1 != NULL);
        CHECK_OBJECT(par_strings);
        tmp_args_element_name_1 = par_strings;
        frame_d88da0fdf3e9d05f9cc6559b23fab59f->m_frame.f_lineno = 90;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_strings;
            assert(old != NULL);
            par_strings = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_prefix);
        tmp_left_name_2 = par_prefix;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_strings);
        tmp_args_element_name_2 = par_strings;
        tmp_args_element_name_3 = mod_consts[38];
        frame_d88da0fdf3e9d05f9cc6559b23fab59f->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_suffix);
        tmp_right_name_2 = par_suffix;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d88da0fdf3e9d05f9cc6559b23fab59f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d88da0fdf3e9d05f9cc6559b23fab59f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d88da0fdf3e9d05f9cc6559b23fab59f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d88da0fdf3e9d05f9cc6559b23fab59f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d88da0fdf3e9d05f9cc6559b23fab59f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d88da0fdf3e9d05f9cc6559b23fab59f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d88da0fdf3e9d05f9cc6559b23fab59f,
        type_description_1,
        par_strings,
        par_prefix,
        par_suffix
    );


    // Release cached frame if used for exception.
    if (frame_d88da0fdf3e9d05f9cc6559b23fab59f == cache_frame_d88da0fdf3e9d05f9cc6559b23fab59f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d88da0fdf3e9d05f9cc6559b23fab59f);
        cache_frame_d88da0fdf3e9d05f9cc6559b23fab59f = NULL;
    }

    assertFrameObject(frame_d88da0fdf3e9d05f9cc6559b23fab59f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_strings);
    Py_DECREF(par_strings);
    par_strings = NULL;
    Py_XDECREF(par_prefix);
    par_prefix = NULL;
    Py_XDECREF(par_suffix);
    par_suffix = NULL;
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

    CHECK_OBJECT(par_strings);
    Py_DECREF(par_strings);
    par_strings = NULL;
    Py_XDECREF(par_prefix);
    par_prefix = NULL;
    Py_XDECREF(par_suffix);
    par_suffix = NULL;
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



static PyObject *MAKE_FUNCTION_pygments$regexopt$$$function__1_make_charset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygments$regexopt$$$function__1_make_charset,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5a3e579e5b921069821abfc6a9ede614,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygments$regexopt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygments$regexopt$$$function__1_make_charset$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygments$regexopt$$$function__1_make_charset$$$function__1_lambda,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[4],
#endif
        codeobj_3548a94f4817fc8bd0b435150813597a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygments$regexopt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygments$regexopt$$$function__2_regex_opt_inner() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygments$regexopt$$$function__2_regex_opt_inner,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7fcb075eed9c947aeda0baedb26311c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygments$regexopt,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygments$regexopt$$$function__2_regex_opt_inner$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygments$regexopt$$$function__2_regex_opt_inner$$$function__1_lambda,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[33],
#endif
        codeobj_0a8fb01f8941a632d0bc79767e82652e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygments$regexopt,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygments$regexopt$$$function__3_regex_opt(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygments$regexopt$$$function__3_regex_opt,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d88da0fdf3e9d05f9cc6559b23fab59f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygments$regexopt,
        mod_consts[39],
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

function_impl_code functable_pygments$regexopt[] = {
    impl_pygments$regexopt$$$function__1_make_charset$$$function__1_lambda,
    impl_pygments$regexopt$$$function__2_regex_opt_inner$$$function__1_lambda,
    impl_pygments$regexopt$$$function__1_make_charset,
    impl_pygments$regexopt$$$function__2_regex_opt_inner,
    impl_pygments$regexopt$$$function__3_regex_opt,
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

    function_impl_code *current = functable_pygments$regexopt;
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

    if (offset > sizeof(functable_pygments$regexopt) || offset < 0) {
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
        functable_pygments$regexopt[offset],
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
        module_pygments$regexopt,
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
PyObject *modulecode_pygments$regexopt(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_pygments$regexopt = module;

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
    PRINT_STRING("pygments.regexopt: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pygments.regexopt: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pygments.regexopt: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpygments$regexopt\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_pygments$regexopt = MODULE_DICT(module_pygments$regexopt);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pygments$regexopt,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pygments$regexopt,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pygments$regexopt,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pygments$regexopt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pygments$regexopt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pygments$regexopt);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pygments$regexopt, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pygments$regexopt, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pygments$regexopt, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pygments$regexopt);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pygments$regexopt, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_83b99577636a2ac1488f5a0a08dae9d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_83b99577636a2ac1488f5a0a08dae9d9 = MAKE_MODULE_FRAME(codeobj_83b99577636a2ac1488f5a0a08dae9d9, module_pygments$regexopt);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_83b99577636a2ac1488f5a0a08dae9d9);
    assert(Py_REFCNT(frame_83b99577636a2ac1488f5a0a08dae9d9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[42];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[45], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[46], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[48];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pygments$regexopt;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[11];
        frame_83b99577636a2ac1488f5a0a08dae9d9->m_frame.f_lineno = 12;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[48];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_pygments$regexopt;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[49];
        tmp_level_name_2 = mod_consts[11];
        frame_83b99577636a2ac1488f5a0a08dae9d9->m_frame.f_lineno = 13;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pygments$regexopt,
                mod_consts[13],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[50];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_pygments$regexopt;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[51];
        tmp_level_name_3 = mod_consts[11];
        frame_83b99577636a2ac1488f5a0a08dae9d9->m_frame.f_lineno = 14;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pygments$regexopt,
                mod_consts[26],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[52];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_pygments$regexopt;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[53];
        tmp_level_name_4 = mod_consts[11];
        frame_83b99577636a2ac1488f5a0a08dae9d9->m_frame.f_lineno = 15;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pygments$regexopt,
                mod_consts[32],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_3);
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[54];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_pygments$regexopt;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[55];
        tmp_level_name_5 = mod_consts[11];
        frame_83b99577636a2ac1488f5a0a08dae9d9->m_frame.f_lineno = 16;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pygments$regexopt,
                mod_consts[56],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_83b99577636a2ac1488f5a0a08dae9d9->m_frame.f_lineno = 18;
        tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[57],
            &PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_83b99577636a2ac1488f5a0a08dae9d9->m_frame.f_lineno = 19;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[11]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_10);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_83b99577636a2ac1488f5a0a08dae9d9);
#endif
    popFrameStack();

    assertFrameObject(frame_83b99577636a2ac1488f5a0a08dae9d9);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_83b99577636a2ac1488f5a0a08dae9d9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_83b99577636a2ac1488f5a0a08dae9d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83b99577636a2ac1488f5a0a08dae9d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83b99577636a2ac1488f5a0a08dae9d9, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_pygments$regexopt$$$function__1_make_charset();

        UPDATE_STRING_DICT1(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_pygments$regexopt$$$function__2_regex_opt_inner();

        UPDATE_STRING_DICT1(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[60];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_13 = MAKE_FUNCTION_pygments$regexopt$$$function__3_regex_opt(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_pygments$regexopt, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_13);
    }

    return module_pygments$regexopt;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

