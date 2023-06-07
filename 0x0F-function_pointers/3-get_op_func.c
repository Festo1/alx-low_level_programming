#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - searches for the appropriate function to perform the operation
 * @s: the operator passed as a string
 *
 * Return: a pointer to the appropriate function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}};
	int i = 0;

	/* loop through the array of operators */
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

	i++;
	}

	return (0);
}
