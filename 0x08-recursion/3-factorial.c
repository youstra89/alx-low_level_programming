#include <stdio.h>
#include "main.h"

/**
 * factorial - function to print recursively a sentence
 *
 * @s: a given number
 * Return: result int
 */

int factorial(int s)
{
	int res;

	if (s < 0)
	{
		return (-1);
	}
	if (s == 1 || s == 0)
	{
		return (1);
	}
	res = s * factorial(s - 1);
	return (res);
}
