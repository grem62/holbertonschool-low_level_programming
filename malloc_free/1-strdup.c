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

	if (str == NULL)
	{
		return (NULL);
	}
	copy = malloc(sizeof(char));

	if (copy == NULL)
		return (NULL);

	strcpy(copy, str);

	return (copy);
	free(copy);
}
