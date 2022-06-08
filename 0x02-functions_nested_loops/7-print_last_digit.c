#include<stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  print_last_digit - print input numberabsolute value
 *
 * @n: number to check sign
 *
 * Return: n last digit
 */

int print_last_digit(int n)
{
	int r;

	n = abs(n);
	r = n % 10;
	_putchar('0' + r);
	return (r);
}
