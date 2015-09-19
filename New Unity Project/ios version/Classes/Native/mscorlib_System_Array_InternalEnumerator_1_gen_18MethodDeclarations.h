#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_18.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13626_gshared (InternalEnumerator_1_t1995 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13626(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1995 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13626_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13627_gshared (InternalEnumerator_1_t1995 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13627(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1995 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13627_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13628_gshared (InternalEnumerator_1_t1995 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13628(__this, method) (( void (*) (InternalEnumerator_1_t1995 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13628_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector2>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13629_gshared (InternalEnumerator_1_t1995 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13629(__this, method) (( bool (*) (InternalEnumerator_1_t1995 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13629_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Vector2>::get_Current()
extern "C" Vector2_t15  InternalEnumerator_1_get_Current_m13630_gshared (InternalEnumerator_1_t1995 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13630(__this, method) (( Vector2_t15  (*) (InternalEnumerator_1_t1995 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13630_gshared)(__this, method)
