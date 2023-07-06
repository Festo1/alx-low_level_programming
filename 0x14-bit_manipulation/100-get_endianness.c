#include "main.h"

/**
 * get_endianness - It checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *endian = (char *)&num;

	/* Check the endianness of the system by checking the byte order */
	if (*endian == 1)
		return (1);
	return (0);
}
