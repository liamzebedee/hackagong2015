#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t2075;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14838_gshared (Predicate_1_t2075 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14838(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2075 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14838_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14839_gshared (Predicate_1_t2075 * __this, Color32_t343  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14839(__this, ___obj, method) (( bool (*) (Predicate_1_t2075 *, Color32_t343 , const MethodInfo*))Predicate_1_Invoke_m14839_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14840_gshared (Predicate_1_t2075 * __this, Color32_t343  ___obj, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14840(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2075 *, Color32_t343 , AsyncCallback_t9 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14840_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14841_gshared (Predicate_1_t2075 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14841(__this, ___result, method) (( bool (*) (Predicate_1_t2075 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14841_gshared)(__this, ___result, method)
