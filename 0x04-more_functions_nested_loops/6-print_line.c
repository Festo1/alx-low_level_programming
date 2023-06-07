#include "main.h"

/**
 * print_line - It  creats a straight line in the terminal.
 * @n: The length of the line
 * Return: The straight line on success
 */

void print_line(int n)
{
	int count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
}
