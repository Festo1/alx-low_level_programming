#include <stdio.h>
/**
 * main - This will print the size of various types of  computer
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printif("Size of a char: %lu bytes(s)\n", (unsigned long)
sizeof(a));
printif("Size of a int: %lu bytes(s)\n", (unsigned long)
sizeof(b));
printif("Size of a long int: %lu bytes(s)\n", (unsigned long)
sizeof(c));
printif("Size of a long long int: %lu bytes(s)\n", (unsigned long)
sizeof(e));
printif("Size of a char: %lu bytes(s)\n", (unsigned long)
sizeof(f));
return (0);
}
