#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ApplicationException
struct ApplicationException_t1616;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ApplicationException::.ctor()
extern "C" void ApplicationException__ctor_m9861 (ApplicationException_t1616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String)
extern "C" void ApplicationException__ctor_m9862 (ApplicationException_t1616 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ApplicationException__ctor_m9863 (ApplicationException_t1616 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
