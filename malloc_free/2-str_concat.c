#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: The string concatenated upon
 * @s2: The string to be concatenated to s1
 *
 * Return: if concatenation faill - NULL
 * else a pointer newly-allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int index;
	int concat_index = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		ptr[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		ptr[concat_index++] = s2[index];

	return (ptr);
}
