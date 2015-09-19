#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m10711_gshared (Nullable_1_t1729 * __this, TimeSpan_t959  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10711(__this, ___value, method) (( void (*) (Nullable_1_t1729 *, TimeSpan_t959 , const MethodInfo*))Nullable_1__ctor_m10711_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10712_gshared (Nullable_1_t1729 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10712(__this, method) (( bool (*) (Nullable_1_t1729 *, const MethodInfo*))Nullable_1_get_HasValue_m10712_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t959  Nullable_1_get_Value_m10713_gshared (Nullable_1_t1729 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10713(__this, method) (( TimeSpan_t959  (*) (Nullable_1_t1729 *, const MethodInfo*))Nullable_1_get_Value_m10713_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m17528_gshared (Nullable_1_t1729 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17528(__this, ___other, method) (( bool (*) (Nullable_1_t1729 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m17528_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m17529_gshared (Nullable_1_t1729 * __this, Nullable_1_t1729  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17529(__this, ___other, method) (( bool (*) (Nullable_1_t1729 *, Nullable_1_t1729 , const MethodInfo*))Nullable_1_Equals_m17529_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m17530_gshared (Nullable_1_t1729 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m17530(__this, method) (( int32_t (*) (Nullable_1_t1729 *, const MethodInfo*))Nullable_1_GetHashCode_m17530_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m17531_gshared (Nullable_1_t1729 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m17531(__this, method) (( String_t* (*) (Nullable_1_t1729 *, const MethodInfo*))Nullable_1_ToString_m17531_gshared)(__this, method)
