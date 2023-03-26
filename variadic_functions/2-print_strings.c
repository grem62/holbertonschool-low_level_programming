#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - main function that print a string
 * @separator: separation beetween two string
 * @n: contain the two string
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strg;

	char *str;
	unsigned int index = 0;

	va_start(strg, n);

	for (; index < n; index++)
	{
		str = va_arg(strg, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (index < n - 1 && separator != NULL)
				printf("%s", separator);
	}
	putchar ('\n');
}
