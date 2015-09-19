#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t544;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t541;
// UnityEngine.GUIStyle
struct GUIStyle_t545;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_t543  : public Object_t
{
};
struct GUILayoutUtility_t543_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t544 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t544 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t541 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t18  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t545 * ___s_SpaceStyle_4;
};
