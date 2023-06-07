#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	/* declare variables to store the numbers and result */
	int num1, num2, result;

	int (*func_ptr)(int, int);/* declare a function pointer variable */

	/* check if the number of arguments is correct */
	if (argc != 4)
	{
		printf("Error\n"); /* print an error message */
		exit(98); /* return an error code */
	}
	/* convert the first argument to an integer and store it */
	num1 = atoi(argv[1]);
	 /* convert the third argument to an integer and store it */
	num2 = atoi(argv[3]);
	/* get the appropriate function pointer using the operator provided */
	func_ptr = get_op_func(argv[2]);
	/* check if the operator is valid */
	if (func_ptr == NULL || argv[2][1] != '\0')
	{
		printf("Error\n"); /* print an error message */
		exit(99); /* return an error code */
	}
	/* call the appropriate function using the function */
	result = func_ptr(num1, num2);
	printf("%d\n", result); /* print the result */
	return (0); /* return success */
}
