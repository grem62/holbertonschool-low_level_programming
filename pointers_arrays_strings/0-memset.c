#include "main.h"

/**
 * _memset - fonction fill memory
 * @s: character
 * @b: character1
 * @n: character2
 * Return: return the memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
