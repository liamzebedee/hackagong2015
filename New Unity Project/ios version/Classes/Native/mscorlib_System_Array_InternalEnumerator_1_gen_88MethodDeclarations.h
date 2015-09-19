#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_88.h"
// System.Reflection.Emit.ILGenerator/LabelFixup
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17313_gshared (InternalEnumerator_1_t2315 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17313(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2315 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17313_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17314_gshared (InternalEnumerator_1_t2315 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17314(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2315 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17314_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17315_gshared (InternalEnumerator_1_t2315 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17315(__this, method) (( void (*) (InternalEnumerator_1_t2315 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17315_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17316_gshared (InternalEnumerator_1_t2315 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17316(__this, method) (( bool (*) (InternalEnumerator_1_t2315 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17316_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Current()
extern "C" LabelFixup_t1270  InternalEnumerator_1_get_Current_m17317_gshared (InternalEnumerator_1_t2315 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17317(__this, method) (( LabelFixup_t1270  (*) (InternalEnumerator_1_t2315 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17317_gshared)(__this, method)
