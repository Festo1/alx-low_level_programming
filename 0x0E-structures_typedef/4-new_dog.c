#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: Pointer to the new dog, or NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int name_len, owner_len;

	/* allocates memory for the dog_t structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* allocates memory for the name and owner strings */
	name_len = strlen(name) + 1;
	new_name = malloc(name_len);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_len = strlen(owner) + 1;
	new_owner = malloc(owner_len);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	/* copy the name and owner strings to their new memory locations */
	strcpy(new_name, name);
	strcpy(new_owner, owner);

	/* fill in the fields of the new dog_t structure */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
