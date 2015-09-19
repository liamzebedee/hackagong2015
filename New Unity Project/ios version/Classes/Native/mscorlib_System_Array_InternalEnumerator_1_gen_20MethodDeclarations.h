#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13715_gshared (InternalEnumerator_1_t2002 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13715(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2002 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13715_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13716_gshared (InternalEnumerator_1_t2002 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13716(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2002 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13716_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13717_gshared (InternalEnumerator_1_t2002 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13717(__this, method) (( void (*) (InternalEnumerator_1_t2002 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13717_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13718_gshared (InternalEnumerator_1_t2002 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13718(__this, method) (( bool (*) (InternalEnumerator_1_t2002 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13718_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::get_Current()
extern "C" UILineInfo_t390  InternalEnumerator_1_get_Current_m13719_gshared (InternalEnumerator_1_t2002 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13719(__this, method) (( UILineInfo_t390  (*) (InternalEnumerator_1_t2002 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13719_gshared)(__this, method)
