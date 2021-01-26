#include "leap_year.h"

typedef enum
{
	FALSE = 0,
	TRUE = 1
} Bool;

// うるう年判定
int IsLeapYear(int year)
{
	// 年データyearがうるう年であるかどうか判定する
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		return TRUE;
	}

	return FALSE;
}
