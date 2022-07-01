#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Numbers
 * @n: first param
 * Return: void
 */

void print_diagonal(int n)
{
	int i, b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar (' ');
			}
			_putchar (92);
			_putchar ('\n');

		}

	}


	else
	{
		_putchar ('\n');
	}
}
