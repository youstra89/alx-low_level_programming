#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - print other characters
 *
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i, len, half;

	len = strlen(str);
	half = len % 2 == 0 ? len / 2 : (len / 2) + 1;
	for (i = half; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
