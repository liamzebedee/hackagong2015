#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2172;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15962_gshared (Predicate_1_t2172 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15962(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2172 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15962_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15963_gshared (Predicate_1_t2172 * __this, UILineInfo_t390  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15963(__this, ___obj, method) (( bool (*) (Predicate_1_t2172 *, UILineInfo_t390 , const MethodInfo*))Predicate_1_Invoke_m15963_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15964_gshared (Predicate_1_t2172 * __this, UILineInfo_t390  ___obj, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15964(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2172 *, UILineInfo_t390 , AsyncCallback_t9 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15964_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15965_gshared (Predicate_1_t2172 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15965(__this, ___result, method) (( bool (*) (Predicate_1_t2172 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15965_gshared)(__this, ___result, method)
