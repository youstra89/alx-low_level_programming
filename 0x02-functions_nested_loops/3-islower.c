#include<stdio.h>
#include<ctype.h>
#include "main.h"

/**
 * _islower - my own islower function
 *
 * @c: char to verify
 *
 * Return: 1 if the c is lowercase. 0 otherwise
 */

int _islower(int c)
{
	int r;
	int rt;

	r = islower(c);
	if (r == 0)
	{
		rt = 0;
	}
	else
	{
		rt = 1;
	}
	return (rt);
}
