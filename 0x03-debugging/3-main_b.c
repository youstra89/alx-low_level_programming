#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year, taking
 * leap years into account
 * Return: 0
 */

int main(void)
{
	int mon;
	int day;
	int year;
	int error = 0;

	mon = 4;
	day = 31;
	year = 1997;

	if (mon < 1 || mon > 12)
	{
		error = 1;
		printf("Invalid date");
	}

	if (day < 1 || day > 31)
	{
		error = 1;
		printf("Invalid date");
	}

	if ((mon % 2 == 0 && day == 31 && mon != 8) || (year % 4 == 1 && month > 28))
	{
		error = 1;
		printf("Invalid date");
	}

	if (error == 0)
	{
		printf("Date: %02d/%02d/%04d\n", month, day, year);

		day = convert_day(month, day);

		print_remaining_days(month, day, year);
	}

	return (0);
}
