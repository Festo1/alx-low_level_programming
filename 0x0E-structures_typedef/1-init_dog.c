#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog with name, age, and owner information
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the dog's owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

/* Make sure the pointer is not NULL */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
