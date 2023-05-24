#include "search_algos.h"

/**
 *binary_search - function search binary
 *@array: table
 *@value: value in a array
 *Return: return true or false
 *@size: size of array
*/

int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1;
	size_t i;
	size_t left = 0;

	if (array == NULL)
	return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		int mid_value = array[mid];

		printf("Searching subarray: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			printf(", ");
		}
		printf("\n");

		if (mid_value == value)
		{
			return (mid);
		}
			else if (mid_value < value)
			{
			left = mid + 1;
			}
			else
			{
				right = mid - 1;
		}
	}

	return (-1);
}
