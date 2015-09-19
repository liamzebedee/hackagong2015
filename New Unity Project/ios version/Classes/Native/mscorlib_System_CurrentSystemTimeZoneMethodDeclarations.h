#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1677;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1714;
// System.String[]
struct StringU5BU5D_t82;
// System.Globalization.DaylightTime
struct DaylightTime_t1214;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m10600 (CurrentSystemTimeZone_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m10601 (CurrentSystemTimeZone_t1677 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10602 (CurrentSystemTimeZone_t1677 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m10603 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1714** ___data, StringU5BU5D_t82** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1214 * CurrentSystemTimeZone_GetDaylightChanges_m10604 (CurrentSystemTimeZone_t1677 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t959  CurrentSystemTimeZone_GetUtcOffset_m10605 (CurrentSystemTimeZone_t1677 * __this, DateTime_t538  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m10606 (CurrentSystemTimeZone_t1677 * __this, DaylightTime_t1214 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1214 * CurrentSystemTimeZone_GetDaylightTimeFromData_m10607 (CurrentSystemTimeZone_t1677 * __this, Int64U5BU5D_t1714* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
