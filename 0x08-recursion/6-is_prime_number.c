#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - It determins if a number is a prime.
 * @n: The number to be tested
 * Return: It returns 1 if the input integer is a prime number.
 * Otherwise return a 0 if the number is not a prime.
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - It checks if number is a prime.
 * @n: The number to be checked.
 * @i: The iteration times.
 *
 * Return: 1 for the prime otherwise for 0 composite.
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
