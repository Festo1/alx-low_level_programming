#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - It prints strings, followed by a new line.
 * @separator: A string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Return: always void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /* a list of arguments */
	unsigned int index;
	char *str;

	va_start(args, n); /* Initializes the list of arguments */

	for (index = 0; index < n; index++)
	{
		str = va_arg(args, char *); /* Get the next string argument */
		if (str != NULL)
			printf("%s", str); /* Print the string */
		else
			printf("(nil)"); /* If string is NULL, print (nil) */
		if (index < n - 1 && separator != NULL)
			printf("%s", separator); /* Print the separator if not the last string */
	}

	printf("\n"); /* Print a new line at the end */

	va_end(args); /* Clean up the list of arguments */
}
