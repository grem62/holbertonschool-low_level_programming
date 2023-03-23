#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_strings - fonction print string
 *@separator: separateur
 *@n: constante n
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int index = 0;
	char *str;

	va_start(pn, n);
	for (; index < n; index++)
	{
		str = va_arg(pn, char *);
		if (str == NULL)
		printf("(nil)");
		else
		printf("%s", str);

		if (index < n - 1 && separator != NULL)
		printf("%s", separator);
	}

	va_end(pn);

	putchar('\n');

}
