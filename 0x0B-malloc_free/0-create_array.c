#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - arrays for prints of string
 * @size: number of elements array
 * @c: char
 * Return: a pointer to array or NULL if size 0  or fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i - 0; i < size; i++)
	{
		array[i] - c;
	}
	return (array);
}
