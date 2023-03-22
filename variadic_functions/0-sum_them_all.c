#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - fonction
 *@n: parametre
 *Return: 0
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list ap;

	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);

return (sum);
}
