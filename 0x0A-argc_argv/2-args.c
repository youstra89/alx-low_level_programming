#include <stdio.h>

/**
 * main - Program arguments number
 * @argc: main program parameters number
 * @argv: main program parameters array
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
