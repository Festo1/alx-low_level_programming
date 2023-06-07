#include "main.h"

/**
 * factorial - It returns the factorial of a given number.
 * @n: Is a factorial whose number is to be returned.
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
