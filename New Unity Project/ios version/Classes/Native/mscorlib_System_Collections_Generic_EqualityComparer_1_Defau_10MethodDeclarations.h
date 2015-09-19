#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
struct DefaultComparer_t2268;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::.ctor()
extern "C" void DefaultComparer__ctor_m17005_gshared (DefaultComparer_t2268 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17005(__this, method) (( void (*) (DefaultComparer_t2268 *, const MethodInfo*))DefaultComparer__ctor_m17005_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17006_gshared (DefaultComparer_t2268 * __this, bool ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17006(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2268 *, bool, const MethodInfo*))DefaultComparer_GetHashCode_m17006_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17007_gshared (DefaultComparer_t2268 * __this, bool ___x, bool ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17007(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2268 *, bool, bool, const MethodInfo*))DefaultComparer_Equals_m17007_gshared)(__this, ___x, ___y, method)
