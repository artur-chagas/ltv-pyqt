/* Generated code for Python module 'pandas.core.ops.invalid'
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

/* The "module_pandas$core$ops$invalid" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$ops$invalid;
PyDictObject *moduledict_pandas$core$ops$invalid;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[40];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pandas.core.ops.invalid"));
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
void checkModuleConstants_pandas$core$ops$invalid(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "pandas.core.ops.invalid");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b3b01929c5625fb6433799e7ea6e0d36;
static PyCodeObject *codeobj_f8e1329dbb3412a3f96781e96959dcd2;
static PyCodeObject *codeobj_862b3686047bee6290ba2a9ef1565dcd;
static PyCodeObject *codeobj_580511a73b3ad21d8b990b5fc0e23e8e;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[24]; CHECK_OBJECT(module_filename_obj);
    codeobj_b3b01929c5625fb6433799e7ea6e0d36 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_f8e1329dbb3412a3f96781e96959dcd2 = MAKE_CODEOBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[36], NULL, 3, 0, 0);
    codeobj_862b3686047bee6290ba2a9ef1565dcd = MAKE_CODEOBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[37], mod_consts[38], 2, 0, 0);
    codeobj_580511a73b3ad21d8b990b5fc0e23e8e = MAKE_CODEOBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[39], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pandas$core$ops$invalid$$$function__1_invalid_comparison();


static PyObject *MAKE_FUNCTION_pandas$core$ops$invalid$$$function__2_make_invalid_op(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$ops$invalid$$$function__2_make_invalid_op$$$function__1_invalid_op(PyObject *defaults, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_pandas$core$ops$invalid$$$function__1_invalid_comparison(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    PyObject *par_op = python_pars[2];
    PyObject *var_res_values = NULL;
    PyObject *var_typ = NULL;
    struct Nuitka_FrameObject *frame_f8e1329dbb3412a3f96781e96959dcd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f8e1329dbb3412a3f96781e96959dcd2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f8e1329dbb3412a3f96781e96959dcd2)) {
        Py_XDECREF(cache_frame_f8e1329dbb3412a3f96781e96959dcd2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f8e1329dbb3412a3f96781e96959dcd2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f8e1329dbb3412a3f96781e96959dcd2 = MAKE_FUNCTION_FRAME(codeobj_f8e1329dbb3412a3f96781e96959dcd2, module_pandas$core$ops$invalid, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f8e1329dbb3412a3f96781e96959dcd2->m_type_description == NULL);
    frame_f8e1329dbb3412a3f96781e96959dcd2 = cache_frame_f8e1329dbb3412a3f96781e96959dcd2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f8e1329dbb3412a3f96781e96959dcd2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f8e1329dbb3412a3f96781e96959dcd2) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_op);
        tmp_compexpr_left_1 = par_op;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_kwargs_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[3]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_left);
        tmp_expression_name_3 = par_left;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[4]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[5]);
        frame_f8e1329dbb3412a3f96781e96959dcd2->m_frame.f_lineno = 29;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res_values == NULL);
        var_res_values = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(par_op);
        tmp_compexpr_left_2 = par_op;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[6]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_kwargs_name_2;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_left);
        tmp_expression_name_6 = par_left;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[4]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[5]);
        frame_f8e1329dbb3412a3f96781e96959dcd2->m_frame.f_lineno = 31;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res_values == NULL);
        var_res_values = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_right);
        tmp_type_arg_1 = par_right;
        tmp_expression_name_7 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_name_7 == NULL));
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[8]);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_typ == NULL);
        var_typ = tmp_assign_source_3;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[9];
        tmp_string_concat_values_1 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_name_8;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_left);
            tmp_expression_name_8 = par_left;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[10]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[11];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_3);
            CHECK_OBJECT(var_typ);
            tmp_format_value_2 = var_typ;
            tmp_format_spec_2 = mod_consts[11];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[11], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_f8e1329dbb3412a3f96781e96959dcd2->m_frame.f_lineno = 34;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 34;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;
    if (var_res_values == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 35;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_res_values;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f8e1329dbb3412a3f96781e96959dcd2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f8e1329dbb3412a3f96781e96959dcd2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f8e1329dbb3412a3f96781e96959dcd2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f8e1329dbb3412a3f96781e96959dcd2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8e1329dbb3412a3f96781e96959dcd2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8e1329dbb3412a3f96781e96959dcd2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f8e1329dbb3412a3f96781e96959dcd2,
        type_description_1,
        par_left,
        par_right,
        par_op,
        var_res_values,
        var_typ
    );


    // Release cached frame if used for exception.
    if (frame_f8e1329dbb3412a3f96781e96959dcd2 == cache_frame_f8e1329dbb3412a3f96781e96959dcd2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f8e1329dbb3412a3f96781e96959dcd2);
        cache_frame_f8e1329dbb3412a3f96781e96959dcd2 = NULL;
    }

    assertFrameObject(frame_f8e1329dbb3412a3f96781e96959dcd2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_left);
    par_left = NULL;
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    par_right = NULL;
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);
    par_op = NULL;
    Py_XDECREF(var_res_values);
    var_res_values = NULL;
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

    Py_XDECREF(par_left);
    par_left = NULL;
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    par_right = NULL;
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);
    par_op = NULL;
    Py_XDECREF(var_res_values);
    var_res_values = NULL;
    Py_XDECREF(var_typ);
    var_typ = NULL;
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


static PyObject *impl_pandas$core$ops$invalid$$$function__2_make_invalid_op(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_invalid_op = NULL;
    struct Nuitka_FrameObject *frame_580511a73b3ad21d8b990b5fc0e23e8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_580511a73b3ad21d8b990b5fc0e23e8e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_defaults_1 = mod_consts[15];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = par_name;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_pandas$core$ops$invalid$$$function__2_make_invalid_op$$$function__1_invalid_op(tmp_defaults_1, tmp_closure_1);

        assert(var_invalid_op == NULL);
        var_invalid_op = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_580511a73b3ad21d8b990b5fc0e23e8e)) {
        Py_XDECREF(cache_frame_580511a73b3ad21d8b990b5fc0e23e8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_580511a73b3ad21d8b990b5fc0e23e8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_580511a73b3ad21d8b990b5fc0e23e8e = MAKE_FUNCTION_FRAME(codeobj_580511a73b3ad21d8b990b5fc0e23e8e, module_pandas$core$ops$invalid, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_580511a73b3ad21d8b990b5fc0e23e8e->m_type_description == NULL);
    frame_580511a73b3ad21d8b990b5fc0e23e8e = cache_frame_580511a73b3ad21d8b990b5fc0e23e8e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_580511a73b3ad21d8b990b5fc0e23e8e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_580511a73b3ad21d8b990b5fc0e23e8e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_name));
        tmp_assattr_name_1 = Nuitka_Cell_GET(par_name);
        CHECK_OBJECT(var_invalid_op);
        tmp_assattr_target_1 = var_invalid_op;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_580511a73b3ad21d8b990b5fc0e23e8e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_580511a73b3ad21d8b990b5fc0e23e8e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_580511a73b3ad21d8b990b5fc0e23e8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_580511a73b3ad21d8b990b5fc0e23e8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_580511a73b3ad21d8b990b5fc0e23e8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_580511a73b3ad21d8b990b5fc0e23e8e,
        type_description_1,
        par_name,
        var_invalid_op
    );


    // Release cached frame if used for exception.
    if (frame_580511a73b3ad21d8b990b5fc0e23e8e == cache_frame_580511a73b3ad21d8b990b5fc0e23e8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_580511a73b3ad21d8b990b5fc0e23e8e);
        cache_frame_580511a73b3ad21d8b990b5fc0e23e8e = NULL;
    }

    assertFrameObject(frame_580511a73b3ad21d8b990b5fc0e23e8e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_invalid_op);
    tmp_return_value = var_invalid_op;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    CHECK_OBJECT(var_invalid_op);
    Py_DECREF(var_invalid_op);
    var_invalid_op = NULL;
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

    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    CHECK_OBJECT(var_invalid_op);
    Py_DECREF(var_invalid_op);
    var_invalid_op = NULL;
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


static PyObject *impl_pandas$core$ops$invalid$$$function__2_make_invalid_op$$$function__1_invalid_op(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *var_typ = NULL;
    struct Nuitka_FrameObject *frame_862b3686047bee6290ba2a9ef1565dcd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_862b3686047bee6290ba2a9ef1565dcd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_862b3686047bee6290ba2a9ef1565dcd)) {
        Py_XDECREF(cache_frame_862b3686047bee6290ba2a9ef1565dcd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_862b3686047bee6290ba2a9ef1565dcd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_862b3686047bee6290ba2a9ef1565dcd = MAKE_FUNCTION_FRAME(codeobj_862b3686047bee6290ba2a9ef1565dcd, module_pandas$core$ops$invalid, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_862b3686047bee6290ba2a9ef1565dcd->m_type_description == NULL);
    frame_862b3686047bee6290ba2a9ef1565dcd = cache_frame_862b3686047bee6290ba2a9ef1565dcd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_862b3686047bee6290ba2a9ef1565dcd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_862b3686047bee6290ba2a9ef1565dcd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_name_1 == NULL));
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_typ == NULL);
        var_typ = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[19];
        tmp_string_concat_values_1 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 53;
                type_description_1 = "oooc";
                goto tuple_build_exception_1;
            }

            tmp_format_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_format_spec_1 = mod_consts[11];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "oooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[21];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_typ);
            tmp_format_value_2 = var_typ;
            tmp_format_spec_2 = mod_consts[11];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "oooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[11], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_862b3686047bee6290ba2a9ef1565dcd->m_frame.f_lineno = 53;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 53;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooc";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_862b3686047bee6290ba2a9ef1565dcd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_862b3686047bee6290ba2a9ef1565dcd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_862b3686047bee6290ba2a9ef1565dcd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_862b3686047bee6290ba2a9ef1565dcd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_862b3686047bee6290ba2a9ef1565dcd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_862b3686047bee6290ba2a9ef1565dcd,
        type_description_1,
        par_self,
        par_other,
        var_typ,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_862b3686047bee6290ba2a9ef1565dcd == cache_frame_862b3686047bee6290ba2a9ef1565dcd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_862b3686047bee6290ba2a9ef1565dcd);
        cache_frame_862b3686047bee6290ba2a9ef1565dcd = NULL;
    }

    assertFrameObject(frame_862b3686047bee6290ba2a9ef1565dcd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    par_other = NULL;
    Py_XDECREF(var_typ);
    var_typ = NULL;
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

}



static PyObject *MAKE_FUNCTION_pandas$core$ops$invalid$$$function__1_invalid_comparison() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$invalid$$$function__1_invalid_comparison,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f8e1329dbb3412a3f96781e96959dcd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$invalid,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$invalid$$$function__2_make_invalid_op(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$invalid$$$function__2_make_invalid_op,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_580511a73b3ad21d8b990b5fc0e23e8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$ops$invalid,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$invalid$$$function__2_make_invalid_op$$$function__1_invalid_op(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$invalid$$$function__2_make_invalid_op$$$function__1_invalid_op,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[17],
#endif
        codeobj_862b3686047bee6290ba2a9ef1565dcd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$invalid,
        NULL,
        closure,
        1
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

function_impl_code functable_pandas$core$ops$invalid[] = {
    impl_pandas$core$ops$invalid$$$function__2_make_invalid_op$$$function__1_invalid_op,
    impl_pandas$core$ops$invalid$$$function__1_invalid_comparison,
    impl_pandas$core$ops$invalid$$$function__2_make_invalid_op,
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

    function_impl_code *current = functable_pandas$core$ops$invalid;
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

    if (offset > sizeof(functable_pandas$core$ops$invalid) || offset < 0) {
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
        functable_pandas$core$ops$invalid[offset],
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
        module_pandas$core$ops$invalid,
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
PyObject *modulecode_pandas$core$ops$invalid(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_pandas$core$ops$invalid = module;

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
    PRINT_STRING("pandas.core.ops.invalid: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pandas.core.ops.invalid: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pandas.core.ops.invalid: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpandas$core$ops$invalid\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_pandas$core$ops$invalid = MODULE_DICT(module_pandas$core$ops$invalid);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$ops$invalid,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$ops$invalid,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$ops$invalid,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$ops$invalid,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$ops$invalid,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$ops$invalid);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pandas$core$ops$invalid);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b3b01929c5625fb6433799e7ea6e0d36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_b3b01929c5625fb6433799e7ea6e0d36 = MAKE_MODULE_FRAME(codeobj_b3b01929c5625fb6433799e7ea6e0d36, module_pandas$core$ops$invalid);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_b3b01929c5625fb6433799e7ea6e0d36);
    assert(Py_REFCNT(frame_b3b01929c5625fb6433799e7ea6e0d36) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[24];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[27], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[28], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[0];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pandas$core$ops$invalid;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[30];
        frame_b3b01929c5625fb6433799e7ea6e0d36->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[31];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_pandas$core$ops$invalid;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[30];
        frame_b3b01929c5625fb6433799e7ea6e0d36->m_frame.f_lineno = 6;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3b01929c5625fb6433799e7ea6e0d36);
#endif
    popFrameStack();

    assertFrameObject(frame_b3b01929c5625fb6433799e7ea6e0d36);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3b01929c5625fb6433799e7ea6e0d36);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3b01929c5625fb6433799e7ea6e0d36, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3b01929c5625fb6433799e7ea6e0d36->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3b01929c5625fb6433799e7ea6e0d36, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_pandas$core$ops$invalid$$$function__1_invalid_comparison();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = PyDict_Copy(mod_consts[33]);


        tmp_assign_source_7 = MAKE_FUNCTION_pandas$core$ops$invalid$$$function__2_make_invalid_op(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$invalid, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_7);
    }

    return module_pandas$core$ops$invalid;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

