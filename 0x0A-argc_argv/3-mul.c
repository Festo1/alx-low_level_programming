#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - It multiplies 2 numbers.
 * @argc: An array size
 * @argv: An array containing elements.
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int arr_len = argc - 1;

	if (arr_len != 2)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
