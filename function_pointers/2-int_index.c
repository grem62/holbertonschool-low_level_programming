#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *int_index - fonction searche for an integer
 *@array: tableau
 *@size: taille
 *@cmp: pointeur
 *Return: return
 */


	int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
	return (-1);

	if (array == NULL || cmp == NULL)
	return (-1);

	for (; index < size; index++)

	if (cmp(array[index]) != 0)
	return (index);

	return (-1);

}
