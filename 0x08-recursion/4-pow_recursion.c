#include "main.h"

/**
 * _pow_recursion - It returns the Value of x raised to the power of y.
 * @x: A number to be raised.
 * @y: Is a raising number.
 *
 * Return: The power of a number.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
