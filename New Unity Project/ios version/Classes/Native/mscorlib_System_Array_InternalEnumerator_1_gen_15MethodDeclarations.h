#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12861_gshared (InternalEnumerator_1_t1936 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12861(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1936 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12861_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12862_gshared (InternalEnumerator_1_t1936 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12862(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1936 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12862_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12863_gshared (InternalEnumerator_1_t1936 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12863(__this, method) (( void (*) (InternalEnumerator_1_t1936 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12863_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector3>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12864_gshared (InternalEnumerator_1_t1936 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12864(__this, method) (( bool (*) (InternalEnumerator_1_t1936 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12864_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Vector3>::get_Current()
extern "C" Vector3_t3  InternalEnumerator_1_get_Current_m12865_gshared (InternalEnumerator_1_t1936 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12865(__this, method) (( Vector3_t3  (*) (InternalEnumerator_1_t1936 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12865_gshared)(__this, method)
