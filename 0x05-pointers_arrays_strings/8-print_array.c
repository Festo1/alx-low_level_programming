#include <stdio.h>

/**
 * print_array - It prints n elements of an array of integers.
 * @a: An array of elements in array
 * @n: The number of elements an array contains
 * Return: Nothing on Success
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);

		if (count != (n - 1))
			printf(", ");
		count++;
	}
	putchar('\n');
}
