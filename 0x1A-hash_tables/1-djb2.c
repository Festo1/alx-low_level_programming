#include "hash_tables.h"

/**
 * hash_djb2 - implement djb2 algorithm (one of best string hash functions)
 *
 * @str: The string to hash (treated as an array of unsigned characters).
 *
 * Return: The computed hash value (key) for the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* The formula: hash = hash * 33 + c */

	return (hash);
}
