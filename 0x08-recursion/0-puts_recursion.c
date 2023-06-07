#include "main.h"

/**
 * _puts_recursion - It prints a string.
 * @s: A string to be printed.
 * Return: 0 on success.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
