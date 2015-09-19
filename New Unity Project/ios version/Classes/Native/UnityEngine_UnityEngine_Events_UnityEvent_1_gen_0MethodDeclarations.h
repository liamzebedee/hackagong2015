#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t161;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t338;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t616;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m2006_gshared (UnityEvent_1_t161 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2006(__this, method) (( void (*) (UnityEvent_1_t161 *, const MethodInfo*))UnityEvent_1__ctor_m2006_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2009_gshared (UnityEvent_1_t161 * __this, UnityAction_1_t338 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m2009(__this, ___call, method) (( void (*) (UnityEvent_1_t161 *, UnityAction_1_t338 *, const MethodInfo*))UnityEvent_1_AddListener_m2009_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m12305_gshared (UnityEvent_1_t161 * __this, UnityAction_1_t338 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m12305(__this, ___call, method) (( void (*) (UnityEvent_1_t161 *, UnityAction_1_t338 *, const MethodInfo*))UnityEvent_1_RemoveListener_m12305_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12306_gshared (UnityEvent_1_t161 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12306(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t161 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m12306_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t616 * UnityEvent_1_GetDelegate_m12307_gshared (UnityEvent_1_t161 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12307(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t616 * (*) (UnityEvent_1_t161 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m12307_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t616 * UnityEvent_1_GetDelegate_m12308_gshared (Object_t * __this /* static, unused */, UnityAction_1_t338 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12308(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t616 * (*) (Object_t * /* static, unused */, UnityAction_1_t338 *, const MethodInfo*))UnityEvent_1_GetDelegate_m12308_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2008_gshared (UnityEvent_1_t161 * __this, Color_t11  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2008(__this, ___arg0, method) (( void (*) (UnityEvent_1_t161 *, Color_t11 , const MethodInfo*))UnityEvent_1_Invoke_m2008_gshared)(__this, ___arg0, method)
