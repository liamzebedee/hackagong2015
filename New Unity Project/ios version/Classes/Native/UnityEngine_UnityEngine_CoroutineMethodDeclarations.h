#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t237;
struct Coroutine_t237_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2459 (Coroutine_t237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2460 (Coroutine_t237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2461 (Coroutine_t237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t237_marshal(const Coroutine_t237& unmarshaled, Coroutine_t237_marshaled& marshaled);
extern "C" void Coroutine_t237_marshal_back(const Coroutine_t237_marshaled& marshaled, Coroutine_t237& unmarshaled);
extern "C" void Coroutine_t237_marshal_cleanup(Coroutine_t237_marshaled& marshaled);
