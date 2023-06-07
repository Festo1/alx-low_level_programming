#include "variadic_functions.h"
#include <stdarg.h> /* va_list, va_start, va_arg, va_end */
#include <stdio.h>

/**
 * print_numbers - It prints numbers, followed by a new line.
 * @separator: A string to be printed between numbers.
 * @n: Number of integers passed to the function.
 * @...: The variable number of integers to print.
 *
 * Description: If @separator is NULL, don't print it. print a new line at
 * the end of the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /* va_list type variable to store the arguments */
	unsigned int i; /* counter variable */

    /* initialize the va_list to store arguments after n */
	va_start(args, n);

    /* loop through each argument and print it */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

	/* print the separator if it's not NULL and not the last argument */
	if (separator != NULL && i != n - 1)
		printf("%s", separator);
	}

    /* clean up the va_list */
	va_end(args);

    /* print a new line */
	printf("\n");
}
