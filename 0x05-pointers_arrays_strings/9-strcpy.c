#include "main.h"
#include <stdio.h>

/**
 * _strcpy - print other characters
 *
 * @dest: pointer to the array argument
 * @src: number of items to print
 * Return: concatenated char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
