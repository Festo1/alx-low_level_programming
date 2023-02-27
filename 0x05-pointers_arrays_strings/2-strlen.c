#include "main.h"
#include <stddef.h>

/**
 * _strlen - It returns the length of a string.
 * @str: The length of the string to be found.
 * Return: Length of  @str.
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
