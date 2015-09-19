#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13720_gshared (InternalEnumerator_1_t2003 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13720(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2003 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13720_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13721_gshared (InternalEnumerator_1_t2003 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13721(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2003 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13721_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13722_gshared (InternalEnumerator_1_t2003 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13722(__this, method) (( void (*) (InternalEnumerator_1_t2003 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13722_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13723_gshared (InternalEnumerator_1_t2003 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13723(__this, method) (( bool (*) (InternalEnumerator_1_t2003 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13723_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::get_Current()
extern "C" UICharInfo_t392  InternalEnumerator_1_get_Current_m13724_gshared (InternalEnumerator_1_t2003 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13724(__this, method) (( UICharInfo_t392  (*) (InternalEnumerator_1_t2003 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13724_gshared)(__this, method)
