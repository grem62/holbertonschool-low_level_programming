#include "search_algos.h"

/**
 *linear_search - function search the value in linear table
 *@array: table
 *@value: value in a table
 *Return: the value or void
 *@size: size of array
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
	{
	return (-1);
	}

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
		return (index);
		}
	}
	return (-1);
}
