#include<stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 *
 * @n: number to start
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (i = n; i <= 98; i++)
		{

			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
