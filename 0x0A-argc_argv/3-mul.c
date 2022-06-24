#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program arguments number
 * @argc: main program parameters number
 * @argv: main program parameters array
 * Return: int
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);
	}
}
