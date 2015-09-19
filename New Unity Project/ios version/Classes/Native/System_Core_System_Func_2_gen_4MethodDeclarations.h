#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Object>
struct Func_2_t105;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m11535_gshared (Func_2_t105 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m11535(__this, ___object, ___method, method) (( void (*) (Func_2_t105 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m11535_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m11537_gshared (Func_2_t105 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m11537(__this, ___arg1, method) (( Object_t * (*) (Func_2_t105 *, Object_t *, const MethodInfo*))Func_2_Invoke_m11537_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m11539_gshared (Func_2_t105 * __this, Object_t * ___arg1, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m11539(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t105 *, Object_t *, AsyncCallback_t9 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m11539_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m11541_gshared (Func_2_t105 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m11541(__this, ___result, method) (( Object_t * (*) (Func_2_t105 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m11541_gshared)(__this, ___result, method)
