#include "main.h"

/**
 * _strpbrk - It searches a string for any of a set of bytes.
 * @s: A string to be searched.
 * @accept: The set of bytes to be alocated.
 * Return: A pointer to be matched byte.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}

