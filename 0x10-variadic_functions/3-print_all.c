#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);/* Initializes the argument list */

	if (format) /* Checks if the format string exists */
	{
		while (format[i]) /* Loop through the format string */
		{
	/* depending on the type specified in the format string,print the argument */
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str) /* If a NULL string is passed, print "(nil)" instead */
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++; /* If the format string contains an unsupported type, skip it */
				continue;
		}
		sep = ", "; /* Add a separator between arguments */
		i++;
		}
	}
	printf("\n"); /* Print a new line at the end */
	va_end(list); /* Cleans up the argument list */
}
