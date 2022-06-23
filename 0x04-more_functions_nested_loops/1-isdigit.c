#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Check if given char is upper case
 *
 * @c: Char to verify
 * Return: 1 if uppercase, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
