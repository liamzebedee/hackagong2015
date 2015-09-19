#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t880;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t1671  : public StringComparer_t662
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t880 * ____compareInfo_5;
};
