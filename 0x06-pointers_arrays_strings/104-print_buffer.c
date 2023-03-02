#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: Buffer to be printed.
 * @size: Bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int count;
	int b_size;

	for (b_size = 0; b_size < size; b_size += 10)
	{	printf("%08x: ", b_size);
		for (count = 0; count < 10; count++)
		{
			if ((count + b_size) >= size)
				printf("  ");
			else
				printf("%02x", *(b + count + b_size));
			if ((count % 2) != 0 && count != 0)
				printf(" "); }
			for (count = 0; count < 10; count++)
		{
			if ((count + b_size) >= size)
				break;
			else if (*(b + count + b_size) >= 31 &&
				*(b + count + b_size) <= 126)
				printf("%c", *(b + count + b_size));
			else
				printf("."); }
			if (b_size >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
