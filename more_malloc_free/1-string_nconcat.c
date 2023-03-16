#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num = n, length, index = 0, index2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length = strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * length);

	if (ptr == NULL)
		return (NULL);

	for (; s1[index] != '\0'; index++)
		ptr[index] = s1[index];

	for (; index2 < num; index2++)
		ptr[index + index2] = s2[index2];

	ptr[index + index2] = '\0';

return (ptr);
}
