#include "main.h"

/**
 * number - I thelps the square root of natural square root numbers.
 * @n: Natural number starting from 1.
 * @root: The square root number to be found.
 *
 * Return: The square root of an answer.
 * If root is not natural square root returns -1,
 * If root less than 0 returns -1.
 */

int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}

/**
 * _sqrt_recursion - It returns the natural square root of a number.
 * @n: Natural of the square root to be found.
 *
 * Return: The natural square root n.
 * If n doesn't have a natural square root, let the function return -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
