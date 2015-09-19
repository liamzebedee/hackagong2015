#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_74.h"
// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"

// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17238_gshared (InternalEnumerator_1_t2297 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17238(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2297 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17238_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17239_gshared (InternalEnumerator_1_t2297 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17239(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2297 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17239_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17240_gshared (InternalEnumerator_1_t2297 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17240(__this, method) (( void (*) (InternalEnumerator_1_t2297 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17240_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17241_gshared (InternalEnumerator_1_t2297 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17241(__this, method) (( bool (*) (InternalEnumerator_1_t2297 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17241_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
extern "C" TableRange_t1107  InternalEnumerator_1_get_Current_m17242_gshared (InternalEnumerator_1_t2297 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17242(__this, method) (( TableRange_t1107  (*) (InternalEnumerator_1_t2297 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17242_gshared)(__this, method)
