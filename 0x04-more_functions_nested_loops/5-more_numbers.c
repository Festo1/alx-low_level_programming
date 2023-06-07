#include "main.h"

/**
 * more_numbers - It prints 10 times the numbers from 0 up to 14.
 * Return: The numbers from 0 up to 14
 */

void more_numbers(void)
{
	int a = 0, b = 14, c;

	for (c = 1; c <= 10; c++)
	{
		while (a <= b)
		{
			_putchar(a > 9 ? (a / 10) + '0' : a + '0');

			if (a > 9)
				_putchar((a % 10) + '0');
			a++;
		}
		a = 0;
		_putchar('\n');
	}
}
