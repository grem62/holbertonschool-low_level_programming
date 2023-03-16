#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - fonction
 *@s1: CHARACTER 1
 *@s2: character 2
 *@n: character 2
 *Return: 0
 */


	char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *ptr;
	int i = 0;
	int j = 0;
	int num = n;
	int lenght;

lenght = strlen(s1) + num + 1;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	ptr = malloc(sizeof(*ptr) * lenght);

	if (ptr == NULL)
		return (NULL);

	for (; s1[i] != '\0'; i++)

		ptr[i] = s1[i];

	for (; j < num; j++)
	ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}

