#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void Color32__ctor_m2026 (Color32_t343 * __this, uint8_t ___r, uint8_t ___g, uint8_t ___b, uint8_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color32::ToString()
extern "C" String_t* Color32_ToString_m2650 (Color32_t343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern "C" Color32_t343  Color32_op_Implicit_m2142 (Object_t * __this /* static, unused */, Color_t11  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern "C" Color_t11  Color32_op_Implicit_m2027 (Object_t * __this /* static, unused */, Color32_t343  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
