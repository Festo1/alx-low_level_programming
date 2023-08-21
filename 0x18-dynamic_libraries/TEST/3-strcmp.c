#include "main.h"

/**
 * _strcmp - It compares the pointers to two strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 * Return: A negative diff of the unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
