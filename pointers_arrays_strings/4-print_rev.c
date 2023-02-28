#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, followed by a new line
 * @s: character
 */

	void print_rev(char *s)
{
	int len = 0, i;

	while (*s != '\0')

	{
		len++;
		++s;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
	s--;
	}
_putchar('\n');
}
