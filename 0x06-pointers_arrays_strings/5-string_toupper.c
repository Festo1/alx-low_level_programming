#include "main.h"

/**
 * string_toupper - It changes lowercases to uppercase.
 * @str: A string to be capitalized.
 * Return: A pointer to the changed strng.
 */

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x])
	{

		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
		x++;
	}
	return (str);
}
