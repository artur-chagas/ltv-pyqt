/* Generated code for Python module 'numpy.core.getlimits'
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

/* The "module_numpy$core$getlimits" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$getlimits;
PyDictObject *moduledict_numpy$core$getlimits;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[288];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("numpy.core.getlimits"));
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
void checkModuleConstants_numpy$core$getlimits(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "numpy.core.getlimits");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_216379a72bd4406aa663d6b2e6301b8b;
static PyCodeObject *codeobj_568854ae4314eb3a99dcd915d6a25ab5;
static PyCodeObject *codeobj_1dc55646d5daac9e39082858c1903002;
static PyCodeObject *codeobj_f037b30486cd18c7adf951a944360a24;
static PyCodeObject *codeobj_63b2ddb22e7d0af9f38380a867ff0011;
static PyCodeObject *codeobj_6faad760f41d04a32cb297b3edf43259;
static PyCodeObject *codeobj_1367a112d5a1c09835ded37258295b33;
static PyCodeObject *codeobj_396bd5404bdd54d181338897ef72da5e;
static PyCodeObject *codeobj_5c5ab89c29c7fbcd8d730002edcea2a4;
static PyCodeObject *codeobj_98a380acb4841fa4383f5c54b24c2960;
static PyCodeObject *codeobj_e0b4bf57ef5d23a2d2d2734bd587fefa;
static PyCodeObject *codeobj_890db44f645cbfeccd7d4de625112eb9;
static PyCodeObject *codeobj_01c95ba28e77a7dc55cfee57f76b8c48;
static PyCodeObject *codeobj_a3d188df98bcfa05b803a5d762b0a72a;
static PyCodeObject *codeobj_173842eeefe30220b3852626a074cf32;
static PyCodeObject *codeobj_19681eec0baf715173b051580a4c0b77;
static PyCodeObject *codeobj_e9a7fe440695cd2ca617b99619e57b78;
static PyCodeObject *codeobj_cc4b57ae9476a8c59960c34e26eecbac;
static PyCodeObject *codeobj_7ef03692cedf04a0218e45cd901baf95;
static PyCodeObject *codeobj_2f9bcaaacae0b4ad05b176e7d10d04d6;
static PyCodeObject *codeobj_094989b39786edb60337c43de0b20f3d;
static PyCodeObject *codeobj_9a94b83041fbc9d05e9812e03019cb9a;
static PyCodeObject *codeobj_df51868b648b3abe70b8758a186e978e;
static PyCodeObject *codeobj_457dff0e2d80340c830f1ed24b840454;
static PyCodeObject *codeobj_45eef2488e6a7c7e7b19e3bee9bb042c;
static PyCodeObject *codeobj_d9f1f03c537fe1b9008e4cf750e85b69;
static PyCodeObject *codeobj_099e4100b3279a7cfc1c56c4ff14c5b3;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[194]; CHECK_OBJECT(module_filename_obj);
    codeobj_216379a72bd4406aa663d6b2e6301b8b = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[266], mod_consts[267], 1, 0, 0);
    codeobj_568854ae4314eb3a99dcd915d6a25ab5 = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[268], mod_consts[269], 1, 0, 0);
    codeobj_1dc55646d5daac9e39082858c1903002 = MAKE_CODEOBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[268], mod_consts[269], 1, 0, 0);
    codeobj_f037b30486cd18c7adf951a944360a24 = MAKE_CODEOBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[268], mod_consts[269], 1, 0, 0);
    codeobj_63b2ddb22e7d0af9f38380a867ff0011 = MAKE_CODEOBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[270], mod_consts[271], 1, 0, 0);
    codeobj_6faad760f41d04a32cb297b3edf43259 = MAKE_CODEOBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[272], mod_consts[273], 1, 0, 0);
    codeobj_1367a112d5a1c09835ded37258295b33 = MAKE_CODEOBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[272], mod_consts[273], 1, 0, 0);
    codeobj_396bd5404bdd54d181338897ef72da5e = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[274], NULL, NULL, 0, 0, 0);
    codeobj_5c5ab89c29c7fbcd8d730002edcea2a4 = MAKE_CODEOBJECT(module_filename_obj, 32, CO_NOFREE, mod_consts[45], mod_consts[275], NULL, 0, 0, 0);
    codeobj_98a380acb4841fa4383f5c54b24c2960 = MAKE_CODEOBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[223], mod_consts[276], NULL, 2, 5, 0);
    codeobj_e0b4bf57ef5d23a2d2d2734bd587fefa = MAKE_CODEOBJECT(module_filename_obj, 514, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[223], mod_consts[277], NULL, 2, 0, 0);
    codeobj_890db44f645cbfeccd7d4de625112eb9 = MAKE_CODEOBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[155], mod_consts[278], NULL, 2, 0, 0);
    codeobj_01c95ba28e77a7dc55cfee57f76b8c48 = MAKE_CODEOBJECT(module_filename_obj, 562, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[256], mod_consts[279], NULL, 1, 0, 0);
    codeobj_a3d188df98bcfa05b803a5d762b0a72a = MAKE_CODEOBJECT(module_filename_obj, 453, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[256], mod_consts[280], NULL, 1, 0, 0);
    codeobj_173842eeefe30220b3852626a074cf32 = MAKE_CODEOBJECT(module_filename_obj, 439, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[254], mod_consts[281], NULL, 1, 0, 0);
    codeobj_19681eec0baf715173b051580a4c0b77 = MAKE_CODEOBJECT(module_filename_obj, 551, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[254], mod_consts[281], NULL, 1, 0, 0);
    codeobj_e9a7fe440695cd2ca617b99619e57b78 = MAKE_CODEOBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[273], NULL, 1, 0, 0);
    codeobj_cc4b57ae9476a8c59960c34e26eecbac = MAKE_CODEOBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[282], NULL, 1, 0, 0);
    codeobj_7ef03692cedf04a0218e45cd901baf95 = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[282], NULL, 1, 0, 0);
    codeobj_2f9bcaaacae0b4ad05b176e7d10d04d6 = MAKE_CODEOBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[283], NULL, 1, 0, 0);
    codeobj_094989b39786edb60337c43de0b20f3d = MAKE_CODEOBJECT(module_filename_obj, 415, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[156], mod_consts[284], NULL, 2, 0, 0);
    codeobj_9a94b83041fbc9d05e9812e03019cb9a = MAKE_CODEOBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[247], mod_consts[285], NULL, 0, 0, 0);
    codeobj_df51868b648b3abe70b8758a186e978e = MAKE_CODEOBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[286], NULL, 2, 0, 0);
    codeobj_457dff0e2d80340c830f1ed24b840454 = MAKE_CODEOBJECT(module_filename_obj, 296, CO_NOFREE, mod_consts[251], mod_consts[275], NULL, 0, 0, 0);
    codeobj_45eef2488e6a7c7e7b19e3bee9bb042c = MAKE_CODEOBJECT(module_filename_obj, 462, CO_NOFREE, mod_consts[183], mod_consts[275], NULL, 0, 0, 0);
    codeobj_d9f1f03c537fe1b9008e4cf750e85b69 = MAKE_CODEOBJECT(module_filename_obj, 539, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[287], NULL, 1, 0, 0);
    codeobj_099e4100b3279a7cfc1c56c4ff14c5b3 = MAKE_CODEOBJECT(module_filename_obj, 526, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[166], mod_consts[287], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__10___str__();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__11___repr__();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__12___init__();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__13_min();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__14_max();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__15___str__();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__16___repr__();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__1__fr0();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__2__fr1();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__$$$function__2_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__$$$function__3_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__4__register_type();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__5__register_known_types();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__6__get_machar();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__2_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__3_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__4_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__8___new__();


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__9__init();


// The module function definitions.
static PyObject *impl_numpy$core$getlimits$$$function__1__fr0(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    struct Nuitka_FrameObject *frame_cc4b57ae9476a8c59960c34e26eecbac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cc4b57ae9476a8c59960c34e26eecbac = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cc4b57ae9476a8c59960c34e26eecbac)) {
        Py_XDECREF(cache_frame_cc4b57ae9476a8c59960c34e26eecbac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc4b57ae9476a8c59960c34e26eecbac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc4b57ae9476a8c59960c34e26eecbac = MAKE_FUNCTION_FRAME(codeobj_cc4b57ae9476a8c59960c34e26eecbac, module_numpy$core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cc4b57ae9476a8c59960c34e26eecbac->m_type_description == NULL);
    frame_cc4b57ae9476a8c59960c34e26eecbac = cache_frame_cc4b57ae9476a8c59960c34e26eecbac;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cc4b57ae9476a8c59960c34e26eecbac);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cc4b57ae9476a8c59960c34e26eecbac) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_a);
        tmp_expression_name_1 = par_a;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[1];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 19;
            type_description_1 = "o";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (par_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_a;
        frame_cc4b57ae9476a8c59960c34e26eecbac->m_frame.f_lineno = 20;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            par_a = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[4];
        CHECK_OBJECT(par_a);
        tmp_assattr_target_1 = par_a;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    if (par_a == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 22;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_a;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc4b57ae9476a8c59960c34e26eecbac);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc4b57ae9476a8c59960c34e26eecbac);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc4b57ae9476a8c59960c34e26eecbac);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc4b57ae9476a8c59960c34e26eecbac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc4b57ae9476a8c59960c34e26eecbac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc4b57ae9476a8c59960c34e26eecbac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc4b57ae9476a8c59960c34e26eecbac,
        type_description_1,
        par_a
    );


    // Release cached frame if used for exception.
    if (frame_cc4b57ae9476a8c59960c34e26eecbac == cache_frame_cc4b57ae9476a8c59960c34e26eecbac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cc4b57ae9476a8c59960c34e26eecbac);
        cache_frame_cc4b57ae9476a8c59960c34e26eecbac = NULL;
    }

    assertFrameObject(frame_cc4b57ae9476a8c59960c34e26eecbac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_a);
    par_a = NULL;
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

    Py_XDECREF(par_a);
    par_a = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__2__fr1(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    struct Nuitka_FrameObject *frame_7ef03692cedf04a0218e45cd901baf95;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7ef03692cedf04a0218e45cd901baf95 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7ef03692cedf04a0218e45cd901baf95)) {
        Py_XDECREF(cache_frame_7ef03692cedf04a0218e45cd901baf95);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ef03692cedf04a0218e45cd901baf95 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ef03692cedf04a0218e45cd901baf95 = MAKE_FUNCTION_FRAME(codeobj_7ef03692cedf04a0218e45cd901baf95, module_numpy$core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7ef03692cedf04a0218e45cd901baf95->m_type_description == NULL);
    frame_7ef03692cedf04a0218e45cd901baf95 = cache_frame_7ef03692cedf04a0218e45cd901baf95;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7ef03692cedf04a0218e45cd901baf95);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7ef03692cedf04a0218e45cd901baf95) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_a);
        tmp_expression_name_1 = par_a;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[7]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[8];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 27;
            type_description_1 = "o";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (par_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_a;
        frame_7ef03692cedf04a0218e45cd901baf95->m_frame.f_lineno = 28;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            par_a = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[9];
        CHECK_OBJECT(par_a);
        tmp_assattr_target_1 = par_a;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    if (par_a == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_a;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ef03692cedf04a0218e45cd901baf95);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ef03692cedf04a0218e45cd901baf95);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ef03692cedf04a0218e45cd901baf95);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ef03692cedf04a0218e45cd901baf95, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ef03692cedf04a0218e45cd901baf95->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ef03692cedf04a0218e45cd901baf95, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ef03692cedf04a0218e45cd901baf95,
        type_description_1,
        par_a
    );


    // Release cached frame if used for exception.
    if (frame_7ef03692cedf04a0218e45cd901baf95 == cache_frame_7ef03692cedf04a0218e45cd901baf95) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7ef03692cedf04a0218e45cd901baf95);
        cache_frame_7ef03692cedf04a0218e45cd901baf95 = NULL;
    }

    assertFrameObject(frame_7ef03692cedf04a0218e45cd901baf95);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_a);
    par_a = NULL;
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

    Py_XDECREF(par_a);
    par_a = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_ftype = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_eps = python_pars[2];
    PyObject *par_epsneg = python_pars[3];
    PyObject *par_huge = python_pars[4];
    PyObject *par_tiny = python_pars[5];
    PyObject *par_ibeta = python_pars[6];
    PyObject *par_kwargs = python_pars[7];
    struct Nuitka_CellObject *var_params = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_float_conv = Nuitka_Cell_Empty();
    PyObject *var_float_to_float = NULL;
    PyObject *var_float_to_str = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_assign_unpack_3__assign_source = NULL;
    struct Nuitka_FrameObject *frame_98a380acb4841fa4383f5c54b24c2960;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_98a380acb4841fa4383f5c54b24c2960 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_98a380acb4841fa4383f5c54b24c2960)) {
        Py_XDECREF(cache_frame_98a380acb4841fa4383f5c54b24c2960);

#if _DEBUG_REFCOUNTS
        if (cache_frame_98a380acb4841fa4383f5c54b24c2960 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_98a380acb4841fa4383f5c54b24c2960 = MAKE_FUNCTION_FRAME(codeobj_98a380acb4841fa4383f5c54b24c2960, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_98a380acb4841fa4383f5c54b24c2960->m_type_description == NULL);
    frame_98a380acb4841fa4383f5c54b24c2960 = cache_frame_98a380acb4841fa4383f5c54b24c2960;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_98a380acb4841fa4383f5c54b24c2960);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_98a380acb4841fa4383f5c54b24c2960) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_ftype));
        tmp_subscript_name_1 = Nuitka_Cell_GET(par_ftype);
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_params) == NULL);
        PyCell_SET(var_params, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_ftype;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__$$$function__1_lambda(tmp_closure_1);

        assert(Nuitka_Cell_GET(var_float_conv) == NULL);
        PyCell_SET(var_float_conv, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_2[1];

        tmp_closure_2[0] = var_float_conv;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_3 = MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__$$$function__2_lambda(tmp_closure_2);

        assert(var_float_to_float == NULL);
        var_float_to_float = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_3[2];

        tmp_closure_3[0] = par_ftype;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = var_params;
        Py_INCREF(tmp_closure_3[1]);

        tmp_assign_source_4 = MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__$$$function__3_lambda(tmp_closure_3);

        assert(var_float_to_str == NULL);
        var_float_to_str = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_params));
        tmp_expression_name_2 = Nuitka_Cell_GET(var_params);
        tmp_subscript_name_2 = mod_consts[14];
        tmp_assattr_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_float_to_float);
        tmp_called_name_1 = var_float_to_float;
        CHECK_OBJECT(par_eps);
        tmp_args_element_name_1 = par_eps;
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 45;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ocooooooccoo";
            goto try_except_handler_2;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_name_2 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[15], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ocooooooccoo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_name_3 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[16], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ocooooooccoo";
            goto try_except_handler_2;
        }
    }
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

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_float_to_float);
        tmp_called_name_2 = var_float_to_float;
        CHECK_OBJECT(par_epsneg);
        tmp_args_element_name_2 = par_epsneg;
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 46;
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[17], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_float_to_float);
        tmp_called_name_3 = var_float_to_float;
        CHECK_OBJECT(par_huge);
        tmp_args_element_name_3 = par_huge;
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 47;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ocooooooccoo";
            goto try_except_handler_3;
        }
        assert(tmp_assign_unpack_2__assign_source == NULL);
        tmp_assign_unpack_2__assign_source = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assattr_name_5 = tmp_assign_unpack_2__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[18], tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ocooooooccoo";
            goto try_except_handler_3;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assattr_name_6 = tmp_assign_unpack_2__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[19], tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ocooooooccoo";
            goto try_except_handler_3;
        }
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

    Py_XDECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_float_to_float);
        tmp_called_name_4 = var_float_to_float;
        CHECK_OBJECT(par_tiny);
        tmp_args_element_name_4 = par_tiny;
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 48;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ocooooooccoo";
            goto try_except_handler_4;
        }
        assert(tmp_assign_unpack_3__assign_source == NULL);
        tmp_assign_unpack_3__assign_source = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assattr_name_7 = tmp_assign_unpack_3__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[20], tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ocooooooccoo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assattr_name_8 = tmp_assign_unpack_3__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[21], tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ocooooooccoo";
            goto try_except_handler_4;
        }
    }
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

    Py_XDECREF(tmp_assign_unpack_3__assign_source);
    tmp_assign_unpack_3__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
    Py_DECREF(tmp_assign_unpack_3__assign_source);
    tmp_assign_unpack_3__assign_source = NULL;
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_assattr_target_9;
        if (Nuitka_Cell_GET(var_params) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = Nuitka_Cell_GET(var_params);
        tmp_subscript_name_3 = mod_consts[23];
        tmp_called_name_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ibeta);
        tmp_args_element_name_5 = par_ibeta;
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 49;
        tmp_assattr_name_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_5);
        if (tmp_assattr_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[24], tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_name_4);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_name_6 = par_kwargs;
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 50;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[25], tmp_args_element_name_6);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_assattr_target_10;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[16]);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 51;
        tmp_operand_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_7);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_10 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[28], tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_8;
        PyObject *tmp_right_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(var_float_to_float);
        tmp_called_name_7 = var_float_to_float;
        if (Nuitka_Cell_GET(var_float_conv) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = Nuitka_Cell_GET(var_float_conv);
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 52;
        tmp_left_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, mod_consts[30]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[28]);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 52;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 52;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 52;
        tmp_assattr_name_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assattr_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[31], tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(var_float_to_str);
        tmp_called_name_9 = var_float_to_str;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[16]);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 53;
        tmp_assattr_name_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_assattr_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[32], tmp_assattr_name_12);
        Py_DECREF(tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(var_float_to_str);
        tmp_called_name_10 = var_float_to_str;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[17]);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 54;
        tmp_assattr_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_10);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assattr_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[33], tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(var_float_to_str);
        tmp_called_name_11 = var_float_to_str;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = par_self;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[20]);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 55;
        tmp_assattr_name_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_11);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_assattr_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[34], tmp_assattr_name_14);
        Py_DECREF(tmp_assattr_name_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(var_float_to_str);
        tmp_called_name_12 = var_float_to_str;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[18]);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 56;
        tmp_assattr_name_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_12);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_assattr_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[35], tmp_assattr_name_15);
        Py_DECREF(tmp_assattr_name_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT(var_float_to_str);
        tmp_called_name_13 = var_float_to_str;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = par_self;
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[31]);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        frame_98a380acb4841fa4383f5c54b24c2960->m_frame.f_lineno = 57;
        tmp_assattr_name_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_13);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_assattr_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[36], tmp_assattr_name_16);
        Py_DECREF(tmp_assattr_name_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ocooooooccoo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_98a380acb4841fa4383f5c54b24c2960);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_98a380acb4841fa4383f5c54b24c2960);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_98a380acb4841fa4383f5c54b24c2960, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_98a380acb4841fa4383f5c54b24c2960->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_98a380acb4841fa4383f5c54b24c2960, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_98a380acb4841fa4383f5c54b24c2960,
        type_description_1,
        par_self,
        par_ftype,
        par_eps,
        par_epsneg,
        par_huge,
        par_tiny,
        par_ibeta,
        par_kwargs,
        var_params,
        var_float_conv,
        var_float_to_float,
        var_float_to_str
    );


    // Release cached frame if used for exception.
    if (frame_98a380acb4841fa4383f5c54b24c2960 == cache_frame_98a380acb4841fa4383f5c54b24c2960) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_98a380acb4841fa4383f5c54b24c2960);
        cache_frame_98a380acb4841fa4383f5c54b24c2960 = NULL;
    }

    assertFrameObject(frame_98a380acb4841fa4383f5c54b24c2960);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_ftype);
    Py_DECREF(par_ftype);
    par_ftype = NULL;
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    par_eps = NULL;
    CHECK_OBJECT(par_epsneg);
    Py_DECREF(par_epsneg);
    par_epsneg = NULL;
    CHECK_OBJECT(par_huge);
    Py_DECREF(par_huge);
    par_huge = NULL;
    CHECK_OBJECT(par_tiny);
    Py_DECREF(par_tiny);
    par_tiny = NULL;
    Py_XDECREF(par_ibeta);
    par_ibeta = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
    CHECK_OBJECT(var_float_conv);
    Py_DECREF(var_float_conv);
    var_float_conv = NULL;
    CHECK_OBJECT(var_float_to_float);
    Py_DECREF(var_float_to_float);
    var_float_to_float = NULL;
    CHECK_OBJECT(var_float_to_str);
    Py_DECREF(var_float_to_str);
    var_float_to_str = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_ftype);
    Py_DECREF(par_ftype);
    par_ftype = NULL;
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    par_eps = NULL;
    CHECK_OBJECT(par_epsneg);
    Py_DECREF(par_epsneg);
    par_epsneg = NULL;
    CHECK_OBJECT(par_huge);
    Py_DECREF(par_huge);
    par_huge = NULL;
    CHECK_OBJECT(par_tiny);
    Py_DECREF(par_tiny);
    par_tiny = NULL;
    Py_XDECREF(par_ibeta);
    par_ibeta = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
    CHECK_OBJECT(var_float_conv);
    Py_DECREF(var_float_conv);
    var_float_conv = NULL;
    Py_XDECREF(var_float_to_float);
    var_float_to_float = NULL;
    Py_XDECREF(var_float_to_str);
    var_float_to_str = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__3___init__$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    struct Nuitka_FrameObject *frame_568854ae4314eb3a99dcd915d6a25ab5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_568854ae4314eb3a99dcd915d6a25ab5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_568854ae4314eb3a99dcd915d6a25ab5)) {
        Py_XDECREF(cache_frame_568854ae4314eb3a99dcd915d6a25ab5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_568854ae4314eb3a99dcd915d6a25ab5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_568854ae4314eb3a99dcd915d6a25ab5 = MAKE_FUNCTION_FRAME(codeobj_568854ae4314eb3a99dcd915d6a25ab5, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_568854ae4314eb3a99dcd915d6a25ab5->m_type_description == NULL);
    frame_568854ae4314eb3a99dcd915d6a25ab5 = cache_frame_568854ae4314eb3a99dcd915d6a25ab5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_568854ae4314eb3a99dcd915d6a25ab5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_568854ae4314eb3a99dcd915d6a25ab5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v);
        tmp_list_element_1 = par_v;
        tmp_args_element_name_1 = PyList_New(1);
        PyList_SET_ITEM0(tmp_args_element_name_1, 0, tmp_list_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 39;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_568854ae4314eb3a99dcd915d6a25ab5->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_568854ae4314eb3a99dcd915d6a25ab5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_568854ae4314eb3a99dcd915d6a25ab5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_568854ae4314eb3a99dcd915d6a25ab5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_568854ae4314eb3a99dcd915d6a25ab5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_568854ae4314eb3a99dcd915d6a25ab5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_568854ae4314eb3a99dcd915d6a25ab5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_568854ae4314eb3a99dcd915d6a25ab5,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_568854ae4314eb3a99dcd915d6a25ab5 == cache_frame_568854ae4314eb3a99dcd915d6a25ab5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_568854ae4314eb3a99dcd915d6a25ab5);
        cache_frame_568854ae4314eb3a99dcd915d6a25ab5 = NULL;
    }

    assertFrameObject(frame_568854ae4314eb3a99dcd915d6a25ab5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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

    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__3___init__$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    struct Nuitka_FrameObject *frame_216379a72bd4406aa663d6b2e6301b8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_216379a72bd4406aa663d6b2e6301b8b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_216379a72bd4406aa663d6b2e6301b8b)) {
        Py_XDECREF(cache_frame_216379a72bd4406aa663d6b2e6301b8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_216379a72bd4406aa663d6b2e6301b8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_216379a72bd4406aa663d6b2e6301b8b = MAKE_FUNCTION_FRAME(codeobj_216379a72bd4406aa663d6b2e6301b8b, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_216379a72bd4406aa663d6b2e6301b8b->m_type_description == NULL);
    frame_216379a72bd4406aa663d6b2e6301b8b = cache_frame_216379a72bd4406aa663d6b2e6301b8b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_216379a72bd4406aa663d6b2e6301b8b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_216379a72bd4406aa663d6b2e6301b8b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_v);
        tmp_args_element_name_2 = par_v;
        frame_216379a72bd4406aa663d6b2e6301b8b->m_frame.f_lineno = 40;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_216379a72bd4406aa663d6b2e6301b8b->m_frame.f_lineno = 40;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_216379a72bd4406aa663d6b2e6301b8b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_216379a72bd4406aa663d6b2e6301b8b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_216379a72bd4406aa663d6b2e6301b8b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_216379a72bd4406aa663d6b2e6301b8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_216379a72bd4406aa663d6b2e6301b8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_216379a72bd4406aa663d6b2e6301b8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_216379a72bd4406aa663d6b2e6301b8b,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_216379a72bd4406aa663d6b2e6301b8b == cache_frame_216379a72bd4406aa663d6b2e6301b8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_216379a72bd4406aa663d6b2e6301b8b);
        cache_frame_216379a72bd4406aa663d6b2e6301b8b = NULL;
    }

    assertFrameObject(frame_216379a72bd4406aa663d6b2e6301b8b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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

    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__3___init__$$$function__3_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    struct Nuitka_FrameObject *frame_6faad760f41d04a32cb297b3edf43259;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6faad760f41d04a32cb297b3edf43259 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6faad760f41d04a32cb297b3edf43259)) {
        Py_XDECREF(cache_frame_6faad760f41d04a32cb297b3edf43259);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6faad760f41d04a32cb297b3edf43259 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6faad760f41d04a32cb297b3edf43259 = MAKE_FUNCTION_FRAME(codeobj_6faad760f41d04a32cb297b3edf43259, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6faad760f41d04a32cb297b3edf43259->m_type_description == NULL);
    frame_6faad760f41d04a32cb297b3edf43259 = cache_frame_6faad760f41d04a32cb297b3edf43259;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6faad760f41d04a32cb297b3edf43259);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6faad760f41d04a32cb297b3edf43259) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_3;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_subscript_name_1 = mod_consts[40];
        tmp_left_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 41;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 41;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v);
        tmp_args_element_name_2 = par_v;
        frame_6faad760f41d04a32cb297b3edf43259->m_frame.f_lineno = 41;
        tmp_expression_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 41;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[1];
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_2, 0);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 41;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_left_name_1);
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_6faad760f41d04a32cb297b3edf43259->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_3};
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 41;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6faad760f41d04a32cb297b3edf43259);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6faad760f41d04a32cb297b3edf43259);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6faad760f41d04a32cb297b3edf43259);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6faad760f41d04a32cb297b3edf43259, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6faad760f41d04a32cb297b3edf43259->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6faad760f41d04a32cb297b3edf43259, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6faad760f41d04a32cb297b3edf43259,
        type_description_1,
        par_v,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6faad760f41d04a32cb297b3edf43259 == cache_frame_6faad760f41d04a32cb297b3edf43259) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6faad760f41d04a32cb297b3edf43259);
        cache_frame_6faad760f41d04a32cb297b3edf43259 = NULL;
    }

    assertFrameObject(frame_6faad760f41d04a32cb297b3edf43259);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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

    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__4__register_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_machar = python_pars[0];
    PyObject *par_bytepat = python_pars[1];
    struct Nuitka_FrameObject *frame_df51868b648b3abe70b8758a186e978e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_df51868b648b3abe70b8758a186e978e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_df51868b648b3abe70b8758a186e978e)) {
        Py_XDECREF(cache_frame_df51868b648b3abe70b8758a186e978e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df51868b648b3abe70b8758a186e978e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df51868b648b3abe70b8758a186e978e = MAKE_FUNCTION_FRAME(codeobj_df51868b648b3abe70b8758a186e978e, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_df51868b648b3abe70b8758a186e978e->m_type_description == NULL);
    frame_df51868b648b3abe70b8758a186e978e = cache_frame_df51868b648b3abe70b8758a186e978e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_df51868b648b3abe70b8758a186e978e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_df51868b648b3abe70b8758a186e978e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_machar);
        tmp_ass_subvalue_1 = par_machar;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bytepat);
        tmp_ass_subscript_1 = par_bytepat;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df51868b648b3abe70b8758a186e978e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df51868b648b3abe70b8758a186e978e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df51868b648b3abe70b8758a186e978e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df51868b648b3abe70b8758a186e978e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df51868b648b3abe70b8758a186e978e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df51868b648b3abe70b8758a186e978e,
        type_description_1,
        par_machar,
        par_bytepat
    );


    // Release cached frame if used for exception.
    if (frame_df51868b648b3abe70b8758a186e978e == cache_frame_df51868b648b3abe70b8758a186e978e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_df51868b648b3abe70b8758a186e978e);
        cache_frame_df51868b648b3abe70b8758a186e978e = NULL;
    }

    assertFrameObject(frame_df51868b648b3abe70b8758a186e978e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_machar);
    Py_DECREF(par_machar);
    par_machar = NULL;
    CHECK_OBJECT(par_bytepat);
    Py_DECREF(par_bytepat);
    par_bytepat = NULL;
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

    CHECK_OBJECT(par_machar);
    Py_DECREF(par_machar);
    par_machar = NULL;
    CHECK_OBJECT(par_bytepat);
    Py_DECREF(par_bytepat);
    par_bytepat = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__5__register_known_types(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_f16 = NULL;
    PyObject *var_float16_ma = NULL;
    PyObject *var_f32 = NULL;
    PyObject *var_float32_ma = NULL;
    PyObject *var_f64 = NULL;
    PyObject *var_epsneg_f64 = NULL;
    PyObject *var_tiny_f64 = NULL;
    PyObject *var_float64_ma = NULL;
    PyObject *var_ld = NULL;
    PyObject *var_epsneg_f128 = NULL;
    PyObject *var_tiny_f128 = NULL;
    PyObject *var_huge_f128 = NULL;
    PyObject *var_float128_ma = NULL;
    PyObject *var_epsneg_f80 = NULL;
    PyObject *var_tiny_f80 = NULL;
    PyObject *var_huge_f80 = NULL;
    PyObject *var_float80_ma = NULL;
    PyObject *var_huge_dd = NULL;
    PyObject *var_float_dd_ma = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_9a94b83041fbc9d05e9812e03019cb9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_9a94b83041fbc9d05e9812e03019cb9a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9a94b83041fbc9d05e9812e03019cb9a)) {
        Py_XDECREF(cache_frame_9a94b83041fbc9d05e9812e03019cb9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a94b83041fbc9d05e9812e03019cb9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a94b83041fbc9d05e9812e03019cb9a = MAKE_FUNCTION_FRAME(codeobj_9a94b83041fbc9d05e9812e03019cb9a, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9a94b83041fbc9d05e9812e03019cb9a->m_type_description == NULL);
    frame_9a94b83041fbc9d05e9812e03019cb9a = cache_frame_9a94b83041fbc9d05e9812e03019cb9a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9a94b83041fbc9d05e9812e03019cb9a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9a94b83041fbc9d05e9812e03019cb9a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[44]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_f16 == NULL);
        var_f16 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f16);
        tmp_tuple_element_1 = var_f16;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[46];
        tmp_dict_value_1 = mod_consts[47];
        tmp_kwargs_name_1 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_called_name_6;
            PyObject *tmp_called_name_7;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[48];
            tmp_dict_value_1 = mod_consts[49];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[50];
            tmp_dict_value_1 = mod_consts[51];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[52];
            tmp_dict_value_1 = mod_consts[53];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[54];
            tmp_dict_value_1 = mod_consts[30];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[55];
            tmp_dict_value_1 = mod_consts[56];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[24];
            tmp_dict_value_1 = mod_consts[57];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[58];
            tmp_dict_value_1 = mod_consts[56];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[59];
            tmp_dict_value_1 = mod_consts[1];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_called_name_2 == NULL)) {
                tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_f16);
            tmp_called_name_3 = var_f16;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 108;
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, mod_consts[47]);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 108;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[17];
            tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_called_name_4 == NULL)) {
                tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_f16);
            tmp_called_name_5 = var_f16;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 109;
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[49]);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 109;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(var_f16);
            tmp_called_name_6 = var_f16;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 110;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, mod_consts[61]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            CHECK_OBJECT(var_f16);
            tmp_called_name_7 = var_f16;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 111;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, mod_consts[62]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 98;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_float16_ma == NULL);
        var_float16_ma = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_float16_ma);
        tmp_args_element_name_3 = var_float16_ma;
        tmp_args_element_name_4 = mod_consts[64];
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(var_float16_ma);
        tmp_ass_subvalue_1 = var_float16_ma;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[53];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 16, tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[66]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_f32 == NULL);
        var_f32 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f32);
        tmp_tuple_element_2 = var_f32;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[46];
        tmp_dict_value_2 = mod_consts[67];
        tmp_kwargs_name_2 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_11;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_called_name_13;
            PyObject *tmp_called_name_14;
            PyObject *tmp_called_name_15;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_16;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[48];
            tmp_dict_value_2 = mod_consts[68];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[50];
            tmp_dict_value_2 = mod_consts[69];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[52];
            tmp_dict_value_2 = mod_consts[70];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[54];
            tmp_dict_value_2 = mod_consts[71];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[55];
            tmp_dict_value_2 = mod_consts[72];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[24];
            tmp_dict_value_2 = mod_consts[57];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[58];
            tmp_dict_value_2 = mod_consts[56];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[59];
            tmp_dict_value_2 = mod_consts[1];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[16];
            tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_called_name_10 == NULL)) {
                tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            if (tmp_called_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            CHECK_OBJECT(var_f32);
            tmp_called_name_11 = var_f32;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 127;
            tmp_args_element_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, mod_consts[67]);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 127;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[17];
            tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_called_name_12 == NULL)) {
                tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            if (tmp_called_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            CHECK_OBJECT(var_f32);
            tmp_called_name_13 = var_f32;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 128;
            tmp_args_element_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, mod_consts[68]);
            if (tmp_args_element_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 128;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[19];
            CHECK_OBJECT(var_f32);
            tmp_called_name_14 = var_f32;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 129;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, mod_consts[73]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[21];
            tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_called_name_15 == NULL)) {
                tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            if (tmp_called_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            CHECK_OBJECT(var_f32);
            tmp_called_name_16 = var_f32;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 130;
            tmp_args_element_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, mod_consts[69]);
            if (tmp_args_element_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 130;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 117;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_float32_ma == NULL);
        var_float32_ma = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_name_17 == NULL)) {
            tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_float32_ma);
        tmp_args_element_name_8 = var_float32_ma;
        tmp_args_element_name_9 = mod_consts[74];
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_17, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT(var_float32_ma);
        tmp_ass_subvalue_2 = var_float32_ma;
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[75];
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_2, tmp_ass_subscript_2, 32, tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[76]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_f64 == NULL);
        var_f64 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[77];
        assert(var_epsneg_f64 == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_epsneg_f64 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[78];
        assert(var_tiny_f64 == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_tiny_f64 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_name_18 == NULL)) {
            tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f64);
        tmp_tuple_element_3 = var_f64;
        tmp_args_name_3 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_3);
        tmp_dict_key_3 = mod_consts[46];
        tmp_dict_value_3 = mod_consts[79];
        tmp_kwargs_name_3 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_19;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[48];
            tmp_dict_value_3 = mod_consts[80];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[50];
            tmp_dict_value_3 = mod_consts[81];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[52];
            tmp_dict_value_3 = mod_consts[82];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[54];
            tmp_dict_value_3 = mod_consts[83];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[55];
            tmp_dict_value_3 = mod_consts[84];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[24];
            tmp_dict_value_3 = mod_consts[57];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[58];
            tmp_dict_value_3 = mod_consts[56];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[59];
            tmp_dict_value_3 = mod_consts[1];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[16];
            tmp_dict_value_3 = mod_consts[85];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[17];
            CHECK_OBJECT(var_epsneg_f64);
            tmp_dict_value_3 = var_epsneg_f64;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[19];
            tmp_left_name_3 = mod_consts[86];
            CHECK_OBJECT(var_epsneg_f64);
            tmp_right_name_1 = var_epsneg_f64;
            tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_FLOAT_FLOAT(tmp_left_name_3, tmp_right_name_1);
            assert(!(tmp_left_name_2 == NULL));
            CHECK_OBJECT(var_tiny_f64);
            tmp_right_name_2 = var_tiny_f64;
            tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_FLOAT(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_left_name_2);
            if (tmp_left_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            CHECK_OBJECT(var_f64);
            tmp_called_name_19 = var_f64;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 150;
            tmp_right_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, mod_consts[87]);
            if (tmp_right_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_1);

                exception_lineno = 150;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_left_name_1, tmp_right_name_3);
            Py_DECREF(tmp_left_name_1);
            Py_DECREF(tmp_right_name_3);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[21];
            CHECK_OBJECT(var_tiny_f64);
            tmp_dict_value_3 = var_tiny_f64;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 138;
        tmp_assign_source_8 = CALL_FUNCTION(tmp_called_name_18, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_float64_ma == NULL);
        var_float64_ma = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_name_20;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_called_name_20 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_name_20 == NULL)) {
            tmp_called_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_float64_ma);
        tmp_args_element_name_10 = var_float64_ma;
        tmp_args_element_name_11 = mod_consts[88];
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_20, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        CHECK_OBJECT(var_float64_ma);
        tmp_ass_subvalue_3 = var_float64_ma;
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[89];
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_3, tmp_ass_subscript_3, 64, tmp_ass_subvalue_3);
        if (tmp_ass_subscript_res_3 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_name_4;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[90]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ld == NULL);
        var_ld = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_21;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_22;
        tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_name_21 == NULL)) {
            tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ld);
        tmp_called_name_22 = var_ld;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 157;
        tmp_args_element_name_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, mod_consts[91]);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 157;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_12);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_epsneg_f128 == NULL);
        var_epsneg_f128 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_23;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_name_24;
        tmp_called_name_23 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_name_23 == NULL)) {
            tmp_called_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ld);
        tmp_called_name_24 = var_ld;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 158;
        tmp_args_element_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, mod_consts[92]);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 158;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_13);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tiny_f128 == NULL);
        var_tiny_f128 = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_kwargs_name_4;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[94]);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kwargs_name_4 = PyDict_Copy(mod_consts[95]);
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 160;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_25, tmp_kwargs_name_4);
        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_kwargs_name_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_26;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_6 = tmp_with_1__source;
        tmp_called_name_26 = LOOKUP_SPECIAL(tmp_expression_name_6, mod_consts[96]);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 160;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tmp_called_name_26);
        Py_DECREF(tmp_called_name_26);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_7 = tmp_with_1__source;
        tmp_assign_source_14 = LOOKUP_SPECIAL(tmp_expression_name_7, mod_consts[97]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_assign_source_15;
        tmp_assign_source_15 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_15;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_called_name_27;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_name_28;
        CHECK_OBJECT(var_ld);
        tmp_called_name_27 = var_ld;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 161;
        tmp_left_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, mod_consts[8]);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_epsneg_f128);
        tmp_right_name_4 = var_epsneg_f128;
        tmp_left_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_4);
        Py_DECREF(tmp_left_name_6);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_tiny_f128);
        tmp_right_name_5 = var_tiny_f128;
        tmp_left_name_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_left_name_5);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_ld);
        tmp_called_name_28 = var_ld;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 161;
        tmp_right_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, mod_consts[87]);
        if (tmp_right_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_16 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_6);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_6);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_huge_f128 == NULL);
        var_huge_f128 = tmp_assign_source_16;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_9a94b83041fbc9d05e9812e03019cb9a, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_9a94b83041fbc9d05e9812e03019cb9a, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_17;
        tmp_assign_source_17 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_29;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_29 = tmp_with_1__exit;
        tmp_args_element_name_14 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_15 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_16 = EXC_TRACEBACK(PyThreadState_GET());
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_29, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 161;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame) frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 160;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame) frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
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

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_30;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_30 = tmp_with_1__exit;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 161;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_30, &PyTuple_GET_ITEM(mod_consts[98], 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_31;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_31 = tmp_with_1__exit;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 161;
        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_31, &PyTuple_GET_ITEM(mod_consts[98], 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_32;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_name_5;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_called_name_32 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_name_32 == NULL)) {
            tmp_called_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ld);
        tmp_tuple_element_4 = var_ld;
        tmp_args_name_4 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_4);
        tmp_dict_key_4 = mod_consts[46];
        tmp_dict_value_4 = mod_consts[99];
        tmp_kwargs_name_5 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_called_name_33;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_called_name_34;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[48];
            tmp_dict_value_4 = mod_consts[91];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[50];
            tmp_dict_value_4 = mod_consts[92];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[52];
            tmp_dict_value_4 = mod_consts[100];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[54];
            tmp_dict_value_4 = mod_consts[101];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[55];
            tmp_dict_value_4 = mod_consts[102];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[24];
            tmp_dict_value_4 = mod_consts[57];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[58];
            tmp_dict_value_4 = mod_consts[56];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[59];
            tmp_dict_value_4 = mod_consts[1];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[16];
            tmp_called_name_33 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_called_name_33 == NULL)) {
                tmp_called_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            if (tmp_called_name_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            CHECK_OBJECT(var_ld);
            tmp_called_name_34 = var_ld;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 172;
            tmp_args_element_name_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, mod_consts[99]);
            if (tmp_args_element_name_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 172;
            tmp_dict_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_17);
            Py_DECREF(tmp_args_element_name_17);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[17];
            if (var_epsneg_f128 == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[103]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_dict_value_4 = var_epsneg_f128;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[19];
            if (var_huge_f128 == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 174;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_dict_value_4 = var_huge_f128;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[21];
            if (var_tiny_f128 == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 175;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_dict_value_4 = var_tiny_f128;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kwargs_name_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 162;
        tmp_assign_source_18 = CALL_FUNCTION(tmp_called_name_32, tmp_args_name_4, tmp_kwargs_name_5);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kwargs_name_5);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_float128_ma == NULL);
        var_float128_ma = tmp_assign_source_18;
    }
    {
        PyObject *tmp_called_name_35;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_called_name_35 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_name_35 == NULL)) {
            tmp_called_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_float128_ma);
        tmp_args_element_name_18 = var_float128_ma;
        tmp_args_element_name_19 = mod_consts[106];
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_name_18, tmp_args_element_name_19};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_35, call_args);
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_name_36;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        tmp_called_name_36 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_name_36 == NULL)) {
            tmp_called_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_float128_ma);
        tmp_args_element_name_20 = var_float128_ma;
        tmp_args_element_name_21 = mod_consts[106];
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_name_20, tmp_args_element_name_21};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_36, call_args);
        }

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        int tmp_ass_subscript_res_4;
        CHECK_OBJECT(var_float128_ma);
        tmp_ass_subvalue_4 = var_float128_ma;
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[70];
        tmp_ass_subscript_res_4 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_4, tmp_ass_subscript_4, 128, tmp_ass_subvalue_4);
        if (tmp_ass_subscript_res_4 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_37;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_called_name_38;
        tmp_called_name_37 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_name_37 == NULL)) {
            tmp_called_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ld);
        tmp_called_name_38 = var_ld;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 184;
        tmp_args_element_name_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_38, mod_consts[107]);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 184;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_37, tmp_args_element_name_22);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_epsneg_f80 == NULL);
        var_epsneg_f80 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_39;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_called_name_40;
        tmp_called_name_39 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_name_39 == NULL)) {
            tmp_called_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ld);
        tmp_called_name_40 = var_ld;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 185;
        tmp_args_element_name_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_40, mod_consts[92]);
        if (tmp_args_element_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 185;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_39, tmp_args_element_name_23);
        Py_DECREF(tmp_args_element_name_23);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tiny_f80 == NULL);
        var_tiny_f80 = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_41;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_kwargs_name_6;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_name_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[94]);
        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_kwargs_name_6 = PyDict_Copy(mod_consts[95]);
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 187;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_41, tmp_kwargs_name_6);
        Py_DECREF(tmp_called_name_41);
        Py_DECREF(tmp_kwargs_name_6);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_42;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_name_9 = tmp_with_2__source;
        tmp_called_name_42 = LOOKUP_SPECIAL(tmp_expression_name_9, mod_consts[96]);
        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 187;
        tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS(tmp_called_name_42);
        Py_DECREF(tmp_called_name_42);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_name_10;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_name_10 = tmp_with_2__source;
        tmp_assign_source_23 = LOOKUP_SPECIAL(tmp_expression_name_10, mod_consts[97]);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_assign_source_24;
        tmp_assign_source_24 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_24;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_called_name_43;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_name_44;
        CHECK_OBJECT(var_ld);
        tmp_called_name_43 = var_ld;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 188;
        tmp_left_name_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_43, mod_consts[8]);
        if (tmp_left_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_epsneg_f80);
        tmp_right_name_7 = var_epsneg_f80;
        tmp_left_name_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_7);
        Py_DECREF(tmp_left_name_9);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_tiny_f80);
        tmp_right_name_8 = var_tiny_f80;
        tmp_left_name_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_left_name_8);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_ld);
        tmp_called_name_44 = var_ld;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 188;
        tmp_right_name_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_44, mod_consts[87]);
        if (tmp_right_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_25 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_9);
        Py_DECREF(tmp_left_name_7);
        Py_DECREF(tmp_right_name_9);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(var_huge_f80 == NULL);
        var_huge_f80 = tmp_assign_source_25;
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

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_9a94b83041fbc9d05e9812e03019cb9a, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_9a94b83041fbc9d05e9812e03019cb9a, exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_5, exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_assign_source_26;
        tmp_assign_source_26 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_45;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_45 = tmp_with_2__exit;
        tmp_args_element_name_24 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_25 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_26 = EXC_TRACEBACK(PyThreadState_GET());
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26};
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_45, call_args);
        }

        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 188;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame) frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_9;
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 187;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame) frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_9;
    branch_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_5 = tmp_with_2__indicator;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_name_46;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_46 = tmp_with_2__exit;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 188;
        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_46, &PyTuple_GET_ITEM(mod_consts[98], 0));

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_7);
            Py_XDECREF(exception_keeper_value_7);
            Py_XDECREF(exception_keeper_tb_7);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_7:;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_6;
    // End of try:
    try_end_7:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_2__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_name_47;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_47 = tmp_with_2__exit;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 188;
        tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_47, &PyTuple_GET_ITEM(mod_consts[98], 0));

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_8:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_48;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_name_7;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_called_name_48 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_name_48 == NULL)) {
            tmp_called_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ld);
        tmp_tuple_element_5 = var_ld;
        tmp_args_name_5 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_5, 0, tmp_tuple_element_5);
        tmp_dict_key_5 = mod_consts[46];
        tmp_dict_value_5 = mod_consts[108];
        tmp_kwargs_name_7 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_called_name_49;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_called_name_50;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[48];
            tmp_dict_value_5 = mod_consts[107];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[50];
            tmp_dict_value_5 = mod_consts[92];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[52];
            tmp_dict_value_5 = mod_consts[100];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[54];
            tmp_dict_value_5 = mod_consts[109];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[55];
            tmp_dict_value_5 = mod_consts[102];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[24];
            tmp_dict_value_5 = mod_consts[57];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[58];
            tmp_dict_value_5 = mod_consts[56];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[59];
            tmp_dict_value_5 = mod_consts[1];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[16];
            tmp_called_name_49 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_called_name_49 == NULL)) {
                tmp_called_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            if (tmp_called_name_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_5;
            }
            CHECK_OBJECT(var_ld);
            tmp_called_name_50 = var_ld;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 199;
            tmp_args_element_name_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_50, mod_consts[108]);
            if (tmp_args_element_name_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_5;
            }
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 199;
            tmp_dict_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_49, tmp_args_element_name_27);
            Py_DECREF(tmp_args_element_name_27);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[17];
            if (var_epsneg_f80 == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 200;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_5;
            }

            tmp_dict_value_5 = var_epsneg_f80;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[19];
            if (var_huge_f80 == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 201;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_5;
            }

            tmp_dict_value_5 = var_huge_f80;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[21];
            if (var_tiny_f80 == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 202;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_5;
            }

            tmp_dict_value_5 = var_tiny_f80;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_args_name_5);
        Py_DECREF(tmp_kwargs_name_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 189;
        tmp_assign_source_27 = CALL_FUNCTION(tmp_called_name_48, tmp_args_name_5, tmp_kwargs_name_7);
        Py_DECREF(tmp_args_name_5);
        Py_DECREF(tmp_kwargs_name_7);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_float80_ma == NULL);
        var_float80_ma = tmp_assign_source_27;
    }
    {
        PyObject *tmp_called_name_51;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        tmp_called_name_51 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_name_51 == NULL)) {
            tmp_called_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_float80_ma);
        tmp_args_element_name_28 = var_float80_ma;
        tmp_args_element_name_29 = mod_consts[113];
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_name_28, tmp_args_element_name_29};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_51, call_args);
        }

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        int tmp_ass_subscript_res_5;
        CHECK_OBJECT(var_float80_ma);
        tmp_ass_subvalue_5 = var_float80_ma;
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[114];
        tmp_ass_subscript_res_5 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_5, tmp_ass_subscript_5, 80, tmp_ass_subvalue_5);
        if (tmp_ass_subscript_res_5 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_28;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_called_name_52;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_called_name_53;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_called_name_54;
        PyObject *tmp_expression_name_13;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_name_1 = mod_consts[116];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_11, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_52 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[116]);
        if (tmp_called_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ld);
        tmp_called_name_53 = var_ld;
        tmp_args_element_name_31 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_args_element_name_31 == NULL)) {
            tmp_args_element_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_args_element_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_52);

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 211;
        tmp_args_element_name_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_53, tmp_args_element_name_31);
        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_52);

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ld);
        tmp_called_name_54 = var_ld;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 211;
        tmp_args_element_name_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_54, mod_consts[1]);
        if (tmp_args_element_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_args_element_name_30);

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_name_30, tmp_args_element_name_32};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_52, call_args);
        }

        Py_DECREF(tmp_called_name_52);
        Py_DECREF(tmp_args_element_name_30);
        Py_DECREF(tmp_args_element_name_32);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_float64_ma);
        tmp_expression_name_13 = var_float64_ma;
        tmp_assign_source_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[19]);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_huge_dd == NULL);
        var_huge_dd = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_55;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_name_8;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_called_name_55 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_name_55 == NULL)) {
            tmp_called_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ld);
        tmp_tuple_element_6 = var_ld;
        tmp_args_name_6 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_6, 0, tmp_tuple_element_6);
        tmp_dict_key_6 = mod_consts[46];
        tmp_dict_value_6 = mod_consts[118];
        tmp_kwargs_name_8 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_called_name_56;
            PyObject *tmp_args_element_name_33;
            PyObject *tmp_called_name_57;
            PyObject *tmp_called_name_58;
            PyObject *tmp_args_element_name_34;
            PyObject *tmp_called_name_59;
            PyObject *tmp_called_name_60;
            PyObject *tmp_args_element_name_35;
            PyObject *tmp_called_name_61;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[48];
            tmp_dict_value_6 = mod_consts[119];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[50];
            tmp_dict_value_6 = mod_consts[81];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[52];
            tmp_dict_value_6 = mod_consts[82];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[54];
            tmp_dict_value_6 = mod_consts[120];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[55];
            tmp_dict_value_6 = mod_consts[84];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[24];
            tmp_dict_value_6 = mod_consts[57];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[58];
            tmp_dict_value_6 = mod_consts[56];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[59];
            tmp_dict_value_6 = mod_consts[1];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[16];
            tmp_called_name_56 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_called_name_56 == NULL)) {
                tmp_called_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            if (tmp_called_name_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            CHECK_OBJECT(var_ld);
            tmp_called_name_57 = var_ld;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 224;
            tmp_args_element_name_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_57, mod_consts[118]);
            if (tmp_args_element_name_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 224;
            tmp_dict_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_56, tmp_args_element_name_33);
            Py_DECREF(tmp_args_element_name_33);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[17];
            tmp_called_name_58 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_called_name_58 == NULL)) {
                tmp_called_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            if (tmp_called_name_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            CHECK_OBJECT(var_ld);
            tmp_called_name_59 = var_ld;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 225;
            tmp_args_element_name_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_59, mod_consts[119]);
            if (tmp_args_element_name_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 225;
            tmp_dict_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_58, tmp_args_element_name_34);
            Py_DECREF(tmp_args_element_name_34);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[19];
            CHECK_OBJECT(var_huge_dd);
            tmp_dict_value_6 = var_huge_dd;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[21];
            tmp_called_name_60 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_called_name_60 == NULL)) {
                tmp_called_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            if (tmp_called_name_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            CHECK_OBJECT(var_ld);
            tmp_called_name_61 = var_ld;
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 227;
            tmp_args_element_name_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_61, mod_consts[81]);
            if (tmp_args_element_name_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 227;
            tmp_dict_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_60, tmp_args_element_name_35);
            Py_DECREF(tmp_args_element_name_35);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "ooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_args_name_6);
        Py_DECREF(tmp_kwargs_name_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 214;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_name_55, tmp_args_name_6, tmp_kwargs_name_8);
        Py_DECREF(tmp_args_name_6);
        Py_DECREF(tmp_kwargs_name_8);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_float_dd_ma == NULL);
        var_float_dd_ma = tmp_assign_source_29;
    }
    {
        PyObject *tmp_called_name_62;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_args_element_name_37;
        tmp_called_name_62 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_name_62 == NULL)) {
            tmp_called_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_float_dd_ma);
        tmp_args_element_name_36 = var_float_dd_ma;
        tmp_args_element_name_37 = mod_consts[121];
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_name_36, tmp_args_element_name_37};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_62, call_args);
        }

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_name_63;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        tmp_called_name_63 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_name_63 == NULL)) {
            tmp_called_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_float_dd_ma);
        tmp_args_element_name_38 = var_float_dd_ma;
        tmp_args_element_name_39 = mod_consts[122];
        frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_name_38, tmp_args_element_name_39};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_63, call_args);
        }

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        CHECK_OBJECT(var_float_dd_ma);
        tmp_ass_subvalue_6 = var_float_dd_ma;
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[123];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9a94b83041fbc9d05e9812e03019cb9a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9a94b83041fbc9d05e9812e03019cb9a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9a94b83041fbc9d05e9812e03019cb9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a94b83041fbc9d05e9812e03019cb9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a94b83041fbc9d05e9812e03019cb9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a94b83041fbc9d05e9812e03019cb9a,
        type_description_1,
        var_f16,
        var_float16_ma,
        var_f32,
        var_float32_ma,
        var_f64,
        var_epsneg_f64,
        var_tiny_f64,
        var_float64_ma,
        var_ld,
        var_epsneg_f128,
        var_tiny_f128,
        var_huge_f128,
        var_float128_ma,
        var_epsneg_f80,
        var_tiny_f80,
        var_huge_f80,
        var_float80_ma,
        var_huge_dd,
        var_float_dd_ma
    );


    // Release cached frame if used for exception.
    if (frame_9a94b83041fbc9d05e9812e03019cb9a == cache_frame_9a94b83041fbc9d05e9812e03019cb9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9a94b83041fbc9d05e9812e03019cb9a);
        cache_frame_9a94b83041fbc9d05e9812e03019cb9a = NULL;
    }

    assertFrameObject(frame_9a94b83041fbc9d05e9812e03019cb9a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_f16);
    Py_DECREF(var_f16);
    var_f16 = NULL;
    CHECK_OBJECT(var_float16_ma);
    Py_DECREF(var_float16_ma);
    var_float16_ma = NULL;
    CHECK_OBJECT(var_f32);
    Py_DECREF(var_f32);
    var_f32 = NULL;
    CHECK_OBJECT(var_float32_ma);
    Py_DECREF(var_float32_ma);
    var_float32_ma = NULL;
    CHECK_OBJECT(var_f64);
    Py_DECREF(var_f64);
    var_f64 = NULL;
    CHECK_OBJECT(var_epsneg_f64);
    Py_DECREF(var_epsneg_f64);
    var_epsneg_f64 = NULL;
    CHECK_OBJECT(var_tiny_f64);
    Py_DECREF(var_tiny_f64);
    var_tiny_f64 = NULL;
    Py_XDECREF(var_float64_ma);
    var_float64_ma = NULL;
    CHECK_OBJECT(var_ld);
    Py_DECREF(var_ld);
    var_ld = NULL;
    Py_XDECREF(var_epsneg_f128);
    var_epsneg_f128 = NULL;
    Py_XDECREF(var_tiny_f128);
    var_tiny_f128 = NULL;
    Py_XDECREF(var_huge_f128);
    var_huge_f128 = NULL;
    CHECK_OBJECT(var_float128_ma);
    Py_DECREF(var_float128_ma);
    var_float128_ma = NULL;
    Py_XDECREF(var_epsneg_f80);
    var_epsneg_f80 = NULL;
    Py_XDECREF(var_tiny_f80);
    var_tiny_f80 = NULL;
    Py_XDECREF(var_huge_f80);
    var_huge_f80 = NULL;
    CHECK_OBJECT(var_float80_ma);
    Py_DECREF(var_float80_ma);
    var_float80_ma = NULL;
    CHECK_OBJECT(var_huge_dd);
    Py_DECREF(var_huge_dd);
    var_huge_dd = NULL;
    CHECK_OBJECT(var_float_dd_ma);
    Py_DECREF(var_float_dd_ma);
    var_float_dd_ma = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_f16);
    var_f16 = NULL;
    Py_XDECREF(var_float16_ma);
    var_float16_ma = NULL;
    Py_XDECREF(var_f32);
    var_f32 = NULL;
    Py_XDECREF(var_float32_ma);
    var_float32_ma = NULL;
    Py_XDECREF(var_f64);
    var_f64 = NULL;
    Py_XDECREF(var_epsneg_f64);
    var_epsneg_f64 = NULL;
    Py_XDECREF(var_tiny_f64);
    var_tiny_f64 = NULL;
    Py_XDECREF(var_float64_ma);
    var_float64_ma = NULL;
    Py_XDECREF(var_ld);
    var_ld = NULL;
    Py_XDECREF(var_epsneg_f128);
    var_epsneg_f128 = NULL;
    Py_XDECREF(var_tiny_f128);
    var_tiny_f128 = NULL;
    Py_XDECREF(var_huge_f128);
    var_huge_f128 = NULL;
    Py_XDECREF(var_float128_ma);
    var_float128_ma = NULL;
    Py_XDECREF(var_epsneg_f80);
    var_epsneg_f80 = NULL;
    Py_XDECREF(var_tiny_f80);
    var_tiny_f80 = NULL;
    Py_XDECREF(var_huge_f80);
    var_huge_f80 = NULL;
    Py_XDECREF(var_float80_ma);
    var_float80_ma = NULL;
    Py_XDECREF(var_huge_dd);
    var_huge_dd = NULL;
    Py_XDECREF(var_float_dd_ma);
    var_float_dd_ma = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

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


static PyObject *impl_numpy$core$getlimits$$$function__6__get_machar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ftype = python_pars[0];
    PyObject *var_params = NULL;
    PyObject *var_key = NULL;
    PyObject *var_ma_like = NULL;
    struct Nuitka_FrameObject *frame_2f9bcaaacae0b4ad05b176e7d10d04d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2f9bcaaacae0b4ad05b176e7d10d04d6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2f9bcaaacae0b4ad05b176e7d10d04d6)) {
        Py_XDECREF(cache_frame_2f9bcaaacae0b4ad05b176e7d10d04d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f9bcaaacae0b4ad05b176e7d10d04d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f9bcaaacae0b4ad05b176e7d10d04d6 = MAKE_FUNCTION_FRAME(codeobj_2f9bcaaacae0b4ad05b176e7d10d04d6, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_type_description == NULL);
    frame_2f9bcaaacae0b4ad05b176e7d10d04d6 = cache_frame_2f9bcaaacae0b4ad05b176e7d10d04d6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2f9bcaaacae0b4ad05b176e7d10d04d6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2f9bcaaacae0b4ad05b176e7d10d04d6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ftype);
        tmp_args_element_name_1 = par_ftype;
        frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_frame.f_lineno = 260;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[124], tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_params);
        tmp_compexpr_left_1 = var_params;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_operand_name_1;
        if (par_ftype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = par_ftype;
        tmp_make_exception_arg_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_frame.f_lineno = 262;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 262;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_name_1;
        if (par_ftype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = par_ftype;
        frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_frame.f_lineno = 264;
        tmp_called_instance_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[125]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_frame.f_lineno = 264;
        tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[126],
            &PyTuple_GET_ITEM(mod_consts[127], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_frame.f_lineno = 264;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[128]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_key == NULL);
        var_key = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        assert(var_ma_like == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_ma_like = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_1;
        if (par_ftype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 266;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = par_ftype;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[90]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[124]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_key);
        tmp_expression_name_3 = var_key;
        tmp_subscript_name_1 = mod_consts[129];
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_frame.f_lineno = 271;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ma_like;
            assert(old != NULL);
            var_ma_like = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_ma_like);
        tmp_compexpr_left_3 = var_ma_like;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_key);
        tmp_args_element_name_3 = var_key;
        frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_frame.f_lineno = 273;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[124], tmp_args_element_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ma_like;
            assert(old != NULL);
            var_ma_like = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        if (var_ma_like == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[130]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_ma_like;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    if (var_ma_like == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[130]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 275;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ma_like;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_kwargs_name_1;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[132]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = mod_consts[133];
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[134]);
        assert(!(tmp_called_name_4 == NULL));
        if (var_key == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = var_key;
        if (par_ftype == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_ftype;
        frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[137]);
        frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_frame.f_lineno = 277;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_ftype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = par_ftype;
        frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_frame.f_lineno = 281;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f9bcaaacae0b4ad05b176e7d10d04d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f9bcaaacae0b4ad05b176e7d10d04d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f9bcaaacae0b4ad05b176e7d10d04d6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f9bcaaacae0b4ad05b176e7d10d04d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f9bcaaacae0b4ad05b176e7d10d04d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f9bcaaacae0b4ad05b176e7d10d04d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f9bcaaacae0b4ad05b176e7d10d04d6,
        type_description_1,
        par_ftype,
        var_params,
        var_key,
        var_ma_like
    );


    // Release cached frame if used for exception.
    if (frame_2f9bcaaacae0b4ad05b176e7d10d04d6 == cache_frame_2f9bcaaacae0b4ad05b176e7d10d04d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2f9bcaaacae0b4ad05b176e7d10d04d6);
        cache_frame_2f9bcaaacae0b4ad05b176e7d10d04d6 = NULL;
    }

    assertFrameObject(frame_2f9bcaaacae0b4ad05b176e7d10d04d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_ftype);
    par_ftype = NULL;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_ma_like);
    var_ma_like = NULL;
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

    Py_XDECREF(par_ftype);
    par_ftype = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_ma_like);
    var_ma_like = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__7__discovered_machar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ftype = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *var_params = Nuitka_Cell_Empty();
    struct Nuitka_FrameObject *frame_e9a7fe440695cd2ca617b99619e57b78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e9a7fe440695cd2ca617b99619e57b78 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e9a7fe440695cd2ca617b99619e57b78)) {
        Py_XDECREF(cache_frame_e9a7fe440695cd2ca617b99619e57b78);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e9a7fe440695cd2ca617b99619e57b78 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e9a7fe440695cd2ca617b99619e57b78 = MAKE_FUNCTION_FRAME(codeobj_e9a7fe440695cd2ca617b99619e57b78, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e9a7fe440695cd2ca617b99619e57b78->m_type_description == NULL);
    frame_e9a7fe440695cd2ca617b99619e57b78 = cache_frame_e9a7fe440695cd2ca617b99619e57b78;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e9a7fe440695cd2ca617b99619e57b78);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e9a7fe440695cd2ca617b99619e57b78) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_ftype));
        tmp_subscript_name_1 = Nuitka_Cell_GET(par_ftype);
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_params) == NULL);
        PyCell_SET(var_params, tmp_assign_source_1);

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        PyObject *tmp_args_element_name_2;
        struct Nuitka_CellObject *tmp_closure_2[1];
        PyObject *tmp_args_element_name_3;
        struct Nuitka_CellObject *tmp_closure_3[1];
        PyObject *tmp_args_element_name_4;
        struct Nuitka_CellObject *tmp_closure_4[2];
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = par_ftype;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_name_1 = MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__1_lambda(tmp_closure_1);


        tmp_closure_2[0] = var_params;
        Py_INCREF(tmp_closure_2[0]);

        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__2_lambda(tmp_closure_2);


        tmp_closure_3[0] = par_ftype;
        Py_INCREF(tmp_closure_3[0]);

        tmp_args_element_name_3 = MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__3_lambda(tmp_closure_3);


        tmp_closure_4[0] = par_ftype;
        Py_INCREF(tmp_closure_4[0]);
        tmp_closure_4[1] = var_params;
        Py_INCREF(tmp_closure_4[1]);

        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__4_lambda(tmp_closure_4);

        CHECK_OBJECT(Nuitka_Cell_GET(var_params));
        tmp_expression_name_2 = Nuitka_Cell_GET(var_params);
        tmp_subscript_name_2 = mod_consts[14];
        tmp_args_element_name_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 292;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_e9a7fe440695cd2ca617b99619e57b78->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9a7fe440695cd2ca617b99619e57b78);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9a7fe440695cd2ca617b99619e57b78);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9a7fe440695cd2ca617b99619e57b78);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e9a7fe440695cd2ca617b99619e57b78, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9a7fe440695cd2ca617b99619e57b78->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9a7fe440695cd2ca617b99619e57b78, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e9a7fe440695cd2ca617b99619e57b78,
        type_description_1,
        par_ftype,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_e9a7fe440695cd2ca617b99619e57b78 == cache_frame_e9a7fe440695cd2ca617b99619e57b78) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e9a7fe440695cd2ca617b99619e57b78);
        cache_frame_e9a7fe440695cd2ca617b99619e57b78 = NULL;
    }

    assertFrameObject(frame_e9a7fe440695cd2ca617b99619e57b78);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_ftype);
    Py_DECREF(par_ftype);
    par_ftype = NULL;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    CHECK_OBJECT(par_ftype);
    Py_DECREF(par_ftype);
    par_ftype = NULL;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    struct Nuitka_FrameObject *frame_1dc55646d5daac9e39082858c1903002;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1dc55646d5daac9e39082858c1903002 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1dc55646d5daac9e39082858c1903002)) {
        Py_XDECREF(cache_frame_1dc55646d5daac9e39082858c1903002);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1dc55646d5daac9e39082858c1903002 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1dc55646d5daac9e39082858c1903002 = MAKE_FUNCTION_FRAME(codeobj_1dc55646d5daac9e39082858c1903002, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1dc55646d5daac9e39082858c1903002->m_type_description == NULL);
    frame_1dc55646d5daac9e39082858c1903002 = cache_frame_1dc55646d5daac9e39082858c1903002;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1dc55646d5daac9e39082858c1903002);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1dc55646d5daac9e39082858c1903002) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v);
        tmp_list_element_1 = par_v;
        tmp_args_element_name_1 = PyList_New(1);
        PyList_SET_ITEM0(tmp_args_element_name_1, 0, tmp_list_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_1dc55646d5daac9e39082858c1903002->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1dc55646d5daac9e39082858c1903002);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1dc55646d5daac9e39082858c1903002);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1dc55646d5daac9e39082858c1903002);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1dc55646d5daac9e39082858c1903002, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1dc55646d5daac9e39082858c1903002->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1dc55646d5daac9e39082858c1903002, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1dc55646d5daac9e39082858c1903002,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1dc55646d5daac9e39082858c1903002 == cache_frame_1dc55646d5daac9e39082858c1903002) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1dc55646d5daac9e39082858c1903002);
        cache_frame_1dc55646d5daac9e39082858c1903002 = NULL;
    }

    assertFrameObject(frame_1dc55646d5daac9e39082858c1903002);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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

    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    struct Nuitka_FrameObject *frame_63b2ddb22e7d0af9f38380a867ff0011;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_63b2ddb22e7d0af9f38380a867ff0011 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_63b2ddb22e7d0af9f38380a867ff0011)) {
        Py_XDECREF(cache_frame_63b2ddb22e7d0af9f38380a867ff0011);

#if _DEBUG_REFCOUNTS
        if (cache_frame_63b2ddb22e7d0af9f38380a867ff0011 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_63b2ddb22e7d0af9f38380a867ff0011 = MAKE_FUNCTION_FRAME(codeobj_63b2ddb22e7d0af9f38380a867ff0011, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_63b2ddb22e7d0af9f38380a867ff0011->m_type_description == NULL);
    frame_63b2ddb22e7d0af9f38380a867ff0011 = cache_frame_63b2ddb22e7d0af9f38380a867ff0011;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_63b2ddb22e7d0af9f38380a867ff0011);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_63b2ddb22e7d0af9f38380a867ff0011) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v);
        tmp_expression_name_2 = par_v;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[143]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_subscript_name_1 = mod_consts[23];
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 289;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_63b2ddb22e7d0af9f38380a867ff0011->m_frame.f_lineno = 289;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_63b2ddb22e7d0af9f38380a867ff0011->m_frame.f_lineno = 289;
        tmp_expression_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[1];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_2, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_63b2ddb22e7d0af9f38380a867ff0011);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_63b2ddb22e7d0af9f38380a867ff0011);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_63b2ddb22e7d0af9f38380a867ff0011);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_63b2ddb22e7d0af9f38380a867ff0011, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_63b2ddb22e7d0af9f38380a867ff0011->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_63b2ddb22e7d0af9f38380a867ff0011, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_63b2ddb22e7d0af9f38380a867ff0011,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_63b2ddb22e7d0af9f38380a867ff0011 == cache_frame_63b2ddb22e7d0af9f38380a867ff0011) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_63b2ddb22e7d0af9f38380a867ff0011);
        cache_frame_63b2ddb22e7d0af9f38380a867ff0011 = NULL;
    }

    assertFrameObject(frame_63b2ddb22e7d0af9f38380a867ff0011);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_v);
    par_v = NULL;
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

    Py_XDECREF(par_v);
    par_v = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__3_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    struct Nuitka_FrameObject *frame_f037b30486cd18c7adf951a944360a24;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f037b30486cd18c7adf951a944360a24 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f037b30486cd18c7adf951a944360a24)) {
        Py_XDECREF(cache_frame_f037b30486cd18c7adf951a944360a24);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f037b30486cd18c7adf951a944360a24 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f037b30486cd18c7adf951a944360a24 = MAKE_FUNCTION_FRAME(codeobj_f037b30486cd18c7adf951a944360a24, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f037b30486cd18c7adf951a944360a24->m_type_description == NULL);
    frame_f037b30486cd18c7adf951a944360a24 = cache_frame_f037b30486cd18c7adf951a944360a24;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f037b30486cd18c7adf951a944360a24);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f037b30486cd18c7adf951a944360a24) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v);
        tmp_args_element_name_2 = par_v;
        frame_f037b30486cd18c7adf951a944360a24->m_frame.f_lineno = 290;
        tmp_expression_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[1];
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_f037b30486cd18c7adf951a944360a24->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f037b30486cd18c7adf951a944360a24);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f037b30486cd18c7adf951a944360a24);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f037b30486cd18c7adf951a944360a24);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f037b30486cd18c7adf951a944360a24, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f037b30486cd18c7adf951a944360a24->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f037b30486cd18c7adf951a944360a24, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f037b30486cd18c7adf951a944360a24,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f037b30486cd18c7adf951a944360a24 == cache_frame_f037b30486cd18c7adf951a944360a24) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f037b30486cd18c7adf951a944360a24);
        cache_frame_f037b30486cd18c7adf951a944360a24 = NULL;
    }

    assertFrameObject(frame_f037b30486cd18c7adf951a944360a24);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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

    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__4_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    struct Nuitka_FrameObject *frame_1367a112d5a1c09835ded37258295b33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1367a112d5a1c09835ded37258295b33 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1367a112d5a1c09835ded37258295b33)) {
        Py_XDECREF(cache_frame_1367a112d5a1c09835ded37258295b33);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1367a112d5a1c09835ded37258295b33 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1367a112d5a1c09835ded37258295b33 = MAKE_FUNCTION_FRAME(codeobj_1367a112d5a1c09835ded37258295b33, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1367a112d5a1c09835ded37258295b33->m_type_description == NULL);
    frame_1367a112d5a1c09835ded37258295b33 = cache_frame_1367a112d5a1c09835ded37258295b33;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1367a112d5a1c09835ded37258295b33);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1367a112d5a1c09835ded37258295b33) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_3;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_subscript_name_1 = mod_consts[40];
        tmp_left_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v);
        tmp_args_element_name_2 = par_v;
        frame_1367a112d5a1c09835ded37258295b33->m_frame.f_lineno = 291;
        tmp_expression_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[1];
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_2, 0);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_left_name_1);
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_1367a112d5a1c09835ded37258295b33->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_3};
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1367a112d5a1c09835ded37258295b33);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1367a112d5a1c09835ded37258295b33);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1367a112d5a1c09835ded37258295b33);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1367a112d5a1c09835ded37258295b33, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1367a112d5a1c09835ded37258295b33->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1367a112d5a1c09835ded37258295b33, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1367a112d5a1c09835ded37258295b33,
        type_description_1,
        par_v,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1367a112d5a1c09835ded37258295b33 == cache_frame_1367a112d5a1c09835ded37258295b33) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1367a112d5a1c09835ded37258295b33);
        cache_frame_1367a112d5a1c09835ded37258295b33 = NULL;
    }

    assertFrameObject(frame_1367a112d5a1c09835ded37258295b33);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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

    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    par_v = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__8___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_dtype = python_pars[1];
    PyObject *var_obj = NULL;
    PyObject *var_dtypes = NULL;
    PyObject *var_newdtype = NULL;
    PyObject *var_dt = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_890db44f645cbfeccd7d4de625112eb9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_890db44f645cbfeccd7d4de625112eb9 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_890db44f645cbfeccd7d4de625112eb9)) {
        Py_XDECREF(cache_frame_890db44f645cbfeccd7d4de625112eb9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_890db44f645cbfeccd7d4de625112eb9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_890db44f645cbfeccd7d4de625112eb9 = MAKE_FUNCTION_FRAME(codeobj_890db44f645cbfeccd7d4de625112eb9, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_890db44f645cbfeccd7d4de625112eb9->m_type_description == NULL);
    frame_890db44f645cbfeccd7d4de625112eb9 = cache_frame_890db44f645cbfeccd7d4de625112eb9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_890db44f645cbfeccd7d4de625112eb9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_890db44f645cbfeccd7d4de625112eb9) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_1 = par_dtype;
        frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = 384;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[144], tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_dtype;
            par_dtype = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_890db44f645cbfeccd7d4de625112eb9, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_890db44f645cbfeccd7d4de625112eb9, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_type_arg_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[144]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }

        tmp_type_arg_1 = par_dtype;
        tmp_args_element_name_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = 387;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = par_dtype;
            par_dtype = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 383;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_890db44f645cbfeccd7d4de625112eb9->m_frame) frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_end_1:;
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
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_cls);
        tmp_expression_name_3 = par_cls;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[145]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[124]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 389;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = par_dtype;
        tmp_args_element_name_4 = Py_None;
        frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_obj);
        tmp_compexpr_left_2 = var_obj;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(var_obj);
    tmp_return_value = var_obj;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_list_element_1;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 392;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_1 = par_dtype;
        tmp_assign_source_4 = PyList_New(1);
        PyList_SET_ITEM0(tmp_assign_source_4, 0, tmp_list_element_1);
        assert(var_dtypes == NULL);
        var_dtypes = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[146]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_dtype;
        frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = 393;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_newdtype == NULL);
        var_newdtype = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_newdtype);
        tmp_compexpr_left_3 = var_newdtype;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = par_dtype;
        tmp_condition_result_3 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(var_dtypes);
        tmp_called_instance_2 = var_dtypes;
        CHECK_OBJECT(var_newdtype);
        tmp_args_element_name_6 = var_newdtype;
        frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = 395;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[147], tmp_args_element_name_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        if (var_newdtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[148]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_6 = var_newdtype;
        {
            PyObject *old = par_dtype;
            par_dtype = tmp_assign_source_6;
            Py_INCREF(par_dtype);
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_issubclass_cls_1;
        PyObject *tmp_issubclass_classes_1;
        PyObject *tmp_expression_name_5;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_issubclass_cls_1 = par_dtype;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[149]);
        if (tmp_issubclass_classes_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
        Py_DECREF(tmp_issubclass_classes_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = mod_consts[150];
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = par_dtype;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = 398;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 398;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        if (par_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_cls;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[145]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[124]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = par_dtype;
        tmp_args_element_name_8 = Py_None;
        frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = 399;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_obj;
            assert(old != NULL);
            var_obj = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_obj);
        tmp_compexpr_left_4 = var_obj;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(var_obj);
    tmp_return_value = var_obj;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_issubclass_cls_2;
        PyObject *tmp_issubclass_classes_2;
        PyObject *tmp_expression_name_8;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_issubclass_cls_2 = par_dtype;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_classes_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[152]);
        if (tmp_issubclass_classes_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
        Py_DECREF(tmp_issubclass_classes_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = par_dtype;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_newdtype;
            var_newdtype = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(var_newdtype);
        tmp_compexpr_left_5 = var_newdtype;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_5 = par_dtype;
        tmp_condition_result_7 = (tmp_compexpr_left_5 != tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_9;
        if (var_dtypes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[154]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_dtypes;
        CHECK_OBJECT(var_newdtype);
        tmp_args_element_name_9 = var_newdtype;
        frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = 405;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[147], tmp_args_element_name_9);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_9;
        if (var_newdtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[148]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 406;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_9 = var_newdtype;
        {
            PyObject *old = par_dtype;
            par_dtype = tmp_assign_source_9;
            Py_INCREF(par_dtype);
            Py_XDECREF(old);
        }

    }
    branch_no_7:;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        if (par_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 407;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = par_cls;
        tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[145]);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[124]);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 407;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = par_dtype;
        tmp_args_element_name_11 = Py_None;
        frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = 407;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_obj;
            assert(old != NULL);
            var_obj = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(var_obj);
        tmp_compexpr_left_6 = var_obj;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_8 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    CHECK_OBJECT(var_obj);
    tmp_return_value = var_obj;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_expression_name_13 = (PyObject *)&PyBaseObject_Type;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[155]);
        assert(!(tmp_called_name_7 == NULL));
        if (par_cls == NULL) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_12 = par_cls;
        frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = 410;
        tmp_expression_name_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_12);
        Py_DECREF(tmp_called_name_7);
        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[156]);
        Py_DECREF(tmp_expression_name_12);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_13 = par_dtype;
        frame_890db44f645cbfeccd7d4de625112eb9->m_frame.f_lineno = 410;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_13);
        Py_DECREF(tmp_called_name_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_obj;
            assert(old != NULL);
            var_obj = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_1;
        if (var_dtypes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[154]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = var_dtypes;
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 411;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_14 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_dt;
            var_dt = tmp_assign_source_14;
            Py_INCREF(var_dt);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_ass_subscript_1;
        if (var_obj == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subvalue_1 = var_obj;
        if (par_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_14 = par_cls;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[145]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_dt);
        tmp_ass_subscript_1 = var_dt;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 411;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_obj == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 413;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_obj;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_890db44f645cbfeccd7d4de625112eb9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_890db44f645cbfeccd7d4de625112eb9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_890db44f645cbfeccd7d4de625112eb9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_890db44f645cbfeccd7d4de625112eb9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_890db44f645cbfeccd7d4de625112eb9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_890db44f645cbfeccd7d4de625112eb9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_890db44f645cbfeccd7d4de625112eb9,
        type_description_1,
        par_cls,
        par_dtype,
        var_obj,
        var_dtypes,
        var_newdtype,
        var_dt
    );


    // Release cached frame if used for exception.
    if (frame_890db44f645cbfeccd7d4de625112eb9 == cache_frame_890db44f645cbfeccd7d4de625112eb9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_890db44f645cbfeccd7d4de625112eb9);
        cache_frame_890db44f645cbfeccd7d4de625112eb9 = NULL;
    }

    assertFrameObject(frame_890db44f645cbfeccd7d4de625112eb9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_dtypes);
    var_dtypes = NULL;
    Py_XDECREF(var_newdtype);
    var_newdtype = NULL;
    Py_XDECREF(var_dt);
    var_dt = NULL;
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

    Py_XDECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_dtypes);
    var_dtypes = NULL;
    Py_XDECREF(var_newdtype);
    var_newdtype = NULL;
    Py_XDECREF(var_dt);
    var_dt = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__9__init(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dtype = python_pars[1];
    PyObject *var_machar = NULL;
    PyObject *var_word = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_094989b39786edb60337c43de0b20f3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_094989b39786edb60337c43de0b20f3d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_094989b39786edb60337c43de0b20f3d)) {
        Py_XDECREF(cache_frame_094989b39786edb60337c43de0b20f3d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_094989b39786edb60337c43de0b20f3d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_094989b39786edb60337c43de0b20f3d = MAKE_FUNCTION_FRAME(codeobj_094989b39786edb60337c43de0b20f3d, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_094989b39786edb60337c43de0b20f3d->m_type_description == NULL);
    frame_094989b39786edb60337c43de0b20f3d = cache_frame_094989b39786edb60337c43de0b20f3d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_094989b39786edb60337c43de0b20f3d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_094989b39786edb60337c43de0b20f3d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_1 = par_dtype;
        frame_094989b39786edb60337c43de0b20f3d->m_frame.f_lineno = 416;
        tmp_assattr_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[144], tmp_args_element_name_1);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[144], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 417;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = par_dtype;
        frame_094989b39786edb60337c43de0b20f3d->m_frame.f_lineno = 417;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_machar == NULL);
        var_machar = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[159];
        tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_2 == NULL));
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
                type_description_1 = "oooo";
                exception_lineno = 419;
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
            PyObject *old = var_word;
            var_word = tmp_assign_source_4;
            Py_INCREF(var_word);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_capi_result_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_setattr_target_1 = par_self;
        CHECK_OBJECT(var_word);
        tmp_setattr_attr_1 = var_word;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_getattr_target_1 = var_machar;
        CHECK_OBJECT(var_word);
        tmp_getattr_attr_1 = var_word;
        tmp_setattr_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_setattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        Py_DECREF(tmp_setattr_value_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 419;
        type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = mod_consts[161];
        tmp_assign_source_5 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 423;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_7 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_word;
            var_word = tmp_assign_source_7;
            Py_INCREF(var_word);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_setattr_target_2;
        PyObject *tmp_setattr_attr_2;
        PyObject *tmp_setattr_value_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_capi_result_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_setattr_target_2 = par_self;
        CHECK_OBJECT(var_word);
        tmp_setattr_attr_2 = var_word;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_getattr_target_2 = var_machar;
        CHECK_OBJECT(var_word);
        tmp_getattr_attr_2 = var_word;
        tmp_expression_name_2 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, NULL);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[162]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_1 = mod_consts[1];
        tmp_setattr_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_setattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_capi_result_2 = BUILTIN_SETATTR(tmp_setattr_target_2, tmp_setattr_attr_2, tmp_setattr_value_2);
        Py_DECREF(tmp_setattr_value_2);
        if (tmp_capi_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 423;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_assattr_target_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[144]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[163]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[72];
        tmp_assattr_name_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[164], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_assattr_target_3;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = var_machar;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[19]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[162]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[1];
        tmp_assattr_name_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_5, tmp_subscript_name_2, 0);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[165], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_assattr_target_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[165]);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[166], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_assattr_target_5;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = var_machar;
        tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[16]);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[162]);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[1];
        tmp_assattr_name_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_9, tmp_subscript_name_3, 0);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[16], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_assattr_target_6;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = var_machar;
        tmp_assattr_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[55]);
        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[167], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_assattr_target_7;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_13 = var_machar;
        tmp_assattr_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[54]);
        if (tmp_assattr_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[168], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_8 = var_machar;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[160], tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_assattr_target_9;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = var_machar;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[34]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_094989b39786edb60337c43de0b20f3d->m_frame.f_lineno = 432;
        tmp_assattr_name_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[169]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[170], tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_assattr_target_10;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = var_machar;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[35]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_094989b39786edb60337c43de0b20f3d->m_frame.f_lineno = 433;
        tmp_assattr_name_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[169]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[171], tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_assattr_target_11;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_16 = var_machar;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[33]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_094989b39786edb60337c43de0b20f3d->m_frame.f_lineno = 434;
        tmp_assattr_name_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[169]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assattr_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[33], tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_assattr_target_12;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 435;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_17 = var_machar;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[32]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_094989b39786edb60337c43de0b20f3d->m_frame.f_lineno = 435;
        tmp_assattr_name_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[169]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_assattr_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 435;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[32], tmp_assattr_name_12);
        Py_DECREF(tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_assattr_target_13;
        if (var_machar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_18 = var_machar;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[36]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_094989b39786edb60337c43de0b20f3d->m_frame.f_lineno = 436;
        tmp_assattr_name_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[169]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_assattr_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[36], tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    if (par_self == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 437;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_094989b39786edb60337c43de0b20f3d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_094989b39786edb60337c43de0b20f3d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_094989b39786edb60337c43de0b20f3d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_094989b39786edb60337c43de0b20f3d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_094989b39786edb60337c43de0b20f3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_094989b39786edb60337c43de0b20f3d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_094989b39786edb60337c43de0b20f3d,
        type_description_1,
        par_self,
        par_dtype,
        var_machar,
        var_word
    );


    // Release cached frame if used for exception.
    if (frame_094989b39786edb60337c43de0b20f3d == cache_frame_094989b39786edb60337c43de0b20f3d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_094989b39786edb60337c43de0b20f3d);
        cache_frame_094989b39786edb60337c43de0b20f3d = NULL;
    }

    assertFrameObject(frame_094989b39786edb60337c43de0b20f3d);

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
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_machar);
    var_machar = NULL;
    Py_XDECREF(var_word);
    var_word = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_machar);
    var_machar = NULL;
    Py_XDECREF(var_word);
    var_word = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_numpy$core$getlimits$$$function__10___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_173842eeefe30220b3852626a074cf32;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_173842eeefe30220b3852626a074cf32 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_173842eeefe30220b3852626a074cf32)) {
        Py_XDECREF(cache_frame_173842eeefe30220b3852626a074cf32);

#if _DEBUG_REFCOUNTS
        if (cache_frame_173842eeefe30220b3852626a074cf32 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_173842eeefe30220b3852626a074cf32 = MAKE_FUNCTION_FRAME(codeobj_173842eeefe30220b3852626a074cf32, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_173842eeefe30220b3852626a074cf32->m_type_description == NULL);
    frame_173842eeefe30220b3852626a074cf32 = cache_frame_173842eeefe30220b3852626a074cf32;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_173842eeefe30220b3852626a074cf32);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_173842eeefe30220b3852626a074cf32) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_1;
        tmp_left_name_1 = mod_consts[172];
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_173842eeefe30220b3852626a074cf32);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_173842eeefe30220b3852626a074cf32);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_173842eeefe30220b3852626a074cf32);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_173842eeefe30220b3852626a074cf32, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_173842eeefe30220b3852626a074cf32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_173842eeefe30220b3852626a074cf32, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_173842eeefe30220b3852626a074cf32,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_173842eeefe30220b3852626a074cf32 == cache_frame_173842eeefe30220b3852626a074cf32) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_173842eeefe30220b3852626a074cf32);
        cache_frame_173842eeefe30220b3852626a074cf32 = NULL;
    }

    assertFrameObject(frame_173842eeefe30220b3852626a074cf32);

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


static PyObject *impl_numpy$core$getlimits$$$function__11___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_c = NULL;
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_a3d188df98bcfa05b803a5d762b0a72a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a3d188df98bcfa05b803a5d762b0a72a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a3d188df98bcfa05b803a5d762b0a72a)) {
        Py_XDECREF(cache_frame_a3d188df98bcfa05b803a5d762b0a72a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a3d188df98bcfa05b803a5d762b0a72a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a3d188df98bcfa05b803a5d762b0a72a = MAKE_FUNCTION_FRAME(codeobj_a3d188df98bcfa05b803a5d762b0a72a, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a3d188df98bcfa05b803a5d762b0a72a->m_type_description == NULL);
    frame_a3d188df98bcfa05b803a5d762b0a72a = cache_frame_a3d188df98bcfa05b803a5d762b0a72a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a3d188df98bcfa05b803a5d762b0a72a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a3d188df98bcfa05b803a5d762b0a72a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[173]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 455;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_name_3);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a3d188df98bcfa05b803a5d762b0a72a->m_frame.f_lineno = 455;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_c);
        tmp_ass_subvalue_1 = var_c;
        CHECK_OBJECT(var_d);
        tmp_ass_subscribed_1 = var_d;
        tmp_ass_subscript_1 = mod_consts[174];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = mod_consts[175];
        if (var_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[176]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 458;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = var_d;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a3d188df98bcfa05b803a5d762b0a72a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a3d188df98bcfa05b803a5d762b0a72a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a3d188df98bcfa05b803a5d762b0a72a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a3d188df98bcfa05b803a5d762b0a72a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a3d188df98bcfa05b803a5d762b0a72a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a3d188df98bcfa05b803a5d762b0a72a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a3d188df98bcfa05b803a5d762b0a72a,
        type_description_1,
        par_self,
        var_c,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_a3d188df98bcfa05b803a5d762b0a72a == cache_frame_a3d188df98bcfa05b803a5d762b0a72a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a3d188df98bcfa05b803a5d762b0a72a);
        cache_frame_a3d188df98bcfa05b803a5d762b0a72a = NULL;
    }

    assertFrameObject(frame_a3d188df98bcfa05b803a5d762b0a72a);

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
    CHECK_OBJECT(var_c);
    Py_DECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
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
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
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


static PyObject *impl_numpy$core$getlimits$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_int_type = python_pars[1];
    struct Nuitka_FrameObject *frame_e0b4bf57ef5d23a2d2d2734bd587fefa;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_e0b4bf57ef5d23a2d2d2734bd587fefa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e0b4bf57ef5d23a2d2d2734bd587fefa)) {
        Py_XDECREF(cache_frame_e0b4bf57ef5d23a2d2d2734bd587fefa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0b4bf57ef5d23a2d2d2734bd587fefa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0b4bf57ef5d23a2d2d2734bd587fefa = MAKE_FUNCTION_FRAME(codeobj_e0b4bf57ef5d23a2d2d2734bd587fefa, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e0b4bf57ef5d23a2d2d2734bd587fefa->m_type_description == NULL);
    frame_e0b4bf57ef5d23a2d2d2734bd587fefa = cache_frame_e0b4bf57ef5d23a2d2d2734bd587fefa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e0b4bf57ef5d23a2d2d2734bd587fefa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e0b4bf57ef5d23a2d2d2734bd587fefa) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_int_type);
        tmp_args_element_name_1 = par_int_type;
        frame_e0b4bf57ef5d23a2d2d2734bd587fefa->m_frame.f_lineno = 516;
        tmp_assattr_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[144], tmp_args_element_name_1);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[144], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e0b4bf57ef5d23a2d2d2734bd587fefa, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e0b4bf57ef5d23a2d2d2734bd587fefa, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_assattr_target_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[144]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        if (par_int_type == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[177]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_type_arg_1 = par_int_type;
        tmp_args_element_name_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 518;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        frame_e0b4bf57ef5d23a2d2d2734bd587fefa->m_frame.f_lineno = 518;
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[144], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 515;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e0b4bf57ef5d23a2d2d2734bd587fefa->m_frame) frame_e0b4bf57ef5d23a2d2d2734bd587fefa->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
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
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[144]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[178]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[178], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_right_name_1;
        PyObject *tmp_assattr_target_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 520;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[144]);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[163]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[72];
        tmp_assattr_name_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 520;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[164], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_assattr_target_5;
        tmp_left_name_2 = mod_consts[179];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[178]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_7;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 521;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_7 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[164]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assattr_name_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[135], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 522;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[178]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[180];
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_9;
        tmp_left_name_3 = mod_consts[181];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[178]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_2);
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e0b4bf57ef5d23a2d2d2734bd587fefa->m_frame.f_lineno = 523;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 523;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0b4bf57ef5d23a2d2d2734bd587fefa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0b4bf57ef5d23a2d2d2734bd587fefa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e0b4bf57ef5d23a2d2d2734bd587fefa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0b4bf57ef5d23a2d2d2734bd587fefa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0b4bf57ef5d23a2d2d2734bd587fefa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0b4bf57ef5d23a2d2d2734bd587fefa,
        type_description_1,
        par_self,
        par_int_type
    );


    // Release cached frame if used for exception.
    if (frame_e0b4bf57ef5d23a2d2d2734bd587fefa == cache_frame_e0b4bf57ef5d23a2d2d2734bd587fefa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e0b4bf57ef5d23a2d2d2734bd587fefa);
        cache_frame_e0b4bf57ef5d23a2d2d2734bd587fefa = NULL;
    }

    assertFrameObject(frame_e0b4bf57ef5d23a2d2d2734bd587fefa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_int_type);
    par_int_type = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_int_type);
    par_int_type = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_numpy$core$getlimits$$$function__13_min(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_val = NULL;
    struct Nuitka_FrameObject *frame_099e4100b3279a7cfc1c56c4ff14c5b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_099e4100b3279a7cfc1c56c4ff14c5b3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_099e4100b3279a7cfc1c56c4ff14c5b3)) {
        Py_XDECREF(cache_frame_099e4100b3279a7cfc1c56c4ff14c5b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_099e4100b3279a7cfc1c56c4ff14c5b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_099e4100b3279a7cfc1c56c4ff14c5b3 = MAKE_FUNCTION_FRAME(codeobj_099e4100b3279a7cfc1c56c4ff14c5b3, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_099e4100b3279a7cfc1c56c4ff14c5b3->m_type_description == NULL);
    frame_099e4100b3279a7cfc1c56c4ff14c5b3 = cache_frame_099e4100b3279a7cfc1c56c4ff14c5b3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_099e4100b3279a7cfc1c56c4ff14c5b3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_099e4100b3279a7cfc1c56c4ff14c5b3) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[178]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[182];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 528;
            type_description_1 = "oo";
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
    tmp_return_value = mod_consts[1];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_expression_name_4;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[184]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_expression_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 532;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_name_4 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[135]);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_2);

            exception_lineno = 532;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_2);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_1;
    }
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_099e4100b3279a7cfc1c56c4ff14c5b3, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_099e4100b3279a7cfc1c56c4ff14c5b3, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_right_name_2;
        tmp_left_name_1 = mod_consts[8];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 534;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_expression_name_5 = par_self;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[164]);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_right_name_2 = mod_consts[8];
        tmp_right_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_operand_name_1 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_int_arg_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(var_val);
        tmp_ass_subvalue_1 = var_val;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[184]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 535;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_expression_name_7 = par_self;
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[135]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 535;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 531;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_099e4100b3279a7cfc1c56c4ff14c5b3->m_frame) frame_099e4100b3279a7cfc1c56c4ff14c5b3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_2:;
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
    if (var_val == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[185]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 536;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_val;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_099e4100b3279a7cfc1c56c4ff14c5b3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_099e4100b3279a7cfc1c56c4ff14c5b3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_099e4100b3279a7cfc1c56c4ff14c5b3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_099e4100b3279a7cfc1c56c4ff14c5b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_099e4100b3279a7cfc1c56c4ff14c5b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_099e4100b3279a7cfc1c56c4ff14c5b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_099e4100b3279a7cfc1c56c4ff14c5b3,
        type_description_1,
        par_self,
        var_val
    );


    // Release cached frame if used for exception.
    if (frame_099e4100b3279a7cfc1c56c4ff14c5b3 == cache_frame_099e4100b3279a7cfc1c56c4ff14c5b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_099e4100b3279a7cfc1c56c4ff14c5b3);
        cache_frame_099e4100b3279a7cfc1c56c4ff14c5b3 = NULL;
    }

    assertFrameObject(frame_099e4100b3279a7cfc1c56c4ff14c5b3);

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
    Py_XDECREF(var_val);
    var_val = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_numpy$core$getlimits$$$function__14_max(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_val = NULL;
    struct Nuitka_FrameObject *frame_d9f1f03c537fe1b9008e4cf750e85b69;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d9f1f03c537fe1b9008e4cf750e85b69 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d9f1f03c537fe1b9008e4cf750e85b69)) {
        Py_XDECREF(cache_frame_d9f1f03c537fe1b9008e4cf750e85b69);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9f1f03c537fe1b9008e4cf750e85b69 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9f1f03c537fe1b9008e4cf750e85b69 = MAKE_FUNCTION_FRAME(codeobj_d9f1f03c537fe1b9008e4cf750e85b69, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d9f1f03c537fe1b9008e4cf750e85b69->m_type_description == NULL);
    frame_d9f1f03c537fe1b9008e4cf750e85b69 = cache_frame_d9f1f03c537fe1b9008e4cf750e85b69;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d9f1f03c537fe1b9008e4cf750e85b69);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d9f1f03c537fe1b9008e4cf750e85b69) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[187]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[135]);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_1);

            exception_lineno = 542;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_1;
    }
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d9f1f03c537fe1b9008e4cf750e85b69, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d9f1f03c537fe1b9008e4cf750e85b69, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 544;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_expression_name_4 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[178]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_2 = mod_consts[182];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 544;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = mod_consts[8];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 545;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_expression_name_5 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[164]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_left_name_1 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_right_name_2 = mod_consts[8];
        tmp_int_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        tmp_left_name_4 = mod_consts[8];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 547;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_expression_name_6 = par_self;
        tmp_left_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[164]);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_right_name_4 = mod_consts[8];
        tmp_right_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_5, tmp_right_name_4);
        Py_DECREF(tmp_left_name_5);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_left_name_3 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_left_name_4, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_right_name_5 = mod_consts[8];
        tmp_int_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_3, tmp_right_name_5);
        Py_DECREF(tmp_left_name_3);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_assign_source_3 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_3;
    }
    branch_end_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(var_val);
        tmp_ass_subvalue_1 = var_val;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[187]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 548;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_expression_name_8 = par_self;
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[135]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 548;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 541;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d9f1f03c537fe1b9008e4cf750e85b69->m_frame) frame_d9f1f03c537fe1b9008e4cf750e85b69->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
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
    if (var_val == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[185]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 549;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_val;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9f1f03c537fe1b9008e4cf750e85b69);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9f1f03c537fe1b9008e4cf750e85b69);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9f1f03c537fe1b9008e4cf750e85b69);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9f1f03c537fe1b9008e4cf750e85b69, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9f1f03c537fe1b9008e4cf750e85b69->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9f1f03c537fe1b9008e4cf750e85b69, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9f1f03c537fe1b9008e4cf750e85b69,
        type_description_1,
        par_self,
        var_val
    );


    // Release cached frame if used for exception.
    if (frame_d9f1f03c537fe1b9008e4cf750e85b69 == cache_frame_d9f1f03c537fe1b9008e4cf750e85b69) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d9f1f03c537fe1b9008e4cf750e85b69);
        cache_frame_d9f1f03c537fe1b9008e4cf750e85b69 = NULL;
    }

    assertFrameObject(frame_d9f1f03c537fe1b9008e4cf750e85b69);

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
    Py_XDECREF(var_val);
    var_val = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_numpy$core$getlimits$$$function__15___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_19681eec0baf715173b051580a4c0b77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_19681eec0baf715173b051580a4c0b77 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_19681eec0baf715173b051580a4c0b77)) {
        Py_XDECREF(cache_frame_19681eec0baf715173b051580a4c0b77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19681eec0baf715173b051580a4c0b77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19681eec0baf715173b051580a4c0b77 = MAKE_FUNCTION_FRAME(codeobj_19681eec0baf715173b051580a4c0b77, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_19681eec0baf715173b051580a4c0b77->m_type_description == NULL);
    frame_19681eec0baf715173b051580a4c0b77 = cache_frame_19681eec0baf715173b051580a4c0b77;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_19681eec0baf715173b051580a4c0b77);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_19681eec0baf715173b051580a4c0b77) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_1;
        tmp_left_name_1 = mod_consts[189];
        tmp_dict_key_1 = mod_consts[144];
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[144]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_name_2;
            PyObject *tmp_expression_name_3;
            tmp_res = PyDict_SetItem(tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[166];
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 560;
                type_description_1 = "oN";
                goto dict_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[166]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;
                type_description_1 = "oN";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[165];
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 560;
                type_description_1 = "oN";
                goto dict_build_exception_1;
            }

            tmp_expression_name_3 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[165]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;
                type_description_1 = "oN";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_19681eec0baf715173b051580a4c0b77);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_19681eec0baf715173b051580a4c0b77);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_19681eec0baf715173b051580a4c0b77);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_19681eec0baf715173b051580a4c0b77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19681eec0baf715173b051580a4c0b77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19681eec0baf715173b051580a4c0b77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19681eec0baf715173b051580a4c0b77,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_19681eec0baf715173b051580a4c0b77 == cache_frame_19681eec0baf715173b051580a4c0b77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_19681eec0baf715173b051580a4c0b77);
        cache_frame_19681eec0baf715173b051580a4c0b77 = NULL;
    }

    assertFrameObject(frame_19681eec0baf715173b051580a4c0b77);

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


static PyObject *impl_numpy$core$getlimits$$$function__16___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_01c95ba28e77a7dc55cfee57f76b8c48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_01c95ba28e77a7dc55cfee57f76b8c48 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_01c95ba28e77a7dc55cfee57f76b8c48)) {
        Py_XDECREF(cache_frame_01c95ba28e77a7dc55cfee57f76b8c48);

#if _DEBUG_REFCOUNTS
        if (cache_frame_01c95ba28e77a7dc55cfee57f76b8c48 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_01c95ba28e77a7dc55cfee57f76b8c48 = MAKE_FUNCTION_FRAME(codeobj_01c95ba28e77a7dc55cfee57f76b8c48, module_numpy$core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_01c95ba28e77a7dc55cfee57f76b8c48->m_type_description == NULL);
    frame_01c95ba28e77a7dc55cfee57f76b8c48 = cache_frame_01c95ba28e77a7dc55cfee57f76b8c48;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_01c95ba28e77a7dc55cfee57f76b8c48);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_01c95ba28e77a7dc55cfee57f76b8c48) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        tmp_left_name_1 = mod_consts[191];
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[173]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New(4);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_expression_name_4;
            PyObject *tmp_expression_name_5;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 564;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[166]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 564;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_4 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[165]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 2, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 564;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_5 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[144]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_01c95ba28e77a7dc55cfee57f76b8c48);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_01c95ba28e77a7dc55cfee57f76b8c48);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_01c95ba28e77a7dc55cfee57f76b8c48);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_01c95ba28e77a7dc55cfee57f76b8c48, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01c95ba28e77a7dc55cfee57f76b8c48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01c95ba28e77a7dc55cfee57f76b8c48, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_01c95ba28e77a7dc55cfee57f76b8c48,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_01c95ba28e77a7dc55cfee57f76b8c48 == cache_frame_01c95ba28e77a7dc55cfee57f76b8c48) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_01c95ba28e77a7dc55cfee57f76b8c48);
        cache_frame_01c95ba28e77a7dc55cfee57f76b8c48 = NULL;
    }

    assertFrameObject(frame_01c95ba28e77a7dc55cfee57f76b8c48);

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



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__10___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__10___str__,
        mod_consts[254],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_173842eeefe30220b3852626a074cf32,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__11___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__11___repr__,
        mod_consts[256],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_a3d188df98bcfa05b803a5d762b0a72a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__12___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__12___init__,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        mod_consts[260],
#endif
        codeobj_e0b4bf57ef5d23a2d2d2734bd587fefa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__13_min() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__13_min,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_099e4100b3279a7cfc1c56c4ff14c5b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        mod_consts[186],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__14_max() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__14_max,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_d9f1f03c537fe1b9008e4cf750e85b69,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        mod_consts[188],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__15___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__15___str__,
        mod_consts[254],
#if PYTHON_VERSION >= 0x300
        mod_consts[264],
#endif
        codeobj_19681eec0baf715173b051580a4c0b77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        mod_consts[190],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__16___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__16___repr__,
        mod_consts[256],
#if PYTHON_VERSION >= 0x300
        mod_consts[265],
#endif
        codeobj_01c95ba28e77a7dc55cfee57f76b8c48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__1__fr0() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__1__fr0,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc4b57ae9476a8c59960c34e26eecbac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__2__fr1() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__2__fr1,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ef03692cedf04a0218e45cd901baf95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__3___init__,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        mod_consts[224],
#endif
        codeobj_98a380acb4841fa4383f5c54b24c2960,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__3___init__$$$function__1_lambda,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[13],
#endif
        codeobj_568854ae4314eb3a99dcd915d6a25ab5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__$$$function__2_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__3___init__$$$function__2_lambda,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[13],
#endif
        codeobj_216379a72bd4406aa663d6b2e6301b8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__$$$function__3_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__3___init__$$$function__3_lambda,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[13],
#endif
        codeobj_6faad760f41d04a32cb297b3edf43259,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__4__register_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__4__register_type,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_df51868b648b3abe70b8758a186e978e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__5__register_known_types() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__5__register_known_types,
        mod_consts[247],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9a94b83041fbc9d05e9812e03019cb9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__6__get_machar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__6__get_machar,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f9bcaaacae0b4ad05b176e7d10d04d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        mod_consts[139],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__7__discovered_machar,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e9a7fe440695cd2ca617b99619e57b78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        mod_consts[142],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__1_lambda,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_1dc55646d5daac9e39082858c1903002,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__2_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__2_lambda,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_63b2ddb22e7d0af9f38380a867ff0011,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__3_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__3_lambda,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_f037b30486cd18c7adf951a944360a24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar$$$function__4_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__4_lambda,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_1367a112d5a1c09835ded37258295b33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__8___new__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__8___new__,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        mod_consts[252],
#endif
        codeobj_890db44f645cbfeccd7d4de625112eb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function__9__init() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function__9__init,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_094989b39786edb60337c43de0b20f3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
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

function_impl_code functable_numpy$core$getlimits[] = {
    impl_numpy$core$getlimits$$$function__3___init__$$$function__1_lambda,
    impl_numpy$core$getlimits$$$function__3___init__$$$function__2_lambda,
    impl_numpy$core$getlimits$$$function__3___init__$$$function__3_lambda,
    impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__1_lambda,
    impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__2_lambda,
    impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__3_lambda,
    impl_numpy$core$getlimits$$$function__7__discovered_machar$$$function__4_lambda,
    impl_numpy$core$getlimits$$$function__1__fr0,
    impl_numpy$core$getlimits$$$function__2__fr1,
    impl_numpy$core$getlimits$$$function__3___init__,
    impl_numpy$core$getlimits$$$function__4__register_type,
    impl_numpy$core$getlimits$$$function__5__register_known_types,
    impl_numpy$core$getlimits$$$function__6__get_machar,
    impl_numpy$core$getlimits$$$function__7__discovered_machar,
    impl_numpy$core$getlimits$$$function__8___new__,
    impl_numpy$core$getlimits$$$function__9__init,
    impl_numpy$core$getlimits$$$function__10___str__,
    impl_numpy$core$getlimits$$$function__11___repr__,
    impl_numpy$core$getlimits$$$function__12___init__,
    impl_numpy$core$getlimits$$$function__13_min,
    impl_numpy$core$getlimits$$$function__14_max,
    impl_numpy$core$getlimits$$$function__15___str__,
    impl_numpy$core$getlimits$$$function__16___repr__,
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

    function_impl_code *current = functable_numpy$core$getlimits;
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

    if (offset > sizeof(functable_numpy$core$getlimits) || offset < 0) {
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
        functable_numpy$core$getlimits[offset],
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
        module_numpy$core$getlimits,
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
PyObject *modulecode_numpy$core$getlimits(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_numpy$core$getlimits = module;

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
    PRINT_STRING("numpy.core.getlimits: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.core.getlimits: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.core.getlimits: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initnumpy$core$getlimits\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_numpy$core$getlimits = MODULE_DICT(module_numpy$core$getlimits);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$core$getlimits,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$core$getlimits,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$core$getlimits,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$getlimits,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$getlimits,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$core$getlimits);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numpy$core$getlimits);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_396bd5404bdd54d181338897ef72da5e;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_numpy$core$getlimits$$$class__1_MachArLike_32 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5c5ab89c29c7fbcd8d730002edcea2a4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5c5ab89c29c7fbcd8d730002edcea2a4_2 = NULL;
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
    PyObject *locals_numpy$core$getlimits$$$class__2_finfo_296 = NULL;
    struct Nuitka_FrameObject *frame_457dff0e2d80340c830f1ed24b840454_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_457dff0e2d80340c830f1ed24b840454_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_numpy$core$getlimits$$$class__3_iinfo_462 = NULL;
    struct Nuitka_FrameObject *frame_45eef2488e6a7c7e7b19e3bee9bb042c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_45eef2488e6a7c7e7b19e3bee9bb042c_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_396bd5404bdd54d181338897ef72da5e = MAKE_MODULE_FRAME(codeobj_396bd5404bdd54d181338897ef72da5e, module_numpy$core$getlimits);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_396bd5404bdd54d181338897ef72da5e);
    assert(Py_REFCNT(frame_396bd5404bdd54d181338897ef72da5e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[194];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[197], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[198], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(mod_consts[200]);
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[131];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[1];
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 6;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[160];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[202];
        tmp_level_name_2 = mod_consts[8];
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 8;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$core$getlimits,
                mod_consts[140],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[140]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[203];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[204];
        tmp_level_name_3 = mod_consts[8];
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 9;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$core$getlimits,
                mod_consts[205],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[205]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[206];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[207];
        tmp_level_name_4 = mod_consts[8];
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 10;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_numpy$core$getlimits,
                mod_consts[93],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[93]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[206];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[208];
        tmp_level_name_5 = mod_consts[8];
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 11;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy$core$getlimits,
                mod_consts[209],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[209]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[93];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[210];
        tmp_level_name_6 = mod_consts[8];
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 12;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_numpy$core$getlimits,
                mod_consts[37],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[37]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy$core$getlimits,
                mod_consts[117],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[117]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_12);
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[115];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[211];
        tmp_level_name_7 = mod_consts[8];
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 13;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_numpy$core$getlimits,
                mod_consts[26],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[26]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_numpy$core$getlimits,
                mod_consts[60],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[60]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_15);
    }
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[206];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[212];
        tmp_level_name_8 = mod_consts[8];
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 14;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_numpy$core$getlimits,
                mod_consts[115],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[115]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_numpy$core$getlimits$$$function__1__fr0();

        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_numpy$core$getlimits$$$function__2__fr1();

        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[213];
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
        tmp_key_name_2 = mod_consts[213];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_1:;
        tmp_bases_name_1 = mod_consts[9];
        tmp_assign_source_20 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[213];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[213];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 32;

        goto try_except_handler_3;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_1 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[214]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[214]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_3;
        }
        tmp_args_name_1 = mod_consts[215];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 32;
        tmp_assign_source_21 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_3 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_3, mod_consts[216]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[217];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[173];
        tmp_getattr_default_1 = mod_consts[218];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_3;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_4;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_name_4 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_name_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[173]);
            Py_DECREF(tmp_expression_name_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 32;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_numpy$core$getlimits$$$class__1_MachArLike_32 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[219];
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__1_MachArLike_32, mod_consts[220], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__1_MachArLike_32, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[45];
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__1_MachArLike_32, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        if (isFrameUnusable(cache_frame_5c5ab89c29c7fbcd8d730002edcea2a4_2)) {
            Py_XDECREF(cache_frame_5c5ab89c29c7fbcd8d730002edcea2a4_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5c5ab89c29c7fbcd8d730002edcea2a4_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5c5ab89c29c7fbcd8d730002edcea2a4_2 = MAKE_FUNCTION_FRAME(codeobj_5c5ab89c29c7fbcd8d730002edcea2a4, module_numpy$core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5c5ab89c29c7fbcd8d730002edcea2a4_2->m_type_description == NULL);
        frame_5c5ab89c29c7fbcd8d730002edcea2a4_2 = cache_frame_5c5ab89c29c7fbcd8d730002edcea2a4_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5c5ab89c29c7fbcd8d730002edcea2a4_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5c5ab89c29c7fbcd8d730002edcea2a4_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function__3___init__();

        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__1_MachArLike_32, mod_consts[223], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5c5ab89c29c7fbcd8d730002edcea2a4_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5c5ab89c29c7fbcd8d730002edcea2a4_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5c5ab89c29c7fbcd8d730002edcea2a4_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5c5ab89c29c7fbcd8d730002edcea2a4_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5c5ab89c29c7fbcd8d730002edcea2a4_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5c5ab89c29c7fbcd8d730002edcea2a4_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_5c5ab89c29c7fbcd8d730002edcea2a4_2 == cache_frame_5c5ab89c29c7fbcd8d730002edcea2a4_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_5c5ab89c29c7fbcd8d730002edcea2a4_2);
            cache_frame_5c5ab89c29c7fbcd8d730002edcea2a4_2 = NULL;
        }

        assertFrameObject(frame_5c5ab89c29c7fbcd8d730002edcea2a4_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[45];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_numpy$core$getlimits$$$class__1_MachArLike_32;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 32;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_23 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_numpy$core$getlimits$$$class__1_MachArLike_32);
        locals_numpy$core$getlimits$$$class__1_MachArLike_32 = NULL;
        goto try_return_handler_4;
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

        Py_DECREF(locals_numpy$core$getlimits$$$class__1_MachArLike_32);
        locals_numpy$core$getlimits$$$class__1_MachArLike_32 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 32;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_23);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[225]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[226]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_name_7;
            PyObject *tmp_expression_name_8;
            PyObject *tmp_expression_name_9;
            PyObject *tmp_expression_name_10;
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_name_7 == NULL)) {
                tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[227]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_name_8 == NULL)) {
                tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[228]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_name_9 == NULL)) {
                tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[229]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_name_10 == NULL)) {
                tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[230]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_25);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[231];
        UPDATE_STRING_DICT0(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_name_12;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[233]);
        if (tmp_dict_key_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = mod_consts[23];
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[234]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_called_instance_1;
            tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[40];
            tmp_dict_value_3 = mod_consts[235];
            tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[14];
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[232]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_2;
            }
            frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 71;
            tmp_dict_value_3 = CALL_METHOD_WITH_ARGS1(
                tmp_called_instance_1,
                mod_consts[134],
                &PyTuple_GET_ITEM(mod_consts[236], 0)
            );

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_dict_key_2);
        Py_DECREF(tmp_dict_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        tmp_assign_source_27 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_name_13;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_name_14;
            PyObject *tmp_expression_name_15;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_name_16;
            PyObject *tmp_expression_name_17;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_name_18;
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_3;
            }
            tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_name_13 == NULL)) {
                tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_3;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[226]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_3;
            }
            tmp_dict_key_4 = mod_consts[23];
            tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_name_14 == NULL)) {
                tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 73;

                goto dict_build_exception_3;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[237]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 73;

                goto dict_build_exception_3;
            }
            tmp_dict_value_2 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_called_instance_2;
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[40];
                tmp_dict_value_4 = mod_consts[238];
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[14];
                tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[232]);

                if (unlikely(tmp_called_instance_2 == NULL)) {
                    tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
                }

                if (tmp_called_instance_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;

                    goto dict_build_exception_4;
                }
                frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 75;
                tmp_dict_value_4 = CALL_METHOD_WITH_ARGS1(
                    tmp_called_instance_2,
                    mod_consts[134],
                    &PyTuple_GET_ITEM(mod_consts[239], 0)
                );

                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;

                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_dict_key_2);
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_3;
            }
            tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_name_15 == NULL)) {
                tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_3;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[90]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_3;
            }
            tmp_dict_key_5 = mod_consts[23];
            tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_name_16 == NULL)) {
                tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 77;

                goto dict_build_exception_3;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[240]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 77;

                goto dict_build_exception_3;
            }
            tmp_dict_value_2 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_called_instance_3;
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[40];
                tmp_dict_value_5 = mod_consts[241];
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[14];
                tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[232]);

                if (unlikely(tmp_called_instance_3 == NULL)) {
                    tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
                }

                if (tmp_called_instance_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;

                    goto dict_build_exception_5;
                }
                frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 79;
                tmp_dict_value_5 = CALL_METHOD_WITH_ARGS1(
                    tmp_called_instance_3,
                    mod_consts[134],
                    &PyTuple_GET_ITEM(mod_consts[242], 0)
                );

                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;

                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_dict_key_2);
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_3;
            }
            tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_name_17 == NULL)) {
                tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_name_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_3;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[243]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_3;
            }
            tmp_dict_key_6 = mod_consts[23];
            tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_name_18 == NULL)) {
                tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 81;

                goto dict_build_exception_3;
            }
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[244]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 81;

                goto dict_build_exception_3;
            }
            tmp_dict_value_2 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_called_instance_4;
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[40];
                tmp_dict_value_6 = mod_consts[245];
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[14];
                tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[232]);

                if (unlikely(tmp_called_instance_4 == NULL)) {
                    tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
                }

                if (tmp_called_instance_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;

                    goto dict_build_exception_6;
                }
                frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 83;
                tmp_dict_value_6 = CALL_METHOD_WITH_ARGS1(
                    tmp_called_instance_4,
                    mod_consts[134],
                    &PyTuple_GET_ITEM(mod_consts[246], 0)
                );

                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;

                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_dict_key_2);
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_3;
            }
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_27);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_numpy$core$getlimits$$$function__4__register_type();

        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_numpy$core$getlimits$$$function__5__register_known_types();

        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_numpy$core$getlimits$$$function__6__get_machar();

        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_numpy$core$getlimits$$$function__7__discovered_machar();

        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[213];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[213];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_2:;
        tmp_bases_name_2 = mod_consts[9];
        tmp_assign_source_35 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[213];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[213];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 296;

        goto try_except_handler_6;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_name_19;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_19 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_19, mod_consts[214]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_args_name_3;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_20 = tmp_class_creation_2__metaclass;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[214]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_6;
        }
        tmp_args_name_3 = mod_consts[248];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 296;
        tmp_assign_source_36 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_21;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_21 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_21, mod_consts[216]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_6;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[217];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[173];
        tmp_getattr_default_2 = mod_consts[218];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_6;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_22;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_name_22 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_22 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[173]);
            Py_DECREF(tmp_expression_name_22);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 296;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_37;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto try_except_handler_6;
        }
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 295;
        tmp_called_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[249]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto try_except_handler_6;
        }
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_numpy$core$getlimits$$$class__2_finfo_296 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[219];
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__2_finfo_296, mod_consts[220], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[250];
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__2_finfo_296, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[251];
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__2_finfo_296, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_8;
        }
        if (isFrameUnusable(cache_frame_457dff0e2d80340c830f1ed24b840454_3)) {
            Py_XDECREF(cache_frame_457dff0e2d80340c830f1ed24b840454_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_457dff0e2d80340c830f1ed24b840454_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_457dff0e2d80340c830f1ed24b840454_3 = MAKE_FUNCTION_FRAME(codeobj_457dff0e2d80340c830f1ed24b840454, module_numpy$core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_457dff0e2d80340c830f1ed24b840454_3->m_type_description == NULL);
        frame_457dff0e2d80340c830f1ed24b840454_3 = cache_frame_457dff0e2d80340c830f1ed24b840454_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_457dff0e2d80340c830f1ed24b840454_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_457dff0e2d80340c830f1ed24b840454_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = PyDict_New();
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__2_finfo_296, mod_consts[145], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function__8___new__();

        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__2_finfo_296, mod_consts[155], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function__9__init();

        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__2_finfo_296, mod_consts[156], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function__10___str__();

        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__2_finfo_296, mod_consts[254], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function__11___repr__();

        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__2_finfo_296, mod_consts[256], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_457dff0e2d80340c830f1ed24b840454_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_457dff0e2d80340c830f1ed24b840454_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_457dff0e2d80340c830f1ed24b840454_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_457dff0e2d80340c830f1ed24b840454_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_457dff0e2d80340c830f1ed24b840454_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_457dff0e2d80340c830f1ed24b840454_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_457dff0e2d80340c830f1ed24b840454_3 == cache_frame_457dff0e2d80340c830f1ed24b840454_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_457dff0e2d80340c830f1ed24b840454_3);
            cache_frame_457dff0e2d80340c830f1ed24b840454_3 = NULL;
        }

        assertFrameObject(frame_457dff0e2d80340c830f1ed24b840454_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_4 = mod_consts[251];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_numpy$core$getlimits$$$class__2_finfo_296;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 296;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_args_element_name_1 = outline_1_var___class__;
        Py_INCREF(tmp_args_element_name_1);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_numpy$core$getlimits$$$class__2_finfo_296);
        locals_numpy$core$getlimits$$$class__2_finfo_296 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numpy$core$getlimits$$$class__2_finfo_296);
        locals_numpy$core$getlimits$$$class__2_finfo_296 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 296;
        goto try_except_handler_6;
        outline_result_2:;
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 295;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_38);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_40;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_arg_name_7;
        PyObject *tmp_dict_arg_name_8;
        PyObject *tmp_key_name_8;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = mod_consts[213];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_7, tmp_key_name_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = mod_consts[213];
        tmp_metaclass_name_3 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_9;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_3:;
        tmp_bases_name_3 = mod_consts[9];
        tmp_assign_source_41 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_41;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_arg_name_9;
        tmp_key_name_9 = mod_consts[213];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_9, tmp_key_name_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[213];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 462;

        goto try_except_handler_9;
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_name_23;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_23 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_23, mod_consts[214]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_args_name_5;
        PyObject *tmp_kwargs_name_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_24 = tmp_class_creation_3__metaclass;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[214]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_9;
        }
        tmp_args_name_5 = mod_consts[258];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_name_5 = tmp_class_creation_3__class_decl_dict;
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 462;
        tmp_assign_source_42 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_5, tmp_kwargs_name_5);
        Py_DECREF(tmp_called_name_7);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_42;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_expression_name_25;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_name_25 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_25, mod_consts[216]);
        tmp_operand_name_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_9;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_name_3 = mod_consts[217];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[173];
        tmp_getattr_default_3 = mod_consts[218];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_9;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_26;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_3 = tmp_class_creation_3__prepared;
            tmp_expression_name_26 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_name_26 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[173]);
            Py_DECREF(tmp_expression_name_26);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 462;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_name_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 462;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_43;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto try_except_handler_9;
        }
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 461;
        tmp_called_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, mod_consts[249]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto try_except_handler_9;
        }
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_numpy$core$getlimits$$$class__3_iinfo_462 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[219];
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[220], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[259];
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[183];
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_11;
        }
        if (isFrameUnusable(cache_frame_45eef2488e6a7c7e7b19e3bee9bb042c_4)) {
            Py_XDECREF(cache_frame_45eef2488e6a7c7e7b19e3bee9bb042c_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_45eef2488e6a7c7e7b19e3bee9bb042c_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_45eef2488e6a7c7e7b19e3bee9bb042c_4 = MAKE_FUNCTION_FRAME(codeobj_45eef2488e6a7c7e7b19e3bee9bb042c, module_numpy$core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_45eef2488e6a7c7e7b19e3bee9bb042c_4->m_type_description == NULL);
        frame_45eef2488e6a7c7e7b19e3bee9bb042c_4 = cache_frame_45eef2488e6a7c7e7b19e3bee9bb042c_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_45eef2488e6a7c7e7b19e3bee9bb042c_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_45eef2488e6a7c7e7b19e3bee9bb042c_4) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = PyDict_New();
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[184], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = PyDict_New();
        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[187], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function__12___init__();

        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[223], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_4;
            tmp_res = MAPPING_HAS_ITEM(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[261]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_10 = PyObject_GetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[261]);

            if (unlikely(tmp_called_name_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[261]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 525;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_name_3 = MAKE_FUNCTION_numpy$core$getlimits$$$function__13_min();

            frame_45eef2488e6a7c7e7b19e3bee9bb042c_4->m_frame.f_lineno = 525;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_3);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_11 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_4 = MAKE_FUNCTION_numpy$core$getlimits$$$function__13_min();

            frame_45eef2488e6a7c7e7b19e3bee9bb042c_4->m_frame.f_lineno = 525;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[166], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_element_name_6;
            tmp_res = MAPPING_HAS_ITEM(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[261]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_name_12 = PyObject_GetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[261]);

            if (unlikely(tmp_called_name_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[261]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 538;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_name_5 = MAKE_FUNCTION_numpy$core$getlimits$$$function__14_max();

            frame_45eef2488e6a7c7e7b19e3bee9bb042c_4->m_frame.f_lineno = 538;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_name_13 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_6 = MAKE_FUNCTION_numpy$core$getlimits$$$function__14_max();

            frame_45eef2488e6a7c7e7b19e3bee9bb042c_4->m_frame.f_lineno = 538;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[165], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function__15___str__();

        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[254], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function__16___repr__();

        tmp_res = PyObject_SetItem(locals_numpy$core$getlimits$$$class__3_iinfo_462, mod_consts[256], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_45eef2488e6a7c7e7b19e3bee9bb042c_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_45eef2488e6a7c7e7b19e3bee9bb042c_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_45eef2488e6a7c7e7b19e3bee9bb042c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_45eef2488e6a7c7e7b19e3bee9bb042c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_45eef2488e6a7c7e7b19e3bee9bb042c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_45eef2488e6a7c7e7b19e3bee9bb042c_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_45eef2488e6a7c7e7b19e3bee9bb042c_4 == cache_frame_45eef2488e6a7c7e7b19e3bee9bb042c_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_45eef2488e6a7c7e7b19e3bee9bb042c_4);
            cache_frame_45eef2488e6a7c7e7b19e3bee9bb042c_4 = NULL;
        }

        assertFrameObject(frame_45eef2488e6a7c7e7b19e3bee9bb042c_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_14 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_6 = mod_consts[183];
            tmp_args_name_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_args_name_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_numpy$core$getlimits$$$class__3_iinfo_462;
            PyTuple_SET_ITEM0(tmp_args_name_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 462;
            tmp_assign_source_45 = CALL_FUNCTION(tmp_called_name_14, tmp_args_name_6, tmp_kwargs_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 462;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_args_element_name_2 = outline_2_var___class__;
        Py_INCREF(tmp_args_element_name_2);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_numpy$core$getlimits$$$class__3_iinfo_462);
        locals_numpy$core$getlimits$$$class__3_iinfo_462 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numpy$core$getlimits$$$class__3_iinfo_462);
        locals_numpy$core$getlimits$$$class__3_iinfo_462 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 462;
        goto try_except_handler_9;
        outline_result_3:;
        frame_396bd5404bdd54d181338897ef72da5e->m_frame.f_lineno = 461;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$getlimits, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_44);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_396bd5404bdd54d181338897ef72da5e);
#endif
    popFrameStack();

    assertFrameObject(frame_396bd5404bdd54d181338897ef72da5e);

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_396bd5404bdd54d181338897ef72da5e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_396bd5404bdd54d181338897ef72da5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_396bd5404bdd54d181338897ef72da5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_396bd5404bdd54d181338897ef72da5e, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    return module_numpy$core$getlimits;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

