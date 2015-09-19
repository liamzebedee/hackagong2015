#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t589;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t589 * GcScoreData_ToScore_m3418 (GcScoreData_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void GcScoreData_t576_marshal(const GcScoreData_t576& unmarshaled, GcScoreData_t576_marshaled& marshaled);
extern "C" void GcScoreData_t576_marshal_back(const GcScoreData_t576_marshaled& marshaled, GcScoreData_t576& unmarshaled);
extern "C" void GcScoreData_t576_marshal_cleanup(GcScoreData_t576_marshaled& marshaled);
