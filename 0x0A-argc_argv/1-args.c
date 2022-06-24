#include <stdio.h>

/**
 * main - Program arguments number
 * @argc: main program parameters number
 * @argv: main program parameters array
 * Return: void
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
