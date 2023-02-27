#include "main.h"

/**
 * _puts - It prints a string.
 * @str: A string to be printed
 * Return: nothing on success
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
