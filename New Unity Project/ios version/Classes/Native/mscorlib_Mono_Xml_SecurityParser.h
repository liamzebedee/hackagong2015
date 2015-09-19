#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t1168;
// System.Collections.Stack
struct Stack_t630;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t1166  : public SmallXmlParser_t1167
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1168 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1168 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t630 * ___stack_15;
};
