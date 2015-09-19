#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t421;
struct AsyncOperation_t421_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2800 (AsyncOperation_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2801 (AsyncOperation_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2802 (AsyncOperation_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t421_marshal(const AsyncOperation_t421& unmarshaled, AsyncOperation_t421_marshaled& marshaled);
extern "C" void AsyncOperation_t421_marshal_back(const AsyncOperation_t421_marshaled& marshaled, AsyncOperation_t421& unmarshaled);
extern "C" void AsyncOperation_t421_marshal_cleanup(AsyncOperation_t421_marshaled& marshaled);
