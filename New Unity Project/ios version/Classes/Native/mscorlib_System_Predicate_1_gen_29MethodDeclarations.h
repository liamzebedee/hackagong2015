#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2096;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15129_gshared (Predicate_1_t2096 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15129(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2096 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15129_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15130_gshared (Predicate_1_t2096 * __this, Vector4_t84  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15130(__this, ___obj, method) (( bool (*) (Predicate_1_t2096 *, Vector4_t84 , const MethodInfo*))Predicate_1_Invoke_m15130_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15131_gshared (Predicate_1_t2096 * __this, Vector4_t84  ___obj, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15131(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2096 *, Vector4_t84 , AsyncCallback_t9 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15131_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15132_gshared (Predicate_1_t2096 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15132(__this, ___result, method) (( bool (*) (Predicate_1_t2096 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15132_gshared)(__this, ___result, method)
