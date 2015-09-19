#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Regex
struct Regex_t109;
// System.Text.RegularExpressions.IMachine
struct IMachine_t980;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t894;
// System.Text.RegularExpressions.Match
struct Match_t893;
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Match
struct  Match_t893  : public Group_t895
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t109 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t894 * ___groups_9;
};
struct Match_t893_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t893 * ___empty_10;
};
