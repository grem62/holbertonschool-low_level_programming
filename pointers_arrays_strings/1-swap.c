#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of two integers
 * @a: character
 * @b: character
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;

}

