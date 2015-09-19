#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.EventHandler
struct EventHandler_t1613;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t742;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandler__ctor_m10691 (EventHandler_t1613 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void EventHandler_Invoke_m10692 (EventHandler_t1613 * __this, Object_t * ___sender, EventArgs_t742 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EventHandler_t1613(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t742 * ___e);
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandler_BeginInvoke_m10693 (EventHandler_t1613 * __this, Object_t * ___sender, EventArgs_t742 * ___e, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_EndInvoke_m10694 (EventHandler_t1613 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
