#include "main.h"

/**
 * print_rev - It prints a string in reverse.
 * @s: A string to be printed
 * Return: Nothing on success.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}

	while (count)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
