#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CardboardOnGUI/OnGUICallback
struct OnGUICallback_t6;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void CardboardOnGUI/OnGUICallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnGUICallback__ctor_m11 (OnGUICallback_t6 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardOnGUI/OnGUICallback::Invoke()
extern "C" void OnGUICallback_Invoke_m12 (OnGUICallback_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnGUICallback_t6(Il2CppObject* delegate);
// System.IAsyncResult CardboardOnGUI/OnGUICallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnGUICallback_BeginInvoke_m13 (OnGUICallback_t6 * __this, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardOnGUI/OnGUICallback::EndInvoke(System.IAsyncResult)
extern "C" void OnGUICallback_EndInvoke_m14 (OnGUICallback_t6 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
