#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m3060 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_advance(System.Int32)
extern "C" void CharacterInfo_set_advance_m3061 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m3062 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_glyphWidth(System.Int32)
extern "C" void CharacterInfo_set_glyphWidth_m3063 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m3064 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_glyphHeight(System.Int32)
extern "C" void CharacterInfo_set_glyphHeight_m3065 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m3066 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_bearing(System.Int32)
extern "C" void CharacterInfo_set_bearing_m3067 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m3068 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_minY(System.Int32)
extern "C" void CharacterInfo_set_minY_m3069 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m3070 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_maxY(System.Int32)
extern "C" void CharacterInfo_set_maxY_m3071 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m3072 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_minX(System.Int32)
extern "C" void CharacterInfo_set_minX_m3073 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m3074 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_maxX(System.Int32)
extern "C" void CharacterInfo_set_maxX_m3075 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomLeftUnFlipped_m3076 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeftUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomLeftUnFlipped_m3077 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomRightUnFlipped_m3078 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvBottomRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRightUnFlipped_m3079 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvTopRightUnFlipped_m3080 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvTopRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRightUnFlipped_m3081 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvTopLeftUnFlipped_m3082 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvTopLeftUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeftUnFlipped_m3083 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomLeft_m3084 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomLeft_m3085 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomRight_m3086 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvBottomRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRight_m3087 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t15  CharacterInfo_get_uvTopRight_m3088 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvTopRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRight_m3089 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t15  CharacterInfo_get_uvTopLeft_m3090 (CharacterInfo_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterInfo::set_uvTopLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeft_m3091 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CharacterInfo_t525_marshal(const CharacterInfo_t525& unmarshaled, CharacterInfo_t525_marshaled& marshaled);
extern "C" void CharacterInfo_t525_marshal_back(const CharacterInfo_t525_marshaled& marshaled, CharacterInfo_t525& unmarshaled);
extern "C" void CharacterInfo_t525_marshal_cleanup(CharacterInfo_t525_marshaled& marshaled);
