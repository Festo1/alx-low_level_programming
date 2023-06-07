#include "main.h"
#include <stdio.h>

/**
 * print_number - It prints an integer.
 * @n: An integer to print
 * Return: nothing on success
 */

void print_number(int n)
{
	unsigned int f = n;

	if (n < 0)
	{
		n *= -1;
		f = n;
		_putchar('-');
	}
	f /= 10;
	if (f != 0)
		print_number(f);
	_putchar((unsigned int) n % 10 + '0');
}
