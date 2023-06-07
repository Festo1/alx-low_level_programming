#include "function_pointers.h"

/**
 * print_name - prints a name using the specified function
 * @name: name to print
 * @f: function to use for printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
