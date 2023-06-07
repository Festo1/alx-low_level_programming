#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0 up to 9
 * Description: Prints the numbers except 2 and 4
 * Return: The numbers from 0 up to 9
 */

void print_most_numbers(void)
{
	int a = 0, b = 9;

	while (a <= b)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
