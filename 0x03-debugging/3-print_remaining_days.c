#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Print the day of the year and the remaining days,
 * considering leap years.
 * @month: Month in number format.
 * @day: Day of the month.
 * @year: Year.
 *
 * Description: This function calculates and prints the day of the year and the
 * remaining days in the year, considering leap years. It checks if the given
 * date is valid and handles leap years correctly.
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)
	{
		if (month > 2)
		{
			day++; /*Increment day for leap years after February*/
		}

		if (day > 60)
		{
			day--; /*Adjust day for leap years after February 29*/
		}
	}

	if (day > 366 || (day == 366 && !((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("Remaining days: %d\n", 366 - day);
		}
		else
		{
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
