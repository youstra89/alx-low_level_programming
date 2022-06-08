#include<stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - print input numberabsolute value
 *
 * Return: n last digit
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
