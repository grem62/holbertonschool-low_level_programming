#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *
 *
 */

	void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
