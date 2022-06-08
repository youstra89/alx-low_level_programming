#include<stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - print input number sign
 *
 * @n: number to check sign
 *
 * Return: 1 for positive number, 0 for 0 and -1 for negative number
 */

int print_sign(int n)
{
	int rt;

	if (n == 0)
	{
		rt = 0;
		_putchar(0 + '0');
	}
	else if (n > 0)
	{
		rt = 1;
		_putchar('+');
	}
	else
	{
		rt = -1;
		_putchar('-');
	}
	return (rt);
}
