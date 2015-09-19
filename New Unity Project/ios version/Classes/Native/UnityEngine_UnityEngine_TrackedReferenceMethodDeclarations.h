#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t518;
struct TrackedReference_t518_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m3519 (TrackedReference_t518 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m3520 (TrackedReference_t518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m3521 (Object_t * __this /* static, unused */, TrackedReference_t518 * ___x, TrackedReference_t518 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void TrackedReference_t518_marshal(const TrackedReference_t518& unmarshaled, TrackedReference_t518_marshaled& marshaled);
extern "C" void TrackedReference_t518_marshal_back(const TrackedReference_t518_marshaled& marshaled, TrackedReference_t518& unmarshaled);
extern "C" void TrackedReference_t518_marshal_cleanup(TrackedReference_t518_marshaled& marshaled);
