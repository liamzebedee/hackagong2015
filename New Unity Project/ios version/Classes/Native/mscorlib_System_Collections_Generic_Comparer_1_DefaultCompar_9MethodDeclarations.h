#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2339;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m17499_gshared (DefaultComparer_t2339 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17499(__this, method) (( void (*) (DefaultComparer_t2339 *, const MethodInfo*))DefaultComparer__ctor_m17499_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m17500_gshared (DefaultComparer_t2339 * __this, DateTime_t538  ___x, DateTime_t538  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m17500(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2339 *, DateTime_t538 , DateTime_t538 , const MethodInfo*))DefaultComparer_Compare_m17500_gshared)(__this, ___x, ___y, method)
