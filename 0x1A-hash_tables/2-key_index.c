#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table array.
 *
 * @key: The key for which the index is calculated (a string).
 * @size: The size of the hash table's array.
 * Return: The index where the key/value pair should be stored in the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	/* If the size is 0, return 0 as there's no array to index into. */
	if (size == 0)
		return (0);

	/* Calculate the hash value using the djb2 algorithm. */
	idx = hash_djb2(key);
	return (idx % size);
}

