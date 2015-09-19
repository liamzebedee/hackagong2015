#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m3056 (HumanBone_t522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m3057 (HumanBone_t522 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m3058 (HumanBone_t522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m3059 (HumanBone_t522 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void HumanBone_t522_marshal(const HumanBone_t522& unmarshaled, HumanBone_t522_marshaled& marshaled);
extern "C" void HumanBone_t522_marshal_back(const HumanBone_t522_marshaled& marshaled, HumanBone_t522& unmarshaled);
extern "C" void HumanBone_t522_marshal_cleanup(HumanBone_t522_marshaled& marshaled);
