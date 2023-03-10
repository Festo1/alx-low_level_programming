#include "main.h"
#include <stdio.h>

/**
 * main - It ptints the name of a progrm.
 * @argc: An array size.
 * @argv: An arcontaining elements.
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	puts(argv[argc - 1]);
	return (0);
}
