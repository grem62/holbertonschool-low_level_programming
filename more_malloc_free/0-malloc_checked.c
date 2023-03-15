#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: The number of bytes
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
