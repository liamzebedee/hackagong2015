#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t2322;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m17348_gshared (Getter_2_t2322 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Getter_2__ctor_m17348(__this, ___object, ___method, method) (( void (*) (Getter_2_t2322 *, Object_t *, IntPtr_t, const MethodInfo*))Getter_2__ctor_m17348_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m17349_gshared (Getter_2_t2322 * __this, Object_t * ____this, const MethodInfo* method);
#define Getter_2_Invoke_m17349(__this, ____this, method) (( Object_t * (*) (Getter_2_t2322 *, Object_t *, const MethodInfo*))Getter_2_Invoke_m17349_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m17350_gshared (Getter_2_t2322 * __this, Object_t * ____this, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Getter_2_BeginInvoke_m17350(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t2322 *, Object_t *, AsyncCallback_t9 *, Object_t *, const MethodInfo*))Getter_2_BeginInvoke_m17350_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m17351_gshared (Getter_2_t2322 * __this, Object_t * ___result, const MethodInfo* method);
#define Getter_2_EndInvoke_m17351(__this, ___result, method) (( Object_t * (*) (Getter_2_t2322 *, Object_t *, const MethodInfo*))Getter_2_EndInvoke_m17351_gshared)(__this, ___result, method)
