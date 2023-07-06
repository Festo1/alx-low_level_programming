#include "main.h"

/**
 * get_bit - It gets the value of a bit at a given index.
 * @n: The unsigned long int whose bit is to be checked.
 * @index: The index of the bit to be checked.
 *
 * Return: The value of the bit at @index, otherwise -1 if @index is greater
 * than the number of bits in an unsigned long int.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	/* If @n is 0 and @index is less than the number of bits in an unsigned */
	/* long int, return 0 */
	if (n == 0 && index < 64)
		return (0);

	/* Traverse the bits of @n from right to left until @index is reached */
	for (i = 0; i <= 63; n >>= 1, i++)
	{
	/* If the current index is equal to @index, return the value of the bit at */
	/* that index */
	if (index == i)
	{
		return (n & 1);
	}
	}

	/* If @index is greater than the number of bits in an unsigned long int, */
	/* return -1 */
	return (-1);
}
