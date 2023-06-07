#include <stdio.h>

/**
 * bmain - unction executed before main.
 * return: Nothing
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
