#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the content of a dog struct.
 * @d: Pointer to the dog struct.
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	/* checks if the pointer is not NULL */
	if (d != NULL)
	{
		/* Prints the name of the dog "(nil)" if it is NULL */
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");

		/* Prints the age of the dog */
		printf("Age: %f\n", d->age);

		/* Prints the owner of the dog "(nil)" if it is NULL */
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
