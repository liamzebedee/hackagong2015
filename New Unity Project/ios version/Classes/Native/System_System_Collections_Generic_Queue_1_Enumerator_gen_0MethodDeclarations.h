#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2251;
// System.Object
struct Object_t;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Queue`1<T>)
extern "C" void Enumerator__ctor_m16835_gshared (Enumerator_t2252 * __this, Queue_1_t2251 * ___q, const MethodInfo* method);
#define Enumerator__ctor_m16835(__this, ___q, method) (( void (*) (Enumerator_t2252 *, Queue_1_t2251 *, const MethodInfo*))Enumerator__ctor_m16835_gshared)(__this, ___q, method)
// System.Object System.Collections.Generic.Queue`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16836_gshared (Enumerator_t2252 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16836(__this, method) (( Object_t * (*) (Enumerator_t2252 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16836_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m16837_gshared (Enumerator_t2252 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16837(__this, method) (( void (*) (Enumerator_t2252 *, const MethodInfo*))Enumerator_Dispose_m16837_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16838_gshared (Enumerator_t2252 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16838(__this, method) (( bool (*) (Enumerator_t2252 *, const MethodInfo*))Enumerator_MoveNext_m16838_gshared)(__this, method)
// T System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m16839_gshared (Enumerator_t2252 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16839(__this, method) (( Object_t * (*) (Enumerator_t2252 *, const MethodInfo*))Enumerator_get_Current_m16839_gshared)(__this, method)
