#pragma once
#include <stdint.h>
// UnityEngine.UI.RectangularVertexClipper
struct RectangularVertexClipper_t251;
// UnityEngine.RectTransform
struct RectTransform_t184;
// System.Collections.Generic.List`1<UnityEngine.UI.IClippable>
struct List_1_t252;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t253;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.UI.RectMask2D
struct  RectMask2D_t245  : public UIBehaviour_t114
{
	// UnityEngine.UI.RectangularVertexClipper UnityEngine.UI.RectMask2D::m_VertexClipper
	RectangularVertexClipper_t251 * ___m_VertexClipper_2;
	// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::m_RectTransform
	RectTransform_t184 * ___m_RectTransform_3;
	// System.Collections.Generic.List`1<UnityEngine.UI.IClippable> UnityEngine.UI.RectMask2D::m_ClipTargets
	List_1_t252 * ___m_ClipTargets_4;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ShouldRecalculateClipRects
	bool ___m_ShouldRecalculateClipRects_5;
	// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> UnityEngine.UI.RectMask2D::m_Clippers
	List_1_t253 * ___m_Clippers_6;
	// UnityEngine.Rect UnityEngine.UI.RectMask2D::m_LastClipRectCanvasSpace
	Rect_t18  ___m_LastClipRectCanvasSpace_7;
	// System.Boolean UnityEngine.UI.RectMask2D::m_LastClipRectValid
	bool ___m_LastClipRectValid_8;
};
