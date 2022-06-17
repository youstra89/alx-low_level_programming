#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string
 *
 * @str: string to print
 * Return: void
 */

void print_rev(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
