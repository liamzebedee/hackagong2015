﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13021_gshared (InternalEnumerator_1_t1955 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13021(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1955 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13021_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13022_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13022(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1955 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13022_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13023_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13023(__this, method) (( void (*) (InternalEnumerator_1_t1955 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13023_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13024_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13024(__this, method) (( bool (*) (InternalEnumerator_1_t1955 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13024_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1954  InternalEnumerator_1_get_Current_m13025_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13025(__this, method) (( KeyValuePair_2_t1954  (*) (InternalEnumerator_1_t1955 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13025_gshared)(__this, method)
