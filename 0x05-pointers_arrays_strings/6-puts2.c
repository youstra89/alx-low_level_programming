#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print other characters
 *
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
