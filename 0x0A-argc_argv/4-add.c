#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program arguments number
 * @argc: main program parameters number
 * @argv: main program parameters array
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			if (!(*argv[i] >= 65 && *argv[i] <= 90) && !(*argv[i] >= 97 && *argv[i] <= 122))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
