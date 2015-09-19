#pragma once
#include <stdint.h>
// UnityEngine.UI.FontData
struct FontData_t196;
// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t236;
// UnityEngine.Material
struct Material_t42;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t235;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.Text
struct  Text_t182  : public MaskableGraphic_t220
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t196 * ___m_FontData_26;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_27;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t236 * ___m_TextCache_28;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t236 * ___m_TextCacheForLayout_29;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_31;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t235* ___m_TempVerts_32;
};
struct Text_t182_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t42 * ___s_DefaultText_30;
};
