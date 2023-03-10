#include "main.h"
#include <stdio.h>

/**
 * main - It prints all arguments passed in commandline.
 * @argc: An array size
 * @argv: An array containing elements
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		puts(argv[i]);
		i++;
	}
	return (0);
}
