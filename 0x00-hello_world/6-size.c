#include <stdio.h>
/**
 * main - This will print the size of various types of  computer
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

pintif("Size of a char: %lu bytes(s)\n", (unsigned long)
sizeof(c));
pintif("Size of a int: %lu bytes(s)\n", (unsigned long)
sizeof(i));
pintif("Size of a long int: %lu bytes(s)\n", (unsigned long)
sizeof(li));
pintif("Size of a long long int: %lu bytes(s)\n", (unsigned long)
sizeof(lli));
pintif("Size of a char: %lu bytes(s)\n", (unsigned long)
sizeof(f));
return (0);
}
