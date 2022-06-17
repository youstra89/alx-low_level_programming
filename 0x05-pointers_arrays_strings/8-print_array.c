#include "main.h"
#include <stdio.h>

/**
 * print_array - print other characters
 *
 * @a: pointer to the array argument
 * @n: number of items to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
