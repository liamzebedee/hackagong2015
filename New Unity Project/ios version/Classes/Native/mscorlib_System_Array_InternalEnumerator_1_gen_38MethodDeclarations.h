#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_38.h"
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2D.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15675_gshared (InternalEnumerator_1_t2155 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15675(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2155 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15675_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15676_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15676(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15676_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15677_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15677(__this, method) (( void (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15677_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15678_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15678(__this, method) (( bool (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15678_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.ContactPoint2D>::get_Current()
extern "C" ContactPoint2D_t502  InternalEnumerator_1_get_Current_m15679_gshared (InternalEnumerator_1_t2155 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15679(__this, method) (( ContactPoint2D_t502  (*) (InternalEnumerator_1_t2155 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15679_gshared)(__this, method)
