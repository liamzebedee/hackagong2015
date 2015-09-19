#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Text
struct Text_t182;
// UnityEngine.Font
struct Font_t197;

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
extern "C" void FontUpdateTracker__cctor_m1004 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_TrackText_m1005 (Object_t * __this /* static, unused */, Text_t182 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
extern "C" void FontUpdateTracker_RebuildForFont_m1006 (Object_t * __this /* static, unused */, Font_t197 * ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_UntrackText_m1007 (Object_t * __this /* static, unused */, Text_t182 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
