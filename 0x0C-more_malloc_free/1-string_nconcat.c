#include "main.h"
#include <stdlib.h>

/**
 * _strlen - It Calculates and returns the string length.
 * @string: The string whose length is to be determined
 * Return: The string length.
 */

int _strlen(char *string)
{
	int a;

	for (a = 0; string[a] != '\0'; a++)
		;
	return (a);
}

/**
 * string_nconcat - It concatenates s1 and n bytes of s2; and returns
 * a ptr to string.
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concatenate from string 2
 * Return: A pointer to concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	int num, len, a, b;

	num = n;

	/* account for NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* account for the negative n bytes */
	if (num < 0)
		return (NULL);
	/* account for n too big */
	if (num >= _strlen(s2))
		num = _strlen(s2);

	/* +1 is to account for null pointer */
	len = _strlen(s1) + num + 1;

	/* the malloc and check for any error */
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	/* concatenate */
	for (a = 0; s1[a] != '\0'; a++)
		ptr[a] = s1[a];
	for (b = 0; b < num; b++)
		ptr[a + b] = s2[b];
	ptr[a + b] = '\0';

	return (ptr);
}
