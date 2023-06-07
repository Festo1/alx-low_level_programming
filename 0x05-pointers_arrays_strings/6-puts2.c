#include "main.h"

/**
 * puts2 - Prints every character, and it starts with the first
 * character of a string.
 * @str: The string to be printed.
 * Return: void
 */
void puts2(char *str)
{
	int count = 0, x;

	while (*str)
	{
		count++;
		str++;
	}
	for (x = 0; x < count; x++)
		str--;
	for (x = 0; x < count; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
