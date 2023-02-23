#include "main.h"

/**
 * _isupper - Checks for the uppercase charcter.
 * @c: It is the character to be checked
 * Return: 1 if @c is 0
 * Otherwise, the return 0
 */
int _isupper(int c)
{
	int start = 65, end = 90;

	if (c >= start && c <= end)
		return (1);
	return (0);
}
