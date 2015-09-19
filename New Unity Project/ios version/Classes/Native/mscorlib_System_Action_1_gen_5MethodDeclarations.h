#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t1965;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m13166_gshared (Action_1_t1965 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m13166(__this, ___object, ___method, method) (( void (*) (Action_1_t1965 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m13166_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m13167_gshared (Action_1_t1965 * __this, Object_t * ___obj, const MethodInfo* method);
#define Action_1_Invoke_m13167(__this, ___obj, method) (( void (*) (Action_1_t1965 *, Object_t *, const MethodInfo*))Action_1_Invoke_m13167_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m13169_gshared (Action_1_t1965 * __this, Object_t * ___obj, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m13169(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1965 *, Object_t *, AsyncCallback_t9 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m13169_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m13171_gshared (Action_1_t1965 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m13171(__this, ___result, method) (( void (*) (Action_1_t1965 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m13171_gshared)(__this, ___result, method)
