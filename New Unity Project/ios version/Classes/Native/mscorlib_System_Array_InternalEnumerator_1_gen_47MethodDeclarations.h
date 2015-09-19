#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_47.h"
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16362_gshared (InternalEnumerator_1_t2201 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16362(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2201 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16362_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16363_gshared (InternalEnumerator_1_t2201 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16363(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2201 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16363_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16364_gshared (InternalEnumerator_1_t2201 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16364(__this, method) (( void (*) (InternalEnumerator_1_t2201 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16364_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16365_gshared (InternalEnumerator_1_t2201 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16365(__this, method) (( bool (*) (InternalEnumerator_1_t2201 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16365_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::get_Current()
extern "C" HitInfo_t593  InternalEnumerator_1_get_Current_m16366_gshared (InternalEnumerator_1_t2201 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16366(__this, method) (( HitInfo_t593  (*) (InternalEnumerator_1_t2201 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16366_gshared)(__this, method)
