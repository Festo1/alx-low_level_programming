#include "main.h"

/**
 * print_triangle - It prints a triangle.
 * @size: The size of the triangle
 * Return: A triangle on success
 */

void print_triangle(int size)
{
	int t = 0, s = size, count;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (count = 0; count < s; count++)
		{
			while (t < s)
			{
				if ((t + count + 1) >= s)
					_putchar('#');
				else
					_putchar(' ');
				t++;
			}
			t = 0;
			_putchar('\n');
		}
	}
}
