#include "main.h"

/**
 * print_diagonal - It creates a diagonal line in the terminal.
 * @n: The length of the line
 * Return: A diagonal iine when successful
 */
void print_diagonal(int n)
{
	int count = 0, a = 0, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			b = count;
			while (a <= b)
			{
				if (a == b)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
				a++;
			}
			a = 0;
			count++;
		}
	}
}
