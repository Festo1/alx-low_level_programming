#include <stdio.h>
#include <stdlib.h>

/**
 * isNumeric - It checks if the string is a number or not.
 * @str: String to be checked.
 * Return: True if number, otherwise false.
 */

int isNumeric(const char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - It adds positive numbers.
 * @argc: An array size
 * @argv: An array containing elements
 * Return: 0 on succes.
 */

int main(int argc, char **argv)
{
	int count = 1, sum = 0;

	while (count < argc)
	{
		if (isNumeric(argv[count]) == 0)
		{
			puts("Error");
			return (1);
		}

		sum = sum + atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
