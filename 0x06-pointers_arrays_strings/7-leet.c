#include "main.h"

/**
 * leet - It encodes a string into 1337
 * @n: The input Value.
 * Return: The value of n.
 */

char *leet(char *n)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == s1[y])
			{
				n[x] = s2[y];
			}
		}
	}
	return (n);
}

