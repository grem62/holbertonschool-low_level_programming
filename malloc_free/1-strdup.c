#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - fonction
 *@str: character
 *@*copy: character2
 *Return: NULL
 */

char *_strdup(char *str)
{
	char *copy;

	int index;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		copy[index] = str[index];

	copy[len] = '\0';

	return (copy);
}
