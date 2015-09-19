#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t1897;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t338;
// System.Object[]
struct ObjectU5BU5D_t78;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m12312_gshared (InvokableCall_1_t1897 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m12312(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1897 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m12312_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m12313_gshared (InvokableCall_1_t1897 * __this, UnityAction_1_t338 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m12313(__this, ___action, method) (( void (*) (InvokableCall_1_t1897 *, UnityAction_1_t338 *, const MethodInfo*))InvokableCall_1__ctor_m12313_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m12314_gshared (InvokableCall_1_t1897 * __this, ObjectU5BU5D_t78* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m12314(__this, ___args, method) (( void (*) (InvokableCall_1_t1897 *, ObjectU5BU5D_t78*, const MethodInfo*))InvokableCall_1_Invoke_m12314_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12315_gshared (InvokableCall_1_t1897 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m12315(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1897 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m12315_gshared)(__this, ___targetObj, ___method, method)
