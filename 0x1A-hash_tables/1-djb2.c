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
	unsigned long hash = 5381; /* Initialize the hash value to 5381, a prime number. */
	int c;

	while ((c = *str++))
		/* Update the hash value using the djb2 formula. */
		hash = ((hash << 5) + hash) + c; /* The formula: hash = hash * 33 + c */

	return (hash); /* Return the computed hash value (key). */
}
