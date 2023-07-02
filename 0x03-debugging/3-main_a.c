#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and print how many days are left in the year, taking
 * leap years intp account
 * Reuturn: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 3;
	day = 01;
	year = 2008;

	printf("Date: %02d/%02d/%02d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
