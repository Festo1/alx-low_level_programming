#include "variadic_functions.h"
#include <stdarg.h> /* va_list, va_start, va_arg, va_end */

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 * @...: A variable number of parameters to sum.
 *
 * Return: If @n == 0, return 0, else the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* va_list type variable to store the arguments */
	unsigned int i; /* counter variable */
	int sum = 0; /* variable to store the sum of the parameters */

	if (n == 0) /* if no arguments were passed */
		return (0);

	/* initialize the va_list to store arguments after n */
	va_start(args, n);

    /* loop through each argument and add it to the sum */
	for (i = 0; i < n; i++)
	sum += va_arg(args, int);

    /* clean up the va_list */
	va_end(args);

	return (sum);
}
