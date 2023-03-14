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
	int len = 0

	;if (str == NULL)
	{
		return (NULL);
	}
		len++;

	;copy = malloc(sizeof(char)*(len + 1));

	if (copy == NULL)
		return (NULL);

	strcpy(copy, str);

	return (copy);
	free(copy);
}
