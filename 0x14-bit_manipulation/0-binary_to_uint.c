#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: Unsigned int equivalent of the binary number, or 0 if @b is NULL or
 * if @b contains a non-binary character.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, base_two;
	unsigned int num;

	if (!b)
		return (0);

	num = 0;

	/* Determine the length of the binary string */
	for (i = 0; b[i] != '\0'; i++)
		;

	/* Traverse the binary string from right to left, multiplying each digit by */
	/* the appropriate power of 2 and adding the result to num */
	for (i--, base_two = 1; i >= 0; i--, base_two *= 2)
	{
	/* If the current character is not a 0 or 1, the string is not a valid */
	/* binary number */
	if (b[i] != '0' && b[i] != '1')
	{
		return (0);
	}

	/* If the current character is a 1, add the corresponding power of 2 to	num */
	if (b[i] & 1)
	{
		num += base_two;
	}
	}

	return (num);
}
