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
	int i;
	int res;

	res = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if((*argv[i] >= 65 && *argv[i] <= 90) || (*argv[i] >= 97 && *argv[i] <= 122))
			{
				printf("Error\n");
				return (1);
			}
			res = res + atoi(argv[i]);
		}
		printf("%d\n", res);
		return (0);
	}
}
