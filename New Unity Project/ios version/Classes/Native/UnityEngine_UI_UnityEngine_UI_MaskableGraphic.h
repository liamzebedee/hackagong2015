#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t42;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t245;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t243;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t222;
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_Graphic.h"
// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t220  : public Graphic_t200
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_17;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t42 * ___m_MaskMaterial_18;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t245 * ___m_ParentMask_19;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_20;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_21;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t243 * ___m_OnCullStateChanged_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_23;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_24;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t222* ___m_Corners_25;
};
