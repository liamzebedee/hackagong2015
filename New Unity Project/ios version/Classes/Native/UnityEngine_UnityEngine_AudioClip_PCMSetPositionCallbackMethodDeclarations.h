#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t508;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMSetPositionCallback__ctor_m2997 (PCMSetPositionCallback_t508 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" void PCMSetPositionCallback_Invoke_m2998 (PCMSetPositionCallback_t508 * __this, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t508(Il2CppObject* delegate, int32_t ___position);
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m2999 (PCMSetPositionCallback_t508 * __this, int32_t ___position, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m3000 (PCMSetPositionCallback_t508 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
