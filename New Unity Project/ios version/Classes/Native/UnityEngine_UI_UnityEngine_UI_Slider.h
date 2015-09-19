#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t184;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t273;
// UnityEngine.UI.Image
struct Image_t183;
// UnityEngine.Transform
struct Transform_t33;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.Slider/Direction
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.UI.Slider
struct  Slider_t275  : public Selectable_t171
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t184 * ___m_FillRect_16;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t184 * ___m_HandleRect_17;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_18;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_19;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_20;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_21;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_22;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t273 * ___m_OnValueChanged_23;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t183 * ___m_FillImage_24;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t33 * ___m_FillTransform_25;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t184 * ___m_FillContainerRect_26;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t33 * ___m_HandleTransform_27;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t184 * ___m_HandleContainerRect_28;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t15  ___m_Offset_29;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t259  ___m_Tracker_30;
};
