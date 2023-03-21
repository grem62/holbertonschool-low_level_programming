#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - function that print name
* @name: name
* @f: pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
