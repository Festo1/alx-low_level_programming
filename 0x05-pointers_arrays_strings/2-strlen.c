#include "main.h"
#include <stddef.h>

/**
 * _strlen - It returns the length of a string.
 * @s: The string to be found.
 * Return: Length of  @str.
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
