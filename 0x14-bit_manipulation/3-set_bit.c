#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n: A pointer to the bit of unsingned long int.
 * @index: The index of the bit to be set.
 *
 * Return: If an error occurs -1, otherwise 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	/* If @index is greater than the number of bits in an unsigned long int, */
	/* return -1 */
	if (index > 63)
		return (-1);

	/* Create a num with a 1 at the @index position */
	num = 1 << index;

	/* Set the bit at @index in @n to 1 using the num */
	*n |= num;

	return (1);
}
