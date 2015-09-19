#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t1062;
// System.IO.TextReader
struct TextReader_t1170;
// System.Text.Encoding
struct Encoding_t111;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t1061  : public Object_t
{
};
struct Console_t1061_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1062 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1062 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1170 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t111 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t111 * ___outputEncoding_4;
};
