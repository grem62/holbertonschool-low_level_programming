#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - fonction initialise la variable de init_dog
 *@d: pointeur
 *@name: character name
 *@age: character age
 *@owner: character owner
 */

	void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d)
	{
			d->name = name;
			d->age = age;
			d->owner = owner;
	}
}
