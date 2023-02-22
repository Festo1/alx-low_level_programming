#include <stdio.h>

/**
 * main - Prints first 50 fibonacci number, starting with 1 and 2
 * seperated by a comma followed by a space
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fibal = 0 fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
