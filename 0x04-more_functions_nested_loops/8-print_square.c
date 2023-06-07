#include "main.h"

/**
 * print_square - It prints a square.
 * @size: The size of the square
 * Return: The square size on success
 */

void print_square(int size)
{
	int count = 0, s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (s = 0; s < size; s++)
		{
			while (count < size)
			{
				_putchar('#');
				count++;
			}
			count = 0;
			_putchar('\n');
		}
	}
}
