/* Generated code for Python module 'scipy.linalg.blas'
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

/* The "module_scipy$linalg$blas" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$linalg$blas;
PyDictObject *moduledict_scipy$linalg$blas;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[120];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.linalg.blas"));
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
void checkModuleConstants_scipy$linalg$blas(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "scipy.linalg.blas");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b18ac77ac8b5e422bf775dbfe2462191;
static PyCodeObject *codeobj_f68a12ad503faf0ee327684cfc97a713;
static PyCodeObject *codeobj_d098f742ff43fc78a5a6474facc0bcb1;
static PyCodeObject *codeobj_e41c6793c6ffdf584bd637c54b2a6895;
static PyCodeObject *codeobj_352518c77e04da192ad6db395a1e264b;
static PyCodeObject *codeobj_30938feaff966285710cdf2d6eb04a4f;
static PyCodeObject *codeobj_62bb887313210a65f196a104f25fcf43;
static PyCodeObject *codeobj_a9e6014bc25294767e8b1e2c6977e37e;
static PyCodeObject *codeobj_99a0dadacf70f7d4c956ad1856f9d331;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[78]; CHECK_OBJECT(module_filename_obj);
    codeobj_b18ac77ac8b5e422bf775dbfe2462191 = MAKE_CODEOBJECT(module_filename_obj, 238, CO_NEWLOCALS | CO_NOFREE, mod_consts[110], mod_consts[111], NULL, 1, 0, 0);
    codeobj_f68a12ad503faf0ee327684cfc97a713 = MAKE_CODEOBJECT(module_filename_obj, 239, CO_NEWLOCALS | CO_NOFREE, mod_consts[110], mod_consts[111], NULL, 1, 0, 0);
    codeobj_d098f742ff43fc78a5a6474facc0bcb1 = MAKE_CODEOBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[111], NULL, 1, 0, 0);
    codeobj_e41c6793c6ffdf584bd637c54b2a6895 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_352518c77e04da192ad6db395a1e264b = MAKE_CODEOBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[114], NULL, 10, 0, 0);
    codeobj_30938feaff966285710cdf2d6eb04a4f = MAKE_CODEOBJECT(module_filename_obj, 376, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[115], NULL, 1, 0, 0);
    codeobj_62bb887313210a65f196a104f25fcf43 = MAKE_CODEOBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[116], NULL, 2, 0, 0);
    codeobj_a9e6014bc25294767e8b1e2c6977e37e = MAKE_CODEOBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[117], NULL, 4, 0, 0);
    codeobj_99a0dadacf70f7d4c956ad1856f9d331 = MAKE_CODEOBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[51], mod_consts[118], mod_consts[119], 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$linalg$blas$$$function__1_find_best_blas_type(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$linalg$blas$$$function__2__get_funcs(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$linalg$blas$$$function__3__memoize_get_funcs();


static PyObject *MAKE_FUNCTION_scipy$linalg$blas$$$function__3__memoize_get_funcs$$$function__1_getter(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$linalg$blas$$$function__4_get_blas_funcs(PyObject *defaults);


// The module function definitions.
static PyObject *impl_scipy$linalg$blas$$$function__1_find_best_blas_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[0];
    PyObject *par_dtype = python_pars[1];
    PyObject *var_max_score = NULL;
    PyObject *var_prefer_fortran = NULL;
    PyObject *var_scores = NULL;
    PyObject *var_ind_max_score = NULL;
    PyObject *var_prefix = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_62bb887313210a65f196a104f25fcf43;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_d098f742ff43fc78a5a6474facc0bcb1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d098f742ff43fc78a5a6474facc0bcb1_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_62bb887313210a65f196a104f25fcf43 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_62bb887313210a65f196a104f25fcf43)) {
        Py_XDECREF(cache_frame_62bb887313210a65f196a104f25fcf43);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62bb887313210a65f196a104f25fcf43 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62bb887313210a65f196a104f25fcf43 = MAKE_FUNCTION_FRAME(codeobj_62bb887313210a65f196a104f25fcf43, module_scipy$linalg$blas, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_62bb887313210a65f196a104f25fcf43->m_type_description == NULL);
    frame_62bb887313210a65f196a104f25fcf43 = cache_frame_62bb887313210a65f196a104f25fcf43;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_62bb887313210a65f196a104f25fcf43);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_62bb887313210a65f196a104f25fcf43) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_1 = par_dtype;
        frame_62bb887313210a65f196a104f25fcf43->m_frame.f_lineno = 296;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            par_dtype = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[3]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_expression_name_2 = par_dtype;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[4]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 297;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = mod_consts[5];
        frame_62bb887313210a65f196a104f25fcf43->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_score == NULL);
        var_max_score = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_False;
        assert(var_prefer_fortran == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_prefer_fortran = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_arrays);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_arrays);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_arrays);
        tmp_args_element_name_4 = par_arrays;
        frame_62bb887313210a65f196a104f25fcf43->m_frame.f_lineno = 302;
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_4);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[7];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_6;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[3]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_arrays);
        tmp_expression_name_6 = par_arrays;
        tmp_subscript_name_1 = mod_consts[8];
        tmp_expression_name_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_1, 0);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[1]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[4]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = mod_consts[5];
        frame_62bb887313210a65f196a104f25fcf43->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_max_score;
            assert(old != NULL);
            var_max_score = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(par_arrays);
        tmp_expression_name_9 = par_arrays;
        tmp_subscript_name_2 = mod_consts[8];
        tmp_expression_name_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_9, tmp_subscript_name_2, 0);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[9]);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[10];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_3);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_prefer_fortran;
            assert(old != NULL);
            var_prefer_fortran = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_arrays);
            tmp_iter_arg_1 = par_arrays;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_8;
        }
        if (isFrameUnusable(cache_frame_d098f742ff43fc78a5a6474facc0bcb1_2)) {
            Py_XDECREF(cache_frame_d098f742ff43fc78a5a6474facc0bcb1_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d098f742ff43fc78a5a6474facc0bcb1_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d098f742ff43fc78a5a6474facc0bcb1_2 = MAKE_FUNCTION_FRAME(codeobj_d098f742ff43fc78a5a6474facc0bcb1, module_scipy$linalg$blas, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d098f742ff43fc78a5a6474facc0bcb1_2->m_type_description == NULL);
        frame_d098f742ff43fc78a5a6474facc0bcb1_2 = cache_frame_d098f742ff43fc78a5a6474facc0bcb1_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d098f742ff43fc78a5a6474facc0bcb1_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d098f742ff43fc78a5a6474facc0bcb1_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 307;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_10 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_10;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_expression_name_10;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_expression_name_11;
            PyObject *tmp_expression_name_12;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_name_10 == NULL)) {
                tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[3]);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_x);
            tmp_expression_name_12 = outline_0_var_x;
            tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[1]);
            if (tmp_expression_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_4);

                exception_lineno = 307;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[4]);
            Py_DECREF(tmp_expression_name_11);
            if (tmp_args_element_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_4);

                exception_lineno = 307;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_args_element_name_8 = mod_consts[5];
            frame_d098f742ff43fc78a5a6474facc0bcb1_2->m_frame.f_lineno = 307;
            {
                PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
            }

            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_6 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_6);
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
        RESTORE_FRAME_EXCEPTION(frame_d098f742ff43fc78a5a6474facc0bcb1_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_d098f742ff43fc78a5a6474facc0bcb1_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d098f742ff43fc78a5a6474facc0bcb1_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d098f742ff43fc78a5a6474facc0bcb1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d098f742ff43fc78a5a6474facc0bcb1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d098f742ff43fc78a5a6474facc0bcb1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d098f742ff43fc78a5a6474facc0bcb1_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_d098f742ff43fc78a5a6474facc0bcb1_2 == cache_frame_d098f742ff43fc78a5a6474facc0bcb1_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d098f742ff43fc78a5a6474facc0bcb1_2);
            cache_frame_d098f742ff43fc78a5a6474facc0bcb1_2 = NULL;
        }

        assertFrameObject(frame_d098f742ff43fc78a5a6474facc0bcb1_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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
        exception_lineno = 307;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_scores == NULL);
        var_scores = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_scores);
        tmp_args_element_name_9 = var_scores;
        frame_62bb887313210a65f196a104f25fcf43->m_frame.f_lineno = 308;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_9);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_max_score;
            assert(old != NULL);
            var_max_score = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT(var_scores);
        tmp_called_instance_2 = var_scores;
        CHECK_OBJECT(var_max_score);
        tmp_args_element_name_10 = var_max_score;
        frame_62bb887313210a65f196a104f25fcf43->m_frame.f_lineno = 309;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[12], tmp_args_element_name_10);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ind_max_score == NULL);
        var_ind_max_score = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_and_left_value_1_object_1;
        int tmp_truth_name_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if (var_max_score == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 311;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = var_max_score;
        tmp_compexpr_right_2 = mod_consts[14];
        tmp_tmp_and_left_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_and_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_and_left_value_1_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_left_value_1_object_1);

            exception_lineno = 311;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_1_object_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_compexpr_left_3 = mod_consts[15];
        if (var_scores == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 311;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = var_scores;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[17];
        {
            PyObject *old = var_max_score;
            var_max_score = tmp_assign_source_13;
            Py_INCREF(var_max_score);
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_4;
        if (par_arrays == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = par_arrays;
        CHECK_OBJECT(var_ind_max_score);
        tmp_subscript_name_4 = var_ind_max_score;
        tmp_expression_name_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_15, tmp_subscript_name_4);
        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[9]);
        Py_DECREF(tmp_expression_name_14);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = mod_consts[10];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_13, tmp_subscript_name_5);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_True;
        {
            PyObject *old = var_prefer_fortran;
            assert(old != NULL);
            var_prefer_fortran = tmp_assign_source_14;
            Py_INCREF(var_prefer_fortran);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    branch_end_2:;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_tuple_element_1;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[3]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        if (var_max_score == NULL) {
            Py_DECREF(tmp_called_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_name_11 = var_max_score;
        tmp_tuple_element_1 = mod_consts[20];
        tmp_args_element_name_12 = PyTuple_New(2);
        {
            PyObject *tmp_called_instance_3;
            PyTuple_SET_ITEM0(tmp_args_element_name_12, 0, tmp_tuple_element_1);
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            frame_62bb887313210a65f196a104f25fcf43->m_frame.f_lineno = 320;
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1(
                tmp_called_instance_3,
                mod_consts[1],
                &PyTuple_GET_ITEM(mod_consts[21], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_12, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_12);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_62bb887313210a65f196a104f25fcf43->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 320;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 320;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooo";
                    exception_lineno = 320;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[22];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 320;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
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

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_1;
        assert(var_prefix == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_prefix = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_dtype;
            par_dtype = tmp_assign_source_19;
            Py_INCREF(par_dtype);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_prefix);
        tmp_tuple_element_2 = var_prefix;
        tmp_return_value = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_dtype);
        tmp_tuple_element_2 = par_dtype;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        if (var_prefer_fortran == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 322;
            type_description_1 = "ooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_prefer_fortran;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_62bb887313210a65f196a104f25fcf43);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_62bb887313210a65f196a104f25fcf43);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_62bb887313210a65f196a104f25fcf43);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_62bb887313210a65f196a104f25fcf43, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62bb887313210a65f196a104f25fcf43->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62bb887313210a65f196a104f25fcf43, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62bb887313210a65f196a104f25fcf43,
        type_description_1,
        par_arrays,
        par_dtype,
        var_max_score,
        var_prefer_fortran,
        var_scores,
        var_ind_max_score,
        var_prefix
    );


    // Release cached frame if used for exception.
    if (frame_62bb887313210a65f196a104f25fcf43 == cache_frame_62bb887313210a65f196a104f25fcf43) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_62bb887313210a65f196a104f25fcf43);
        cache_frame_62bb887313210a65f196a104f25fcf43 = NULL;
    }

    assertFrameObject(frame_62bb887313210a65f196a104f25fcf43);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_arrays);
    par_arrays = NULL;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_max_score);
    var_max_score = NULL;
    Py_XDECREF(var_prefer_fortran);
    var_prefer_fortran = NULL;
    Py_XDECREF(var_scores);
    var_scores = NULL;
    Py_XDECREF(var_ind_max_score);
    var_ind_max_score = NULL;
    CHECK_OBJECT(var_prefix);
    Py_DECREF(var_prefix);
    var_prefix = NULL;
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

    Py_XDECREF(par_arrays);
    par_arrays = NULL;
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_max_score);
    var_max_score = NULL;
    Py_XDECREF(var_prefer_fortran);
    var_prefer_fortran = NULL;
    Py_XDECREF(var_scores);
    var_scores = NULL;
    Py_XDECREF(var_ind_max_score);
    var_ind_max_score = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
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


static PyObject *impl_scipy$linalg$blas$$$function__2__get_funcs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_names = python_pars[0];
    PyObject *par_arrays = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_lib_name = python_pars[3];
    PyObject *par_fmodule = python_pars[4];
    PyObject *par_cmodule = python_pars[5];
    PyObject *par_fmodule_name = python_pars[6];
    PyObject *par_cmodule_name = python_pars[7];
    PyObject *par_alias = python_pars[8];
    PyObject *par_ilp64 = python_pars[9];
    PyObject *var_funcs = NULL;
    PyObject *var_unpack = NULL;
    PyObject *var_module1 = NULL;
    PyObject *var_module2 = NULL;
    PyObject *var_prefix = NULL;
    PyObject *var_prefer_fortran = NULL;
    PyObject *var_name = NULL;
    PyObject *var_func_name = NULL;
    PyObject *var_func = NULL;
    PyObject *var_module_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_352518c77e04da192ad6db395a1e264b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_352518c77e04da192ad6db395a1e264b = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_funcs == NULL);
        var_funcs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        assert(var_unpack == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_unpack = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_352518c77e04da192ad6db395a1e264b)) {
        Py_XDECREF(cache_frame_352518c77e04da192ad6db395a1e264b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_352518c77e04da192ad6db395a1e264b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_352518c77e04da192ad6db395a1e264b = MAKE_FUNCTION_FRAME(codeobj_352518c77e04da192ad6db395a1e264b, module_scipy$linalg$blas, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_352518c77e04da192ad6db395a1e264b->m_type_description == NULL);
    frame_352518c77e04da192ad6db395a1e264b = cache_frame_352518c77e04da192ad6db395a1e264b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_352518c77e04da192ad6db395a1e264b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_352518c77e04da192ad6db395a1e264b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_1 = par_dtype;
        frame_352518c77e04da192ad6db395a1e264b->m_frame.f_lineno = 337;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            par_dtype = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_cmodule);
        tmp_tuple_element_1 = par_cmodule;
        tmp_assign_source_4 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_4, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_cmodule_name);
        tmp_tuple_element_1 = par_cmodule_name;
        PyTuple_SET_ITEM0(tmp_assign_source_4, 1, tmp_tuple_element_1);
        assert(var_module1 == NULL);
        var_module1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_fmodule);
        tmp_tuple_element_2 = par_fmodule;
        tmp_assign_source_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_5, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_fmodule_name);
        tmp_tuple_element_2 = par_fmodule_name;
        PyTuple_SET_ITEM0(tmp_assign_source_5, 1, tmp_tuple_element_2);
        assert(var_module2 == NULL);
        var_module2 = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_names);
        tmp_args_element_name_2 = par_names;
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_name_3 == NULL)) {
            tmp_args_element_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_352518c77e04da192ad6db395a1e264b->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_names);
        tmp_tuple_element_3 = par_names;
        tmp_assign_source_6 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_6, 0, tmp_tuple_element_3);
        {
            PyObject *old = par_names;
            assert(old != NULL);
            par_names = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_True;
        {
            PyObject *old = var_unpack;
            assert(old != NULL);
            var_unpack = tmp_assign_source_7;
            Py_INCREF(var_unpack);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_arrays);
        tmp_args_element_name_4 = par_arrays;
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_5 = par_dtype;
        frame_352518c77e04da192ad6db395a1e264b->m_frame.f_lineno = 345;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 345;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 345;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 345;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 345;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[28];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 345;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        assert(var_prefix == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_prefix = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_13;
            Py_INCREF(par_dtype);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_3;
        assert(var_prefer_fortran == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_prefer_fortran = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_prefer_fortran);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_prefer_fortran);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(var_module2);
        tmp_tuple_element_4 = var_module2;
        tmp_iter_arg_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_module1);
        tmp_tuple_element_4 = var_module1;
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 1, tmp_tuple_element_4);
        tmp_assign_source_15 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_15 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT_INFALLIBLE(tmp_unpack_4);
        assert(!(tmp_assign_source_16 == NULL));
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_5, 1, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 348;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 348;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[22];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 348;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
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

    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
    Py_DECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_module1;
            var_module1 = tmp_assign_source_18;
            Py_INCREF(var_module1);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_module2;
            var_module2 = tmp_assign_source_19;
            Py_INCREF(var_module2);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(par_names);
        tmp_iter_arg_3 = par_names;
        tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_20;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_21 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 350;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_22 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_22;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_left_name_1 = var_prefix;
        CHECK_OBJECT(var_name);
        tmp_right_name_1 = var_name;
        tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_func_name;
            var_func_name = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        if (par_alias == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 352;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_2 = par_alias;
        CHECK_OBJECT(var_func_name);
        tmp_args_element_name_6 = var_func_name;
        CHECK_OBJECT(var_func_name);
        tmp_args_element_name_7 = var_func_name;
        frame_352518c77e04da192ad6db395a1e264b->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_24 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[3],
                call_args
            );
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_func_name;
            var_func_name = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_module1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_name_1 = var_module1;
        tmp_subscript_name_1 = mod_consts[8];
        tmp_args_element_name_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_func_name);
        tmp_args_element_name_9 = var_func_name;
        tmp_args_element_name_10 = Py_None;
        frame_352518c77e04da192ad6db395a1e264b->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_func;
            var_func = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        if (var_module1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_name_2 = var_module1;
        tmp_subscript_name_2 = mod_consts[7];
        tmp_assign_source_26 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_2, 1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_module_name;
            var_module_name = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_func);
        tmp_compexpr_left_1 = var_func;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_module2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_name_3 = var_module2;
        tmp_subscript_name_3 = mod_consts[8];
        tmp_args_element_name_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_3, 0);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_func_name);
        tmp_args_element_name_12 = var_func_name;
        tmp_args_element_name_13 = Py_None;
        frame_352518c77e04da192ad6db395a1e264b->m_frame.f_lineno = 356;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_11);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_func;
            assert(old != NULL);
            var_func = tmp_assign_source_27;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        if (var_module2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 357;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_name_4 = var_module2;
        tmp_subscript_name_4 = mod_consts[7];
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_4, 1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_module_name;
            assert(old != NULL);
            var_module_name = tmp_assign_source_28;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_func);
        tmp_compexpr_left_2 = var_func;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_5;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_left_name_2 = mod_consts[35];
        if (par_lib_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 360;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_tuple_element_5 = par_lib_name;
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_name_2, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_func_name);
        tmp_tuple_element_5 = var_func_name;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_5);
        tmp_args_element_name_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_352518c77e04da192ad6db395a1e264b->m_frame.f_lineno = 359;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_14);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 359;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_6;
    }
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT(var_module_name);
        tmp_tuple_element_6 = var_module_name;
        tmp_iter_arg_4 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_4, 0, tmp_tuple_element_6);
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 361;
            type_description_1 = "oooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_6 = var_prefix;
        PyTuple_SET_ITEM0(tmp_iter_arg_4, 1, tmp_tuple_element_6);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_4);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_29 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        assert(!(tmp_assign_source_29 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT_INFALLIBLE(tmp_unpack_6);
        assert(!(tmp_assign_source_30 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_7, 1, 2);
        if (tmp_assign_source_31 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 361;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 361;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[22];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 361;
            goto try_except_handler_8;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assattr_name_1 = tmp_tuple_unpack_3__element_1;
        CHECK_OBJECT(var_func);
        tmp_assattr_target_1 = var_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[37], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assattr_name_2 = tmp_tuple_unpack_3__element_2;
        CHECK_OBJECT(var_func);
        tmp_assattr_target_2 = var_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[38], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_assattr_name_3 = par_dtype;
        CHECK_OBJECT(var_func);
        tmp_assattr_target_3 = var_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[1], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        if (par_ilp64 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_operand_name_1 = par_ilp64;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_assattr_target_4;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[1]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[40]);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_352518c77e04da192ad6db395a1e264b->m_frame.f_lineno = 364;
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_func);
        tmp_assattr_target_4 = var_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[41], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_assattr_target_5;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[1]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[42]);
        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_352518c77e04da192ad6db395a1e264b->m_frame.f_lineno = 366;
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_func);
        tmp_assattr_target_5 = var_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[41], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    branch_end_5:;
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 367;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_assattr_name_6 = var_prefix;
        CHECK_OBJECT(var_func);
        tmp_assattr_target_6 = var_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[29], tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_17;
        if (var_funcs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_3 = var_funcs;
        CHECK_OBJECT(var_func);
        tmp_args_element_name_17 = var_func;
        frame_352518c77e04da192ad6db395a1e264b->m_frame.f_lineno = 368;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[44], tmp_args_element_name_17);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 350;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_6;
        CHECK_OBJECT(var_unpack);
        tmp_condition_result_6 = CHECK_IF_TRUE(var_unpack) == 1;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_expression_name_9;
        PyObject *tmp_subscript_name_5;
        if (var_funcs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = var_funcs;
        tmp_subscript_name_5 = mod_consts[8];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_9, tmp_subscript_name_5, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    if (var_funcs == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 373;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_funcs;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_352518c77e04da192ad6db395a1e264b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_352518c77e04da192ad6db395a1e264b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_352518c77e04da192ad6db395a1e264b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_352518c77e04da192ad6db395a1e264b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_352518c77e04da192ad6db395a1e264b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_352518c77e04da192ad6db395a1e264b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_352518c77e04da192ad6db395a1e264b,
        type_description_1,
        par_names,
        par_arrays,
        par_dtype,
        par_lib_name,
        par_fmodule,
        par_cmodule,
        par_fmodule_name,
        par_cmodule_name,
        par_alias,
        par_ilp64,
        var_funcs,
        var_unpack,
        var_module1,
        var_module2,
        var_prefix,
        var_prefer_fortran,
        var_name,
        var_func_name,
        var_func,
        var_module_name
    );


    // Release cached frame if used for exception.
    if (frame_352518c77e04da192ad6db395a1e264b == cache_frame_352518c77e04da192ad6db395a1e264b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_352518c77e04da192ad6db395a1e264b);
        cache_frame_352518c77e04da192ad6db395a1e264b = NULL;
    }

    assertFrameObject(frame_352518c77e04da192ad6db395a1e264b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_names);
    par_names = NULL;
    CHECK_OBJECT(par_arrays);
    Py_DECREF(par_arrays);
    par_arrays = NULL;
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(par_lib_name);
    par_lib_name = NULL;
    CHECK_OBJECT(par_fmodule);
    Py_DECREF(par_fmodule);
    par_fmodule = NULL;
    CHECK_OBJECT(par_cmodule);
    Py_DECREF(par_cmodule);
    par_cmodule = NULL;
    CHECK_OBJECT(par_fmodule_name);
    Py_DECREF(par_fmodule_name);
    par_fmodule_name = NULL;
    CHECK_OBJECT(par_cmodule_name);
    Py_DECREF(par_cmodule_name);
    par_cmodule_name = NULL;
    Py_XDECREF(par_alias);
    par_alias = NULL;
    Py_XDECREF(par_ilp64);
    par_ilp64 = NULL;
    Py_XDECREF(var_funcs);
    var_funcs = NULL;
    CHECK_OBJECT(var_unpack);
    Py_DECREF(var_unpack);
    var_unpack = NULL;
    Py_XDECREF(var_module1);
    var_module1 = NULL;
    Py_XDECREF(var_module2);
    var_module2 = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    CHECK_OBJECT(var_prefer_fortran);
    Py_DECREF(var_prefer_fortran);
    var_prefer_fortran = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_func_name);
    var_func_name = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_module_name);
    var_module_name = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_names);
    par_names = NULL;
    CHECK_OBJECT(par_arrays);
    Py_DECREF(par_arrays);
    par_arrays = NULL;
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(par_lib_name);
    par_lib_name = NULL;
    CHECK_OBJECT(par_fmodule);
    Py_DECREF(par_fmodule);
    par_fmodule = NULL;
    CHECK_OBJECT(par_cmodule);
    Py_DECREF(par_cmodule);
    par_cmodule = NULL;
    CHECK_OBJECT(par_fmodule_name);
    Py_DECREF(par_fmodule_name);
    par_fmodule_name = NULL;
    CHECK_OBJECT(par_cmodule_name);
    Py_DECREF(par_cmodule_name);
    par_cmodule_name = NULL;
    Py_XDECREF(par_alias);
    par_alias = NULL;
    Py_XDECREF(par_ilp64);
    par_ilp64 = NULL;
    Py_XDECREF(var_funcs);
    var_funcs = NULL;
    Py_XDECREF(var_unpack);
    var_unpack = NULL;
    Py_XDECREF(var_module1);
    var_module1 = NULL;
    Py_XDECREF(var_module2);
    var_module2 = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_prefer_fortran);
    var_prefer_fortran = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_func_name);
    var_func_name = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_module_name);
    var_module_name = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

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


static PyObject *impl_scipy$linalg$blas$$$function__3__memoize_get_funcs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *var_memo = Nuitka_Cell_Empty();
    PyObject *var_getter = NULL;
    struct Nuitka_FrameObject *frame_30938feaff966285710cdf2d6eb04a4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30938feaff966285710cdf2d6eb04a4f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert(Nuitka_Cell_GET(var_memo) == NULL);
        PyCell_SET(var_memo, tmp_assign_source_1);

    }
    // Tried code:
    if (isFrameUnusable(cache_frame_30938feaff966285710cdf2d6eb04a4f)) {
        Py_XDECREF(cache_frame_30938feaff966285710cdf2d6eb04a4f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30938feaff966285710cdf2d6eb04a4f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30938feaff966285710cdf2d6eb04a4f = MAKE_FUNCTION_FRAME(codeobj_30938feaff966285710cdf2d6eb04a4f, module_scipy$linalg$blas, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_30938feaff966285710cdf2d6eb04a4f->m_type_description == NULL);
    frame_30938feaff966285710cdf2d6eb04a4f = cache_frame_30938feaff966285710cdf2d6eb04a4f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_30938feaff966285710cdf2d6eb04a4f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_30938feaff966285710cdf2d6eb04a4f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_memo));
        tmp_assattr_name_1 = Nuitka_Cell_GET(var_memo);
        CHECK_OBJECT(Nuitka_Cell_GET(par_func));
        tmp_assattr_target_1 = Nuitka_Cell_GET(par_func);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[46], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[48]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_func) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 383;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(par_func);
        frame_30938feaff966285710cdf2d6eb04a4f->m_frame.f_lineno = 383;
        tmp_called_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_2);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[50];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = par_func;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_memo;
        Py_INCREF(tmp_closure_1[1]);

        tmp_args_element_name_2 = MAKE_FUNCTION_scipy$linalg$blas$$$function__3__memoize_get_funcs$$$function__1_getter(tmp_defaults_1, tmp_closure_1);

        frame_30938feaff966285710cdf2d6eb04a4f->m_frame.f_lineno = 383;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        assert(var_getter == NULL);
        var_getter = tmp_assign_source_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_30938feaff966285710cdf2d6eb04a4f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_30938feaff966285710cdf2d6eb04a4f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_30938feaff966285710cdf2d6eb04a4f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30938feaff966285710cdf2d6eb04a4f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30938feaff966285710cdf2d6eb04a4f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30938feaff966285710cdf2d6eb04a4f,
        type_description_1,
        par_func,
        var_memo,
        var_getter
    );


    // Release cached frame if used for exception.
    if (frame_30938feaff966285710cdf2d6eb04a4f == cache_frame_30938feaff966285710cdf2d6eb04a4f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_30938feaff966285710cdf2d6eb04a4f);
        cache_frame_30938feaff966285710cdf2d6eb04a4f = NULL;
    }

    assertFrameObject(frame_30938feaff966285710cdf2d6eb04a4f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_getter);
    tmp_return_value = var_getter;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(var_memo);
    Py_DECREF(var_memo);
    var_memo = NULL;
    CHECK_OBJECT(var_getter);
    Py_DECREF(var_getter);
    var_getter = NULL;
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

    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(var_memo);
    Py_DECREF(var_memo);
    var_memo = NULL;
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


static PyObject *impl_scipy$linalg$blas$$$function__3__memoize_get_funcs$$$function__1_getter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_names = python_pars[0];
    PyObject *par_arrays = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_ilp64 = python_pars[3];
    PyObject *var_key = NULL;
    PyObject *var_array = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_99a0dadacf70f7d4c956ad1856f9d331;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_99a0dadacf70f7d4c956ad1856f9d331 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_names);
        tmp_tuple_element_1 = par_names;
        tmp_assign_source_1 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_dtype);
        tmp_tuple_element_1 = par_dtype;
        PyTuple_SET_ITEM0(tmp_assign_source_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_ilp64);
        tmp_tuple_element_1 = par_ilp64;
        PyTuple_SET_ITEM0(tmp_assign_source_1, 2, tmp_tuple_element_1);
        assert(var_key == NULL);
        var_key = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_99a0dadacf70f7d4c956ad1856f9d331)) {
        Py_XDECREF(cache_frame_99a0dadacf70f7d4c956ad1856f9d331);

#if _DEBUG_REFCOUNTS
        if (cache_frame_99a0dadacf70f7d4c956ad1856f9d331 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_99a0dadacf70f7d4c956ad1856f9d331 = MAKE_FUNCTION_FRAME(codeobj_99a0dadacf70f7d4c956ad1856f9d331, module_scipy$linalg$blas, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_99a0dadacf70f7d4c956ad1856f9d331->m_type_description == NULL);
    frame_99a0dadacf70f7d4c956ad1856f9d331 = cache_frame_99a0dadacf70f7d4c956ad1856f9d331;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_99a0dadacf70f7d4c956ad1856f9d331);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_99a0dadacf70f7d4c956ad1856f9d331) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_arrays);
        tmp_iter_arg_1 = par_arrays;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooocc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooocc";
                exception_lineno = 386;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_array;
            var_array = tmp_assign_source_4;
            Py_INCREF(var_array);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 388;
            type_description_1 = "ooooooocc";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = var_key;
        CHECK_OBJECT(var_array);
        tmp_expression_name_2 = var_array;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[1]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooocc";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooocc";
            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_expression_name_4;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
            if (var_array == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 388;
                type_description_1 = "ooooooocc";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_4 = var_array;
            tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[9]);
            if (tmp_expression_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_1 = "ooooooocc";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[56]);
            Py_DECREF(tmp_expression_name_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_1 = "ooooooocc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_result = BINARY_OPERATION_ADD_TUPLE_TUPLE_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        assert(!(tmp_result == false));
        tmp_assign_source_5 = tmp_left_name_1;
        var_key = tmp_assign_source_5;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 386;
        type_description_1 = "ooooooocc";
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
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "ooooooocc";
            goto try_except_handler_3;
        }

        tmp_expression_name_5 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[3]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooocc";
            goto try_except_handler_3;
        }
        if (var_key == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "ooooooocc";
            goto try_except_handler_3;
        }

        tmp_args_element_name_1 = var_key;
        frame_99a0dadacf70f7d4c956ad1856f9d331->m_frame.f_lineno = 391;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooocc";
            goto try_except_handler_3;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_6;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_99a0dadacf70f7d4c956ad1856f9d331, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_99a0dadacf70f7d4c956ad1856f9d331, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_compexpr_right_1 == NULL)) {
            tmp_compexpr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooooocc";
            goto try_except_handler_4;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooooocc";
            goto try_except_handler_4;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_7;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        assert(var_value == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_value = tmp_assign_source_8;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 390;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_99a0dadacf70f7d4c956ad1856f9d331->m_frame) frame_99a0dadacf70f7d4c956ad1856f9d331->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooocc";
    goto try_except_handler_4;
    branch_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if (var_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 397;
            type_description_1 = "ooooooocc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = var_value;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    if (var_value == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 398;
        type_description_1 = "ooooooocc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "ooooooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_names);
        tmp_args_element_name_2 = par_names;
        if (par_arrays == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "ooooooocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = par_arrays;
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_4 = par_dtype;
        CHECK_OBJECT(par_ilp64);
        tmp_args_element_name_5 = par_ilp64;
        frame_99a0dadacf70f7d4c956ad1856f9d331->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooooocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "ooooooocc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = var_key;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_value);
        tmp_ass_subvalue_1 = var_value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ooooooocc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = Nuitka_Cell_GET(self->m_closure[1]);
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ooooooocc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = var_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooooocc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_99a0dadacf70f7d4c956ad1856f9d331);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_99a0dadacf70f7d4c956ad1856f9d331);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_99a0dadacf70f7d4c956ad1856f9d331);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_99a0dadacf70f7d4c956ad1856f9d331, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_99a0dadacf70f7d4c956ad1856f9d331->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_99a0dadacf70f7d4c956ad1856f9d331, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_99a0dadacf70f7d4c956ad1856f9d331,
        type_description_1,
        par_names,
        par_arrays,
        par_dtype,
        par_ilp64,
        var_key,
        var_array,
        var_value,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_99a0dadacf70f7d4c956ad1856f9d331 == cache_frame_99a0dadacf70f7d4c956ad1856f9d331) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_99a0dadacf70f7d4c956ad1856f9d331);
        cache_frame_99a0dadacf70f7d4c956ad1856f9d331 = NULL;
    }

    assertFrameObject(frame_99a0dadacf70f7d4c956ad1856f9d331);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_value);
    tmp_return_value = var_value;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    par_names = NULL;
    Py_XDECREF(par_arrays);
    par_arrays = NULL;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(par_ilp64);
    Py_DECREF(par_ilp64);
    par_ilp64 = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_array);
    var_array = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    par_names = NULL;
    Py_XDECREF(par_arrays);
    par_arrays = NULL;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    CHECK_OBJECT(par_ilp64);
    Py_DECREF(par_ilp64);
    par_ilp64 = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_array);
    var_array = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_scipy$linalg$blas$$$function__4_get_blas_funcs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_names = python_pars[0];
    PyObject *par_arrays = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_ilp64 = python_pars[3];
    struct Nuitka_FrameObject *frame_a9e6014bc25294767e8b1e2c6977e37e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a9e6014bc25294767e8b1e2c6977e37e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a9e6014bc25294767e8b1e2c6977e37e)) {
        Py_XDECREF(cache_frame_a9e6014bc25294767e8b1e2c6977e37e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a9e6014bc25294767e8b1e2c6977e37e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a9e6014bc25294767e8b1e2c6977e37e = MAKE_FUNCTION_FRAME(codeobj_a9e6014bc25294767e8b1e2c6977e37e, module_scipy$linalg$blas, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a9e6014bc25294767e8b1e2c6977e37e->m_type_description == NULL);
    frame_a9e6014bc25294767e8b1e2c6977e37e = cache_frame_a9e6014bc25294767e8b1e2c6977e37e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a9e6014bc25294767e8b1e2c6977e37e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a9e6014bc25294767e8b1e2c6977e37e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ilp64);
        tmp_args_element_name_1 = par_ilp64;
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_name_2 == NULL)) {
            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a9e6014bc25294767e8b1e2c6977e37e->m_frame.f_lineno = 466;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 466;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_ilp64);
        tmp_compexpr_left_1 = par_ilp64;
        tmp_compexpr_right_1 = mod_consts[59];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 467;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ilp64;
            assert(old != NULL);
            par_ilp64 = tmp_assign_source_1;
            Py_INCREF(par_ilp64);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a9e6014bc25294767e8b1e2c6977e37e->m_frame.f_lineno = 470;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, mod_consts[61]);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 470;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        if (par_ilp64 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 472;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = par_ilp64;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_names);
        tmp_tuple_element_1 = par_names;
        tmp_args_name_1 = PyTuple_New(9);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_arrays);
        tmp_tuple_element_1 = par_arrays;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_dtype);
        tmp_tuple_element_1 = par_dtype;
        PyTuple_SET_ITEM0(tmp_args_name_1, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[63];
        PyTuple_SET_ITEM0(tmp_args_name_1, 3, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 4, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 5, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[66];
        PyTuple_SET_ITEM0(tmp_args_name_1, 6, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[67];
        PyTuple_SET_ITEM0(tmp_args_name_1, 7, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 8, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[69]);
        frame_a9e6014bc25294767e8b1e2c6977e37e->m_frame.f_lineno = 473;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_2;
        tmp_operand_name_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_operand_name_2 == NULL)) {
            tmp_operand_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_name_4;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a9e6014bc25294767e8b1e2c6977e37e->m_frame.f_lineno = 478;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, mod_consts[71]);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 478;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_2;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_names);
        tmp_tuple_element_2 = par_names;
        tmp_args_name_2 = PyTuple_New(9);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_arrays);
        tmp_tuple_element_2 = par_arrays;
        PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_dtype);
        tmp_tuple_element_2 = par_dtype;
        PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[63];
        PyTuple_SET_ITEM0(tmp_args_name_2, 3, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooo";
            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_args_name_2, 4, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_None;
        PyTuple_SET_ITEM0(tmp_args_name_2, 5, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[73];
        PyTuple_SET_ITEM0(tmp_args_name_2, 6, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_None;
        PyTuple_SET_ITEM0(tmp_args_name_2, 7, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooo";
            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_args_name_2, 8, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_args_name_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[74]);
        frame_a9e6014bc25294767e8b1e2c6977e37e->m_frame.f_lineno = 480;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a9e6014bc25294767e8b1e2c6977e37e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a9e6014bc25294767e8b1e2c6977e37e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a9e6014bc25294767e8b1e2c6977e37e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a9e6014bc25294767e8b1e2c6977e37e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a9e6014bc25294767e8b1e2c6977e37e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a9e6014bc25294767e8b1e2c6977e37e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a9e6014bc25294767e8b1e2c6977e37e,
        type_description_1,
        par_names,
        par_arrays,
        par_dtype,
        par_ilp64
    );


    // Release cached frame if used for exception.
    if (frame_a9e6014bc25294767e8b1e2c6977e37e == cache_frame_a9e6014bc25294767e8b1e2c6977e37e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a9e6014bc25294767e8b1e2c6977e37e);
        cache_frame_a9e6014bc25294767e8b1e2c6977e37e = NULL;
    }

    assertFrameObject(frame_a9e6014bc25294767e8b1e2c6977e37e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    par_names = NULL;
    CHECK_OBJECT(par_arrays);
    Py_DECREF(par_arrays);
    par_arrays = NULL;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(par_ilp64);
    par_ilp64 = NULL;
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

    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    par_names = NULL;
    CHECK_OBJECT(par_arrays);
    Py_DECREF(par_arrays);
    par_arrays = NULL;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(par_ilp64);
    par_ilp64 = NULL;
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



static PyObject *MAKE_FUNCTION_scipy$linalg$blas$$$function__1_find_best_blas_type(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$blas$$$function__1_find_best_blas_type,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_62bb887313210a65f196a104f25fcf43,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$linalg$blas,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$blas$$$function__2__get_funcs(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$blas$$$function__2__get_funcs,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_352518c77e04da192ad6db395a1e264b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$linalg$blas,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$blas$$$function__3__memoize_get_funcs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$blas$$$function__3__memoize_get_funcs,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_30938feaff966285710cdf2d6eb04a4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$linalg$blas,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$blas$$$function__3__memoize_get_funcs$$$function__1_getter(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$blas$$$function__3__memoize_get_funcs$$$function__1_getter,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        codeobj_99a0dadacf70f7d4c956ad1856f9d331,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$linalg$blas,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$blas$$$function__4_get_blas_funcs(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$blas$$$function__4_get_blas_funcs,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a9e6014bc25294767e8b1e2c6977e37e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$linalg$blas,
        mod_consts[75],
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

function_impl_code functable_scipy$linalg$blas[] = {
    impl_scipy$linalg$blas$$$function__3__memoize_get_funcs$$$function__1_getter,
    impl_scipy$linalg$blas$$$function__1_find_best_blas_type,
    impl_scipy$linalg$blas$$$function__2__get_funcs,
    impl_scipy$linalg$blas$$$function__3__memoize_get_funcs,
    impl_scipy$linalg$blas$$$function__4_get_blas_funcs,
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

    function_impl_code *current = functable_scipy$linalg$blas;
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

    if (offset > sizeof(functable_scipy$linalg$blas) || offset < 0) {
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
        functable_scipy$linalg$blas[offset],
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
        module_scipy$linalg$blas,
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
PyObject *modulecode_scipy$linalg$blas(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_scipy$linalg$blas = module;

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
    PRINT_STRING("scipy.linalg.blas: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("scipy.linalg.blas: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("scipy.linalg.blas: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initscipy$linalg$blas\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_scipy$linalg$blas = MODULE_DICT(module_scipy$linalg$blas);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$linalg$blas,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$linalg$blas,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$linalg$blas,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$blas,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$blas,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$linalg$blas);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$linalg$blas);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_x = NULL;
    PyObject *outline_1_var_x = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction_2__$0 = NULL;
    PyObject *tmp_dictcontraction_2__contraction = NULL;
    PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_e41c6793c6ffdf584bd637c54b2a6895;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_b18ac77ac8b5e422bf775dbfe2462191_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_b18ac77ac8b5e422bf775dbfe2462191_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_f68a12ad503faf0ee327684cfc97a713_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_f68a12ad503faf0ee327684cfc97a713_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_e41c6793c6ffdf584bd637c54b2a6895 = MAKE_MODULE_FRAME(codeobj_e41c6793c6ffdf584bd637c54b2a6895, module_scipy$linalg$blas);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e41c6793c6ffdf584bd637c54b2a6895);
    assert(Py_REFCNT(frame_e41c6793c6ffdf584bd637c54b2a6895) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[78];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[81], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[82], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(mod_consts[84]);
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[86];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_scipy$linalg$blas;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[8];
        frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 210;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[47];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_scipy$linalg$blas;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[8];
        frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 211;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[87];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_scipy$linalg$blas;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[88];
        tmp_level_name_3 = mod_consts[8];
        frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 213;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$linalg$blas,
                mod_consts[64],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_7);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[87];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_scipy$linalg$blas;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[89];
        tmp_level_name_4 = mod_consts[8];
        frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 215;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$linalg$blas,
                mod_consts[65],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_8);
    }
    goto try_end_1;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e41c6793c6ffdf584bd637c54b2a6895, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e41c6793c6ffdf584bd637c54b2a6895, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_compexpr_right_1 == NULL)) {
            tmp_compexpr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_9);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 214;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame) frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_2;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[87];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_scipy$linalg$blas;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[91];
        tmp_level_name_5 = mod_consts[8];
        frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 220;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto try_except_handler_3;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$linalg$blas,
                mod_consts[72],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[72]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_True;
        UPDATE_STRING_DICT0(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_11);
    }
    goto try_end_3;
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

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_e41c6793c6ffdf584bd637c54b2a6895, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_e41c6793c6ffdf584bd637c54b2a6895, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_compexpr_right_2 == NULL)) {
            tmp_compexpr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto try_except_handler_4;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_False;
        UPDATE_STRING_DICT0(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_13);
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 219;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame) frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_2:;
    goto try_end_4;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_14);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[93];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_scipy$linalg$blas;
        tmp_locals_arg_name_6 = (PyObject *)moduledict_scipy$linalg$blas;
        tmp_fromlist_name_6 = mod_consts[94];
        tmp_level_name_6 = mod_consts[8];
        frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 228;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_scipy$linalg$blas, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
    }
    tmp_res = PyDict_DelItem((PyObject *)moduledict_scipy$linalg$blas, mod_consts[92]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[92]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 229;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = mod_consts[95];
            tmp_assign_source_16 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            assert(!(tmp_assign_source_16 == NULL));
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyDict_New();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_17;
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_b18ac77ac8b5e422bf775dbfe2462191_2)) {
            Py_XDECREF(cache_frame_b18ac77ac8b5e422bf775dbfe2462191_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b18ac77ac8b5e422bf775dbfe2462191_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b18ac77ac8b5e422bf775dbfe2462191_2 = MAKE_FUNCTION_FRAME(codeobj_b18ac77ac8b5e422bf775dbfe2462191, module_scipy$linalg$blas, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_b18ac77ac8b5e422bf775dbfe2462191_2->m_type_description == NULL);
        frame_b18ac77ac8b5e422bf775dbfe2462191_2 = cache_frame_b18ac77ac8b5e422bf775dbfe2462191_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_b18ac77ac8b5e422bf775dbfe2462191_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_b18ac77ac8b5e422bf775dbfe2462191_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_18 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 238;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_assign_source_19 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_19;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_x);
            tmp_dictset38_key_1 = outline_0_var_x;
            tmp_dictset38_value_1 = mod_consts[7];
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_15 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b18ac77ac8b5e422bf775dbfe2462191_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_b18ac77ac8b5e422bf775dbfe2462191_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b18ac77ac8b5e422bf775dbfe2462191_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b18ac77ac8b5e422bf775dbfe2462191_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b18ac77ac8b5e422bf775dbfe2462191_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b18ac77ac8b5e422bf775dbfe2462191_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b18ac77ac8b5e422bf775dbfe2462191_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_b18ac77ac8b5e422bf775dbfe2462191_2 == cache_frame_b18ac77ac8b5e422bf775dbfe2462191_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_b18ac77ac8b5e422bf775dbfe2462191_2);
            cache_frame_b18ac77ac8b5e422bf775dbfe2462191_2 = NULL;
        }

        assertFrameObject(frame_b18ac77ac8b5e422bf775dbfe2462191_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 238;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_15);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_expression_name_1 == NULL));
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[96]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = mod_consts[97];
            tmp_assign_source_20 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
            assert(!(tmp_assign_source_20 == NULL));
            assert(tmp_dictcontraction_2__$0 == NULL);
            tmp_dictcontraction_2__$0 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = PyDict_New();
            assert(tmp_dictcontraction_2__contraction == NULL);
            tmp_dictcontraction_2__contraction = tmp_assign_source_21;
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_f68a12ad503faf0ee327684cfc97a713_3)) {
            Py_XDECREF(cache_frame_f68a12ad503faf0ee327684cfc97a713_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f68a12ad503faf0ee327684cfc97a713_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f68a12ad503faf0ee327684cfc97a713_3 = MAKE_FUNCTION_FRAME(codeobj_f68a12ad503faf0ee327684cfc97a713, module_scipy$linalg$blas, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_f68a12ad503faf0ee327684cfc97a713_3->m_type_description == NULL);
        frame_f68a12ad503faf0ee327684cfc97a713_3 = cache_frame_f68a12ad503faf0ee327684cfc97a713_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_f68a12ad503faf0ee327684cfc97a713_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f68a12ad503faf0ee327684cfc97a713_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_dictcontraction_2__$0);
            tmp_next_source_2 = tmp_dictcontraction_2__$0;
            tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_22 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 239;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_2__iter_value_0;
                tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_22;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
            tmp_assign_source_23 = tmp_dictcontraction_2__iter_value_0;
            {
                PyObject *old = outline_1_var_x;
                outline_1_var_x = tmp_assign_source_23;
                Py_INCREF(outline_1_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_dictset38_key_2;
            PyObject *tmp_dictset38_value_2;
            PyObject *tmp_dictset38_dict_2;
            CHECK_OBJECT(outline_1_var_x);
            tmp_dictset38_key_2 = outline_1_var_x;
            tmp_dictset38_value_2 = mod_consts[15];
            CHECK_OBJECT(tmp_dictcontraction_2__contraction);
            tmp_dictset38_dict_2 = tmp_dictcontraction_2__contraction;
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_2, tmp_dictset38_key_2, tmp_dictset38_value_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        tmp_args_element_name_1 = tmp_dictcontraction_2__contraction;
        Py_INCREF(tmp_args_element_name_1);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(tmp_dictcontraction_2__$0);
        tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        Py_DECREF(tmp_dictcontraction_2__contraction);
        tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
        tmp_dictcontraction_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_dictcontraction_2__$0);
        tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        Py_DECREF(tmp_dictcontraction_2__contraction);
        tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
        tmp_dictcontraction_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f68a12ad503faf0ee327684cfc97a713_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_f68a12ad503faf0ee327684cfc97a713_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_7;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f68a12ad503faf0ee327684cfc97a713_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f68a12ad503faf0ee327684cfc97a713_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f68a12ad503faf0ee327684cfc97a713_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f68a12ad503faf0ee327684cfc97a713_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f68a12ad503faf0ee327684cfc97a713_3,
            type_description_2,
            outline_1_var_x
        );


        // Release cached frame if used for exception.
        if (frame_f68a12ad503faf0ee327684cfc97a713_3 == cache_frame_f68a12ad503faf0ee327684cfc97a713_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_f68a12ad503faf0ee327684cfc97a713_3);
            cache_frame_f68a12ad503faf0ee327684cfc97a713_3 = NULL;
        }

        assertFrameObject(frame_f68a12ad503faf0ee327684cfc97a713_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF(outline_1_var_x);
        outline_1_var_x = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_x);
        outline_1_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 239;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 239;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_call_arg_element_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = PyDict_Copy(mod_consts[98]);
        frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 243;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[96], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_dict_key_1 = mod_consts[7];
        tmp_tuple_element_1 = mod_consts[99];
        tmp_dict_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_called_instance_2;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto tuple_build_exception_1;
            }
            frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 246;
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1(
                tmp_called_instance_2,
                mod_consts[1],
                &PyTuple_GET_ITEM(mod_consts[100], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dict_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_24 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[15];
            tmp_tuple_element_2 = mod_consts[20];
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_instance_3;
                PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_2);
                tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_called_instance_3 == NULL)) {
                    tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_called_instance_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;

                    goto tuple_build_exception_2;
                }
                frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 247;
                tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS1(
                    tmp_called_instance_3,
                    mod_consts[1],
                    &PyTuple_GET_ITEM(mod_consts[21], 0)
                );

                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[14];
            tmp_tuple_element_3 = mod_consts[101];
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_instance_4;
                PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_3);
                tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_called_instance_4 == NULL)) {
                    tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_called_instance_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 248;

                    goto tuple_build_exception_3;
                }
                frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 248;
                tmp_tuple_element_3 = CALL_METHOD_WITH_ARGS1(
                    tmp_called_instance_4,
                    mod_consts[1],
                    &PyTuple_GET_ITEM(mod_consts[102], 0)
                );

                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 248;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[17];
            tmp_tuple_element_4 = mod_consts[103];
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_instance_5;
                PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_4);
                tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_called_instance_5 == NULL)) {
                    tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_called_instance_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;

                    goto tuple_build_exception_4;
                }
                frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 249;
                tmp_tuple_element_4 = CALL_METHOD_WITH_ARGS1(
                    tmp_called_instance_5,
                    mod_consts[1],
                    &PyTuple_GET_ITEM(mod_consts[104], 0)
                );

                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_24);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = PyDict_Copy(mod_consts[105]);
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[106];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_26 = MAKE_FUNCTION_scipy$linalg$blas$$$function__1_find_best_blas_type(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[107];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_27 = MAKE_FUNCTION_scipy$linalg$blas$$$function__2__get_funcs(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_scipy$linalg$blas$$$function__3__memoize_get_funcs();

        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        assert(!(tmp_called_name_2 == NULL));
        tmp_defaults_3 = mod_consts[50];
        Py_INCREF(tmp_defaults_3);


        tmp_args_element_name_2 = MAKE_FUNCTION_scipy$linalg$blas$$$function__4_get_blas_funcs(tmp_defaults_3);

        frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame.f_lineno = 410;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$blas, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_29);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e41c6793c6ffdf584bd637c54b2a6895);
#endif
    popFrameStack();

    assertFrameObject(frame_e41c6793c6ffdf584bd637c54b2a6895);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e41c6793c6ffdf584bd637c54b2a6895);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e41c6793c6ffdf584bd637c54b2a6895, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e41c6793c6ffdf584bd637c54b2a6895->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e41c6793c6ffdf584bd637c54b2a6895, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;

    return module_scipy$linalg$blas;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

