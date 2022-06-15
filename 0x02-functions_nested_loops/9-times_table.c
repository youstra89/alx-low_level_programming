#include "main.h"

/**
 * times_table - Print time tables
 *
 * Return: Always 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 9)
			{
				if (i * (j + 1) < 10)
				{
					printf("%d,  ", i * j);
				}
				else
				{
					printf("%d, ", i * j);
				}
			}
			else
			{
				printf("%d", i * j);
			}
		}
		printf("\n");
	}
}
