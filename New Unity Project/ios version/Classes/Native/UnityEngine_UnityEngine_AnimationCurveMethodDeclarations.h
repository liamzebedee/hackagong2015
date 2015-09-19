#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t517;
struct AnimationCurve_t517_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t640;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m3028 (AnimationCurve_t517 * __this, KeyframeU5BU5D_t640* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3029 (AnimationCurve_t517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3030 (AnimationCurve_t517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3031 (AnimationCurve_t517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3032 (AnimationCurve_t517 * __this, KeyframeU5BU5D_t640* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t517_marshal(const AnimationCurve_t517& unmarshaled, AnimationCurve_t517_marshaled& marshaled);
extern "C" void AnimationCurve_t517_marshal_back(const AnimationCurve_t517_marshaled& marshaled, AnimationCurve_t517& unmarshaled);
extern "C" void AnimationCurve_t517_marshal_cleanup(AnimationCurve_t517_marshaled& marshaled);
