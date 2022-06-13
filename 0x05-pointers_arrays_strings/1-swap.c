#include "main.h"

/**
 * swap_int - reset input number to 98
 * @a: first number pointer
 * @b: second number pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
