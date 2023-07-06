#include "main.h"

/**
 * print_binary - Print the binary representation of an unsigned long int.
 *
 * @n: The unsigned long int to be printed in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/* If n is greater than 1, recursively divide it by 2 and print the result */
	/* until it is less than or equal to 1 */
	if (n > 1)
		print_binary(n >> 1);

	/* Print the least significant bit of n as a character '0' or '1' */
	_putchar((n & 1) + '0');
}
