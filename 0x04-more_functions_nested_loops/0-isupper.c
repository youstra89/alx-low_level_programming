#include "main.h"
#include <ctype.h>

/**
 * _isupper - Check if given char is upper case
 *
 * @c: Char to verify
 * Return: 1 if uppercase, otherwise 0
 */

int _isupper(int c)
{
	int result;
	int test;

	test = isupper(c);
	if (test == 0)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
