#include "main.h"

/**
 * flip_bits - It counts the number of bits needed to be flipped to get from
 * one number to another.
 * @n: Number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nbits = n ^ m, bits = 0;

	/* Count the number of bits that are different between @n and @m */
	while (nbits > 0)
	{
		bits += (nbits & 1);
		nbits >>= 1;
	}

	return (bits);
}
