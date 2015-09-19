#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t184;
// UnityEngine.UI.Graphic
struct Graphic_t200;
// UnityEngine.Material
struct Material_t42;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Mask
struct  Mask_t242  : public UIBehaviour_t114
{
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t184 * ___m_RectTransform_2;
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t200 * ___m_Graphic_4;
	// UnityEngine.Material UnityEngine.UI.Mask::m_MaskMaterial
	Material_t42 * ___m_MaskMaterial_5;
	// UnityEngine.Material UnityEngine.UI.Mask::m_UnmaskMaterial
	Material_t42 * ___m_UnmaskMaterial_6;
};
