#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - print a string
 *
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
