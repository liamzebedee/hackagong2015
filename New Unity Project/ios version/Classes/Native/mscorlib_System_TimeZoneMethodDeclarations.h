#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZone
struct TimeZone_t1676;
// System.Globalization.DaylightTime
struct DaylightTime_t1214;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m10591 (TimeZone_t1676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m10592 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t1676 * TimeZone_get_CurrentTimeZone_m10593 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m10594 (TimeZone_t1676 * __this, DateTime_t538  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m10595 (Object_t * __this /* static, unused */, DateTime_t538  ___time, DaylightTime_t1214 * ___daylightTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t538  TimeZone_ToLocalTime_m10596 (TimeZone_t1676 * __this, DateTime_t538  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t538  TimeZone_ToUniversalTime_m10597 (TimeZone_t1676 * __this, DateTime_t538  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t959  TimeZone_GetLocalTimeDiff_m10598 (TimeZone_t1676 * __this, DateTime_t538  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t959  TimeZone_GetLocalTimeDiff_m10599 (TimeZone_t1676 * __this, DateTime_t538  ___time, TimeSpan_t959  ___utc_offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
