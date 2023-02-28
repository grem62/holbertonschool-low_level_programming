#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, followed by a new line
 * @s: character
 */

	void print_rev(char *s)

{
	char *p = s;

		while (*p)
		{
			p++;
		}
		while (p >= s)
			{
			putchar(*p--);


			}
		putchar('\n');
}
