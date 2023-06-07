#include <stdlib.h>

/**
 * get_str_len - It gets the length of a string.
 * @str: The string whose length is to be determined.
 * Return: Returns an integer value of the string.
 */

int get_str_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i + 1);
}

/**
 * str_concat - It joins two strings
 * @s1: First string
 * @s2: Second string
 * Return: The contents of s1, followed by the contents of s2,
 * and null terminated,
 * if NULL is passed then treat it as an empty string.
 * A function will return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int s1_size, s2_size, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_size = get_str_len(s1);
	s2_size = get_str_len(s2);

	ptr = (char *) malloc(((s1_size + s2_size) - 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
