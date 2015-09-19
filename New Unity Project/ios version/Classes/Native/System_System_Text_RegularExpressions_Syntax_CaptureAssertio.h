#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1026;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1020;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t1027;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t1025  : public Assertion_t1024
{
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t1026 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t1020 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t1027 * ___literal_3;
};
