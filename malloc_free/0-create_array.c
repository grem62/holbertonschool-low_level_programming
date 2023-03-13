#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - fonction
 *@size: character
 *@c: character
 *Return: NULL
 * /

	char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	array = malloc(size * sizeof(char));
	if (array == NULL)
	return (NULL);

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
	free(array);
}
