#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1900;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1838;
// System.Object[]
struct ObjectU5BU5D_t78;
// System.Predicate`1<System.Object>
struct Predicate_1_t1780;
// System.Comparison`1<System.Object>
struct Comparison_1_t1786;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12326_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12326(__this, method) (( void (*) (IndexedSet_1_t1900 *, const MethodInfo*))IndexedSet_1__ctor_m12326_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12328_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12328(__this, method) (( Object_t * (*) (IndexedSet_1_t1900 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12328_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12330_gshared (IndexedSet_1_t1900 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12330(__this, ___item, method) (( void (*) (IndexedSet_1_t1900 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12330_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12332_gshared (IndexedSet_1_t1900 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12332(__this, ___item, method) (( bool (*) (IndexedSet_1_t1900 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12332_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12334_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12334(__this, method) (( Object_t* (*) (IndexedSet_1_t1900 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12334_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12336_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12336(__this, method) (( void (*) (IndexedSet_1_t1900 *, const MethodInfo*))IndexedSet_1_Clear_m12336_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12338_gshared (IndexedSet_1_t1900 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12338(__this, ___item, method) (( bool (*) (IndexedSet_1_t1900 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12338_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12340_gshared (IndexedSet_1_t1900 * __this, ObjectU5BU5D_t78* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12340(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1900 *, ObjectU5BU5D_t78*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12340_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12342_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12342(__this, method) (( int32_t (*) (IndexedSet_1_t1900 *, const MethodInfo*))IndexedSet_1_get_Count_m12342_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12344_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12344(__this, method) (( bool (*) (IndexedSet_1_t1900 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12344_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12346_gshared (IndexedSet_1_t1900 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12346(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1900 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12346_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12348_gshared (IndexedSet_1_t1900 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12348(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1900 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12348_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12350_gshared (IndexedSet_1_t1900 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12350(__this, ___index, method) (( void (*) (IndexedSet_1_t1900 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12350_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12352_gshared (IndexedSet_1_t1900 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12352(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1900 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12352_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12354_gshared (IndexedSet_1_t1900 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12354(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1900 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12354_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12355_gshared (IndexedSet_1_t1900 * __this, Predicate_1_t1780 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12355(__this, ___match, method) (( void (*) (IndexedSet_1_t1900 *, Predicate_1_t1780 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12355_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12356_gshared (IndexedSet_1_t1900 * __this, Comparison_1_t1786 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12356(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1900 *, Comparison_1_t1786 *, const MethodInfo*))IndexedSet_1_Sort_m12356_gshared)(__this, ___sortLayoutFunction, method)
