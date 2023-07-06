#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index.
 *
 * @n: A pointer to the unsigned long int whose bit is to be cleared.
 * @index: The index of the bit to be cleared.
 *
 * Return: If an error occurs, -1, otherwise 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	/* If @index is greater than the number of bits in an unsigned long int, */
	/* return -1 */
	if (index > 63)
		return (-1);

	/* Create a mask with a 1 at the @index position */
	i = 1 << index;

	/* Clear the bit at @index in @n to 0 using the mask */
	*n &= ~i;

	return (1);
}
