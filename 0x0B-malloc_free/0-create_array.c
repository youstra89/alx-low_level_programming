#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array and fill it with some characters
 *
 * @size: size of string to create
 * @c: char to put in memory
 * Return: Value to return
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i, j;

	j = 0;
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		while (j == 0)
		{
			str = malloc(sizeof(c) * size);
			if (str == NULL)
			{
				printf("failed to allocate memory\n");
				return (NULL);
			}
			else
			{
				j = 1;
			}
		}

		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}
