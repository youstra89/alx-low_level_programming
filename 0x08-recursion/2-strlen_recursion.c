#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function to print recursively a sentence
 *
 * @s: a char to print
 * Return: char length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
