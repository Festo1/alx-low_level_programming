#include <stdio.h>

/**
 * main - Fizz_Buzz testing
 * Return: 0 on Success
 */

int main(void)
{
	int f = 1, b = 100;

	while (f <= 100)
	{
		if (f % 3 == 0)
			printf("Fizz");
		if (f % 5 == 0)
			printf("Buzz");
		if (f % 3 != 0 && f % 5 != 0)
			printf("%d", f);

		putchar(f == b ? '\n' : ' ');
		f++;
	}

	return (0);
}
