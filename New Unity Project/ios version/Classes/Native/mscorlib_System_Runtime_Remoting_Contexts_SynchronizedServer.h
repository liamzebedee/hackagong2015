#pragma once
#include <stdint.h>
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1385;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t1390;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
struct  SynchronizedServerContextSink_t1394  : public Object_t
{
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_next
	Object_t * ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_att
	SynchronizationAttribute_t1390 * ____att_1;
};
