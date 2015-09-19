#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t2018;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2017;
// System.Object[]
struct ObjectU5BU5D_t78;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13929_gshared (InvokableCall_1_t2018 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13929(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2018 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13929_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13930_gshared (InvokableCall_1_t2018 * __this, UnityAction_1_t2017 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m13930(__this, ___action, method) (( void (*) (InvokableCall_1_t2018 *, UnityAction_1_t2017 *, const MethodInfo*))InvokableCall_1__ctor_m13930_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13931_gshared (InvokableCall_1_t2018 * __this, ObjectU5BU5D_t78* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13931(__this, ___args, method) (( void (*) (InvokableCall_1_t2018 *, ObjectU5BU5D_t78*, const MethodInfo*))InvokableCall_1_Invoke_m13931_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13932_gshared (InvokableCall_1_t2018 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13932(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2018 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13932_gshared)(__this, ___targetObj, ___method, method)
