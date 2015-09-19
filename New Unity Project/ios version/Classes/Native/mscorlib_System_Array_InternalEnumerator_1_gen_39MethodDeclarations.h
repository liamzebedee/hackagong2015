#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_39.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15680_gshared (InternalEnumerator_1_t2156 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15680(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2156 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15680_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15681_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15681(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2156 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15681_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15682_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15682(__this, method) (( void (*) (InternalEnumerator_1_t2156 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15682_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15683_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15683(__this, method) (( bool (*) (InternalEnumerator_1_t2156 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15683_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
extern "C" Keyframe_t516  InternalEnumerator_1_get_Current_m15684_gshared (InternalEnumerator_1_t2156 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15684(__this, method) (( Keyframe_t516  (*) (InternalEnumerator_1_t2156 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15684_gshared)(__this, method)
