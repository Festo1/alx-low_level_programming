#include "main.h"

/**
 * print_number - It prints number characters.
 * @n: The integer to be printed.
 * Return: 0 on success.
 */

void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n <  0)
	{
		_putchar('-');
		num = -n;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
