#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Shader
struct Shader_t79;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" Shader_t79 * Shader_Find_m342 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.String,UnityEngine.Color)
extern "C" void Shader_SetGlobalColor_m2757 (Object_t * __this /* static, unused */, String_t* ___propertyName, Color_t11  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.Int32,UnityEngine.Color)
extern "C" void Shader_SetGlobalColor_m2758 (Object_t * __this /* static, unused */, int32_t ___nameID, Color_t11  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::INTERNAL_CALL_SetGlobalColor(System.Int32,UnityEngine.Color&)
extern "C" void Shader_INTERNAL_CALL_SetGlobalColor_m2759 (Object_t * __this /* static, unused */, int32_t ___nameID, Color_t11 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalVector(System.String,UnityEngine.Vector4)
extern "C" void Shader_SetGlobalVector_m418 (Object_t * __this /* static, unused */, String_t* ___propertyName, Vector4_t84  ___vec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" int32_t Shader_PropertyToID_m2760 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
