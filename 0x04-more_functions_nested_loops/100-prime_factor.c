#include <stdio.h>
#include <math.h>

/**
 * main - This will print the largest prime factor of the numbers
 * 612852475143.
 * Return: 0 on success
 */

int main(void)
{
	long a, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square;  a++)
	{
		if (number % a == 0)
		{
			maxf = number / a;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
