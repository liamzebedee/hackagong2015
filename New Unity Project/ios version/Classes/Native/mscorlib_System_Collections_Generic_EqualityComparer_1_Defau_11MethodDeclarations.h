#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2341;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m17508_gshared (DefaultComparer_t2341 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17508(__this, method) (( void (*) (DefaultComparer_t2341 *, const MethodInfo*))DefaultComparer__ctor_m17508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17509_gshared (DefaultComparer_t2341 * __this, DateTime_t538  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17509(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2341 *, DateTime_t538 , const MethodInfo*))DefaultComparer_GetHashCode_m17509_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17510_gshared (DefaultComparer_t2341 * __this, DateTime_t538  ___x, DateTime_t538  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17510(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2341 *, DateTime_t538 , DateTime_t538 , const MethodInfo*))DefaultComparer_Equals_m17510_gshared)(__this, ___x, ___y, method)
