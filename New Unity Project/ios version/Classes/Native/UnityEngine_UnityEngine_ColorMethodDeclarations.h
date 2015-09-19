#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m2028 (Color_t11 * __this, float ___r, float ___g, float ___b, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m461 (Color_t11 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color::ToString()
extern "C" String_t* Color_ToString_m2646 (Color_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Color::GetHashCode()
extern "C" int32_t Color_GetHashCode_m2647 (Color_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern "C" bool Color_Equals_m2150 (Color_t11 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C" Color_t11  Color_Lerp_m2007 (Object_t * __this /* static, unused */, Color_t11  ___a, Color_t11  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" Color_t11  Color_get_red_m288 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" Color_t11  Color_get_green_m287 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" Color_t11  Color_get_white_m2121 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" Color_t11  Color_get_black_m381 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C" Color_t11  Color_get_clear_m302 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C" Color_t11  Color_op_Multiply_m2340 (Object_t * __this /* static, unused */, Color_t11  ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" Vector4_t84  Color_op_Implicit_m2648 (Object_t * __this /* static, unused */, Color_t11  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
extern "C" Color_t11  Color_op_Implicit_m2649 (Object_t * __this /* static, unused */, Vector4_t84  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
