#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table array.
 *
 * Description
 * This function calculates the index where a key/value pair should be stored
 * in the hash table's array using the djb2 hash algorithm and the modulo operation.
 *
 * @key: The key for which the index is calculated (a string).
 * @size: The size of the hash table's array.
 * Return: The index where the key/value pair should be stored in the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (size == 0)
		return (0); /* If the size is 0, return 0 as there's no array to index into. */

	idx = hash_djb2(key); /* Calculate the hash value using the djb2 algorithm. */
	return (idx % size);
}

