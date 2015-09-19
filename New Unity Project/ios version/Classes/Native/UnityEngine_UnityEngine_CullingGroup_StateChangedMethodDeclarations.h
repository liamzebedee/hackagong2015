#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t456;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.CullingGroupEvent
#include "UnityEngine_UnityEngine_CullingGroupEvent.h"

// System.Void UnityEngine.CullingGroup/StateChanged::.ctor(System.Object,System.IntPtr)
extern "C" void StateChanged__ctor_m2608 (StateChanged_t456 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
extern "C" void StateChanged_Invoke_m2609 (StateChanged_t456 * __this, CullingGroupEvent_t455  ___sphere, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CullingGroupEvent
#include "UnityEngine_UnityEngine_CullingGroupEvent.h"
extern "C" void pinvoke_delegate_wrapper_StateChanged_t456(Il2CppObject* delegate, CullingGroupEvent_t455  ___sphere);
// System.IAsyncResult UnityEngine.CullingGroup/StateChanged::BeginInvoke(UnityEngine.CullingGroupEvent,System.AsyncCallback,System.Object)
extern "C" Object_t * StateChanged_BeginInvoke_m2610 (StateChanged_t456 * __this, CullingGroupEvent_t455  ___sphere, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CullingGroup/StateChanged::EndInvoke(System.IAsyncResult)
extern "C" void StateChanged_EndInvoke_m2611 (StateChanged_t456 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
