#include <stdio.h>
#include <stdlib.h>
#include "leap_year.h"

int main(int argc, char** argv)
{
	// コマンドライン引数から年を取得
	int year = atoi(argv[1]);

	// うるう年判定
	if (IsLeapYear(year)) {
		printf("うるう年です。\n");
	} else {
		printf("うるう年ではありません。\n");
	}

	return 0;
}
