#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t2229;
// UnityEngine.Object
struct Object_t75;
struct Object_t75_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t78;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m16590_gshared (CachedInvokableCall_1_t2229 * __this, Object_t75 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m16590(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2229 *, Object_t75 *, MethodInfo_t *, Object_t *, const MethodInfo*))CachedInvokableCall_1__ctor_m16590_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16591_gshared (CachedInvokableCall_1_t2229 * __this, ObjectU5BU5D_t78* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16591(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2229 *, ObjectU5BU5D_t78*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16591_gshared)(__this, ___args, method)
