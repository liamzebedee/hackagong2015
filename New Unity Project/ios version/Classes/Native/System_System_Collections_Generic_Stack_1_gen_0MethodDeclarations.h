#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t1813;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1838;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m11242_gshared (Stack_1_t1813 * __this, const MethodInfo* method);
#define Stack_1__ctor_m11242(__this, method) (( void (*) (Stack_1_t1813 *, const MethodInfo*))Stack_1__ctor_m11242_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m11243_gshared (Stack_1_t1813 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m11243(__this, method) (( bool (*) (Stack_1_t1813 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m11243_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m11244_gshared (Stack_1_t1813 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m11244(__this, method) (( Object_t * (*) (Stack_1_t1813 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m11244_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m11245_gshared (Stack_1_t1813 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m11245(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t1813 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m11245_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11246_gshared (Stack_1_t1813 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11246(__this, method) (( Object_t* (*) (Stack_1_t1813 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11246_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m11247_gshared (Stack_1_t1813 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m11247(__this, method) (( Object_t * (*) (Stack_1_t1813 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m11247_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m11248_gshared (Stack_1_t1813 * __this, const MethodInfo* method);
#define Stack_1_Peek_m11248(__this, method) (( Object_t * (*) (Stack_1_t1813 *, const MethodInfo*))Stack_1_Peek_m11248_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m11249_gshared (Stack_1_t1813 * __this, const MethodInfo* method);
#define Stack_1_Pop_m11249(__this, method) (( Object_t * (*) (Stack_1_t1813 *, const MethodInfo*))Stack_1_Pop_m11249_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m11250_gshared (Stack_1_t1813 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m11250(__this, ___t, method) (( void (*) (Stack_1_t1813 *, Object_t *, const MethodInfo*))Stack_1_Push_m11250_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m11251_gshared (Stack_1_t1813 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m11251(__this, method) (( int32_t (*) (Stack_1_t1813 *, const MethodInfo*))Stack_1_get_Count_m11251_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1815  Stack_1_GetEnumerator_m11252_gshared (Stack_1_t1813 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m11252(__this, method) (( Enumerator_t1815  (*) (Stack_1_t1813 *, const MethodInfo*))Stack_1_GetEnumerator_m11252_gshared)(__this, method)
