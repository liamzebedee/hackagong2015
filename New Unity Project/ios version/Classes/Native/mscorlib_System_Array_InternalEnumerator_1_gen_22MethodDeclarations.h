#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Color32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14753_gshared (InternalEnumerator_1_t2068 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14753(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2068 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14753_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Color32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14754_gshared (InternalEnumerator_1_t2068 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14754(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2068 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14754_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14755_gshared (InternalEnumerator_1_t2068 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14755(__this, method) (( void (*) (InternalEnumerator_1_t2068 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14755_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Color32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14756_gshared (InternalEnumerator_1_t2068 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14756(__this, method) (( bool (*) (InternalEnumerator_1_t2068 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14756_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Color32>::get_Current()
extern "C" Color32_t343  InternalEnumerator_1_get_Current_m14757_gshared (InternalEnumerator_1_t2068 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14757(__this, method) (( Color32_t343  (*) (InternalEnumerator_1_t2068 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14757_gshared)(__this, method)
