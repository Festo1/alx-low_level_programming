#include "main.h"

/**
 * puts_half - It prints second half of given string.
 * @str: The string to be print.
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0, z;

	while (*str)
	{
		count++;
		str++;
	}
	for (z = 0; z < count; z++)
		str--;
	z = (count % 2 == 0) ? count / 2 : (count + 1) / 2;

	for (; z < count; z++)
		_putchar(str[z]);
	_putchar('\n');
}
