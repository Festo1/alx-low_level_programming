#include "main.h"

/**
 * rot13 - It encodes rot13.This simply substitutes cipher that replaces a
 * letter with the 13th letter after it in the alphabet.
 * @s: String targeted.
 * Return: *s on success.
 */

char *rot13(char *s)
{
	int i, j;

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot_key[j];
				break;
			}
		}
	}

	return (s);
}
