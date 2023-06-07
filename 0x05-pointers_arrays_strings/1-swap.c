#include "main.h"

/**
 * swap_int - It Swaps the Values of two integers.
 * @a: First integer
 * @b: Second integer
 *
 * Return: nothing on success.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
