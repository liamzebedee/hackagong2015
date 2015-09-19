#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t2064;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Predicate`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14690_gshared (Predicate_1_t2064 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14690(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2064 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14690_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14691_gshared (Predicate_1_t2064 * __this, Vector3_t3  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14691(__this, ___obj, method) (( bool (*) (Predicate_1_t2064 *, Vector3_t3 , const MethodInfo*))Predicate_1_Invoke_m14691_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14692_gshared (Predicate_1_t2064 * __this, Vector3_t3  ___obj, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14692(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2064 *, Vector3_t3 , AsyncCallback_t9 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14692_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14693_gshared (Predicate_1_t2064 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14693(__this, ___result, method) (( bool (*) (Predicate_1_t2064 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14693_gshared)(__this, ___result, method)
