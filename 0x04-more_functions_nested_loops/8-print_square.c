#include "main.h"
#include <stdio.h>

/**
 * print_square - Numbers
 * @n: first param
 * Return: void
 */

void print_square(int n)
{
	int i, b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < n; b++)
			{
				_putchar ('#');
			}
			_putchar ('\n');

		}

	}

	else
	{
		_putchar ('\n');
	}
}
