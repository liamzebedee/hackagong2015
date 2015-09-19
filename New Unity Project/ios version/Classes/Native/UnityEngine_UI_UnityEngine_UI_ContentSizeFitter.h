#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t184;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.ContentSizeFitter/FitMode
#include "UnityEngine_UI_UnityEngine_UI_ContentSizeFitter_FitMode.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.UI.ContentSizeFitter
struct  ContentSizeFitter_t295  : public UIBehaviour_t114
{
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_HorizontalFit
	int32_t ___m_HorizontalFit_2;
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_VerticalFit
	int32_t ___m_VerticalFit_3;
	// UnityEngine.RectTransform UnityEngine.UI.ContentSizeFitter::m_Rect
	RectTransform_t184 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ContentSizeFitter::m_Tracker
	DrivenRectTransformTracker_t259  ___m_Tracker_5;
};
