#include "main.h"

/**
 * _strchr - It locates a character in the sring.
 * @s: String to be searched.
 * @c: Charcter to be located.
 * Return: 0 on success
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
