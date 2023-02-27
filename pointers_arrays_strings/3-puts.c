#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line
 * @str: character
**/

void _puts(char *str)
{

	while (*str >= '\0')
	{
		putchar(*str++);
	}
}
