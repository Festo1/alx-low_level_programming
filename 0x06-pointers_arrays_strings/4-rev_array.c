#include "main.h"

/**
 * reverse_array - It Reverses the content of an array of integers.
 * @a: An array of int to be reversed.
 * @n: Number of elements in an array.
 */

void reverse_array(int *a, int n)
{
	int temp, rev;

	for (rev = n - 1; rev >= n / 2; rev--)
	{
		temp = a[n - 1 - rev];
		a[n - 1 - rev] = a[rev];
		a[rev] = temp;
	}
}
