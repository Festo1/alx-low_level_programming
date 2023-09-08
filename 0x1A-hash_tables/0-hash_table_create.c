#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table of a given size.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the newly created hash table; NULL if an error occurs.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;  /* Declare a pointer to a hash table structure */
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL); /* If size is 0, return NULL as an empty hash table is not allowed */

	ht = malloc(sizeof(hash_table_t)); /* Allocate memory for the hash table structure */
	if (!ht)
		return (NULL);
	array = malloc(sizeof(*array) * size); /* Allocate memory for the array of hash nodes */
	if (!array)
	{
		free(ht); /* If malloc fails, free the previously allocated memory for the hash table */
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	ht->size = size;
	ht->array = array;

	return (ht); /* Return a pointer to the newly created hash table */
}
