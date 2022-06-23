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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
