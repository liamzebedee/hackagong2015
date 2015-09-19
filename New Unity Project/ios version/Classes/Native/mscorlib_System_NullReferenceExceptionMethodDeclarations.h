#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NullReferenceException
struct NullReferenceException_t649;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.NullReferenceException::.ctor()
extern "C" void NullReferenceException__ctor_m10410 (NullReferenceException_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NullReferenceException::.ctor(System.String)
extern "C" void NullReferenceException__ctor_m3588 (NullReferenceException_t649 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NullReferenceException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NullReferenceException__ctor_m10411 (NullReferenceException_t649 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
