#include "main.h"

/**
 * _memset - set memory
 * @s: A pointer to a character that will be changed
 * @b: A pointer to a character that will also be changed
 * @n: A pointer to a character that will also be changed
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}