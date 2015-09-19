#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t587;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t587 * GcAchievementData_ToAchievement_m3417 (GcAchievementData_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void GcAchievementData_t575_marshal(const GcAchievementData_t575& unmarshaled, GcAchievementData_t575_marshaled& marshaled);
extern "C" void GcAchievementData_t575_marshal_back(const GcAchievementData_t575_marshaled& marshaled, GcAchievementData_t575& unmarshaled);
extern "C" void GcAchievementData_t575_marshal_cleanup(GcAchievementData_t575_marshaled& marshaled);
