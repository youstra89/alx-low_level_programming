#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - display the alphabet 10 times
 *
 * Return : Always display alphabet
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
