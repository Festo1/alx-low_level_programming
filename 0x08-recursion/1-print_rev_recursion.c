#include "main.h"

/**
 * _print_rev_recursion -  It prints a string in reverse.
 * @s: A string to be printed.
 * Return: 0 on success.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		--s;
		_putchar(*s);
	}
}
