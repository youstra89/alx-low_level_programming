#include <stdio.h>

/**
 * whatsmyname - Pront program name
 * 
 * Return: void
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}