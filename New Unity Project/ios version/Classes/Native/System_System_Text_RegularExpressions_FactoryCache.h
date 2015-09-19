#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t789;
// System.Text.RegularExpressions.MRUList
struct MRUList_t991;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.FactoryCache
struct  FactoryCache_t983  : public Object_t
{
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t789 * ___factories_1;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t991 * ___mru_list_2;
};
