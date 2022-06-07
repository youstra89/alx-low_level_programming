#include<stdio.h>

/**
 * print_alphabet - entry point
 *
 * Return : Always display alphabet
 */

void _putchar(char ch)
{
	putchar(ch);
}


void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
