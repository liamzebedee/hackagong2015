#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidOperationException
struct InvalidOperationException_t881;
// System.String
struct String_t;
// System.Exception
struct Exception_t108;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidOperationException::.ctor()
extern "C" void InvalidOperationException__ctor_m5640 (InvalidOperationException_t881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" void InvalidOperationException__ctor_m4709 (InvalidOperationException_t881 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C" void InvalidOperationException__ctor_m10296 (InvalidOperationException_t881 * __this, String_t* ___message, Exception_t108 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidOperationException__ctor_m10297 (InvalidOperationException_t881 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
