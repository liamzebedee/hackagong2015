#pragma once
#include <stdint.h>
// CardboardHead
struct CardboardHead_t5;
// UnityEngine.Texture
struct Texture_t14;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// CardboardOnGUIMouse
struct  CardboardOnGUIMouse_t13  : public MonoBehaviour_t2
{
	// CardboardHead CardboardOnGUIMouse::head
	CardboardHead_t5 * ___head_2;
	// UnityEngine.Texture CardboardOnGUIMouse::pointerImage
	Texture_t14 * ___pointerImage_3;
	// UnityEngine.Vector2 CardboardOnGUIMouse::pointerSize
	Vector2_t15  ___pointerSize_4;
	// UnityEngine.Vector2 CardboardOnGUIMouse::pointerSpot
	Vector2_t15  ___pointerSpot_5;
	// System.Boolean CardboardOnGUIMouse::pointerVisible
	bool ___pointerVisible_6;
	// System.Int32 CardboardOnGUIMouse::pointerX
	int32_t ___pointerX_7;
	// System.Int32 CardboardOnGUIMouse::pointerY
	int32_t ___pointerY_8;
};
