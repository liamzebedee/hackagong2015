#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2351;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m17554_gshared (DefaultComparer_t2351 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17554(__this, method) (( void (*) (DefaultComparer_t2351 *, const MethodInfo*))DefaultComparer__ctor_m17554_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m17555_gshared (DefaultComparer_t2351 * __this, TimeSpan_t959  ___x, TimeSpan_t959  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m17555(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2351 *, TimeSpan_t959 , TimeSpan_t959 , const MethodInfo*))DefaultComparer_Compare_m17555_gshared)(__this, ___x, ___y, method)
