#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t42;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rendering.StencilOp
#include "UnityEngine_UnityEngine_Rendering_StencilOp.h"
// UnityEngine.Rendering.CompareFunction
#include "UnityEngine_UnityEngine_Rendering_CompareFunction.h"
// UnityEngine.Rendering.ColorWriteMask
#include "UnityEngine_UnityEngine_Rendering_ColorWriteMask.h"
// UnityEngine.UI.StencilMaterial/MatEntry
struct  MatEntry_t276  : public Object_t
{
	// UnityEngine.Material UnityEngine.UI.StencilMaterial/MatEntry::baseMat
	Material_t42 * ___baseMat_0;
	// UnityEngine.Material UnityEngine.UI.StencilMaterial/MatEntry::customMat
	Material_t42 * ___customMat_1;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::count
	int32_t ___count_2;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::stencilId
	int32_t ___stencilId_3;
	// UnityEngine.Rendering.StencilOp UnityEngine.UI.StencilMaterial/MatEntry::operation
	int32_t ___operation_4;
	// UnityEngine.Rendering.CompareFunction UnityEngine.UI.StencilMaterial/MatEntry::compareFunction
	int32_t ___compareFunction_5;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::readMask
	int32_t ___readMask_6;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::writeMask
	int32_t ___writeMask_7;
	// System.Boolean UnityEngine.UI.StencilMaterial/MatEntry::useAlphaClip
	bool ___useAlphaClip_8;
	// UnityEngine.Rendering.ColorWriteMask UnityEngine.UI.StencilMaterial/MatEntry::colorMask
	int32_t ___colorMask_9;
};
