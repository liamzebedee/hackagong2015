#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t1801;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11122_gshared (Predicate_1_t1801 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m11122(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1801 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11122_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11123_gshared (Predicate_1_t1801 * __this, RaycastResult_t88  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m11123(__this, ___obj, method) (( bool (*) (Predicate_1_t1801 *, RaycastResult_t88 , const MethodInfo*))Predicate_1_Invoke_m11123_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11124_gshared (Predicate_1_t1801 * __this, RaycastResult_t88  ___obj, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m11124(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1801 *, RaycastResult_t88 , AsyncCallback_t9 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11124_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11125_gshared (Predicate_1_t1801 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m11125(__this, ___result, method) (( bool (*) (Predicate_1_t1801 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11125_gshared)(__this, ___result, method)
