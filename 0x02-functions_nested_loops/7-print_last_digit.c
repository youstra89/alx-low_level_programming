#include<stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - print input numberabsolute value
 *
 * @n: number to check sign
 *
 * Return: n last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}

	else
	{
		last_digit = (n % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}

}
