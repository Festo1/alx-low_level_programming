#include "main.h"
#include <stdio.h>

/**
 * print_buffer - It prints buffer.
 * @b: buffer to be printed.
 * @size: Size of buffer to be printed.
 * Return: void.
 */

void print_buffer(char *b, int size)
{
	int a;
	int b_size;

	for (b_size = 0; b_size < size; b_size += 10)
	{
		printf("%08x: ", b_size);
		for (a = 0; a < 10; a++)
		{
			if ((a + b_size) >= size)
				printf(" ");
			else
				printf("%02x", *(b + a + b_size));
			if ((a % 2) != 0 && a != 0)
				printf(" ");
		}
		for (a = 0; a < 10; a++)
		{
			if ((a + b_size) >= size)
				break;
			else if (*(b + a + b_size) >= 31 &&
				 *(b + a + b_size) <= 126)
				printf("%c", *(b + a + b_size));
			else
				printf(".");
		}
		if (b_size >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
