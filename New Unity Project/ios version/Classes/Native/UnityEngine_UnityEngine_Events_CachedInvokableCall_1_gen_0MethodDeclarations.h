#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t679;
// UnityEngine.Object
struct Object_t75;
struct Object_t75_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t78;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3669_gshared (CachedInvokableCall_1_t679 * __this, Object_t75 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3669(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t679 *, Object_t75 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m3669_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16593_gshared (CachedInvokableCall_1_t679 * __this, ObjectU5BU5D_t78* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16593(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t679 *, ObjectU5BU5D_t78*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16593_gshared)(__this, ___args, method)
