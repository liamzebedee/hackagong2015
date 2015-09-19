#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct DictionaryEnumerator_t1416;
// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t1410;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern "C" void DictionaryEnumerator__ctor_m8654 (DictionaryEnumerator_t1416 * __this, MethodDictionary_t1410 * ___methodDictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern "C" Object_t * DictionaryEnumerator_get_Current_m8655 (DictionaryEnumerator_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern "C" bool DictionaryEnumerator_MoveNext_m8656 (DictionaryEnumerator_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern "C" DictionaryEntry_t1050  DictionaryEnumerator_get_Entry_m8657 (DictionaryEnumerator_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m8658 (DictionaryEnumerator_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m8659 (DictionaryEnumerator_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
