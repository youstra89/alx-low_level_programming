#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, f, s;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
				s = j;
			}

			else
			{
				f = j / 10;
				s = j % 10;
				_putchar (f + '0');
			}

			_putchar (s + '0');
		}
		_putchar('\n');
	}
}
