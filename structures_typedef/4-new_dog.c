#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* new_dog - function
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: print result
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	puppy = malloc(sizeof(dog_t));

	if (puppy == NULL)
		return (NULL);

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	puppy->name = malloc(sizeof(char) * strlen(name) + 1);
	puppy->owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	puppy->name = strcpy(puppy->name, name);
	puppy->age = age;
	puppy->owner = strcpy(puppy->owner, owner);
return (puppy);
}
