#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return : Always display alphabet
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
