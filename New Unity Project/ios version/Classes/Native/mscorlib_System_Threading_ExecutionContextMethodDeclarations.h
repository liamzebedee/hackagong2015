#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ExecutionContext
struct ExecutionContext_t1402;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Security.SecurityContext
struct SecurityContext_t1553;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.ExecutionContext::.ctor()
extern "C" void ExecutionContext__ctor_m9744 (ExecutionContext_t1402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
extern "C" void ExecutionContext__ctor_m9745 (ExecutionContext_t1402 * __this, ExecutionContext_t1402 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext__ctor_m9746 (ExecutionContext_t1402 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
extern "C" ExecutionContext_t1402 * ExecutionContext_Capture_m9747 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext_GetObjectData_m9748 (ExecutionContext_t1402 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
extern "C" SecurityContext_t1553 * ExecutionContext_get_SecurityContext_m9749 (ExecutionContext_t1402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
extern "C" void ExecutionContext_set_SecurityContext_m9750 (ExecutionContext_t1402 * __this, SecurityContext_t1553 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
extern "C" bool ExecutionContext_get_FlowSuppressed_m9751 (ExecutionContext_t1402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
extern "C" bool ExecutionContext_IsFlowSuppressed_m9752 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
