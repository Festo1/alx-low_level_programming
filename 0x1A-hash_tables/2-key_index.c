#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table array.
 *
 * @key: The key for which the index is calculated (a string).
 * @size: The size of the hash table's array.
 * Return: The index where the key/value pair should be stored in the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
