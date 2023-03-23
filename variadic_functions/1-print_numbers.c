#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - main function that print numbers
 * @separator: string that separate beetwen two int
 * @n: variables stocked
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int index = 0;

	va_start(pn, n);

	for (; index < n; index++)
	{
		int num;

		num = va_arg(pn, int);

		printf("%d", num);
		if (separator != NULL && index < n - 1)
			printf("%s", separator);
	}
	va_end(pn);

	putchar ('\n');
}
