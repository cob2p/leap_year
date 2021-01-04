#include "leap_year.h"

// うるう年判定
int is_leap_year(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		return 1;
	}

	return 0;
}
