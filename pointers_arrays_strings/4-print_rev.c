#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, followed by a new line
 * @s: character
 */

	void print_rev(char *s)

{
	char *p = s;

		while (*p != '\0')
		{
			p++;
		}
		while (p >= s-1)
			{
			putchar(*p--);


			}
		putchar('\n');
}
