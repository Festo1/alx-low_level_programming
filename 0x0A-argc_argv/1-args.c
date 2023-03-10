#include "main.h"
#include <stdio.h>

/**
 * main - It prints a number of arguments passed to a program.
 * @argc: An array size
 * @argv: An array containing elements.
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	(void)(argv);
	printf("%d\n", argc - 1);
	return (0);
}
