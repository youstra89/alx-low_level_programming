#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Numbers
 *
 * Return: void
 */

void print_numbers()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}