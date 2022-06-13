#include "main.h"
#include <stdio.h>

/**
 * my_function - print a string
 *
 * @: string to print
 * Return: void
 */

void _puts(char *);

int my_function(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";

	_puts(str);
	return (0);
}
