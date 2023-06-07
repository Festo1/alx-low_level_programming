#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its own opcodes
 * @argc: The number of arguments passed to the function
 * @argv: An array of arguments passed to the function
 *
 * Return: 0 on success, 1 on incorrect number of arguments,
 * 2 if number of bytes is negative
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2) /* check for correct number of arguments */

	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]); /* convert argument to integer */

	if (bytes < 0) /* check if number of bytes is negative */
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;
		printf(" ");
		address++;

	}

	printf("\n");
	return (0);
}
