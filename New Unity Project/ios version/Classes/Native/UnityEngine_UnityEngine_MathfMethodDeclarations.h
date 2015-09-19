#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


// System.Void UnityEngine.Mathf::.cctor()
extern "C" void Mathf__cctor_m2725 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sin(System.Single)
extern "C" float Mathf_Sin_m2726 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Cos(System.Single)
extern "C" float Mathf_Cos_m2727 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Atan(System.Single)
extern "C" float Mathf_Atan_m2728 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
extern "C" float Mathf_Sqrt_m2729 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C" float Mathf_Abs_m2730 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" float Mathf_Min_m2376 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" int32_t Mathf_Min_m541 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" float Mathf_Max_m2345 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" int32_t Mathf_Max_m540 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
extern "C" float Mathf_Pow_m2731 (Object_t * __this /* static, unused */, float ___f, float ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
extern "C" float Mathf_Log_m2381 (Object_t * __this /* static, unused */, float ___f, float ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Floor(System.Single)
extern "C" float Mathf_Floor_m2732 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Round(System.Single)
extern "C" float Mathf_Round_m2733 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" int32_t Mathf_CeilToInt_m2390 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" int32_t Mathf_FloorToInt_m2392 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" int32_t Mathf_RoundToInt_m2184 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C" float Mathf_Sign_m2318 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Clamp_m292 (Object_t * __this /* static, unused */, float ___value, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" int32_t Mathf_Clamp_m2065 (Object_t * __this /* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" float Mathf_Clamp01_m363 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Lerp_m407 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
extern "C" float Mathf_SmoothStep_m448 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" bool Mathf_Approximately_m364 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
extern "C" float Mathf_SmoothDamp_m2311 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern "C" float Mathf_Repeat_m2197 (Object_t * __this /* static, unused */, float ___t, float ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C" float Mathf_InverseLerp_m2196 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
