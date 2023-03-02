#include "main.h"

/**
 * rot13 - It encodes rot13.This simply substitutes cipher that replaces a
 * letter with the 13th letter after it in the alphabet.
 * @s: String params for the pointer.
 * Return: *s on success.
 */

char *rot13(char *s)
{
	int a, b;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
				break;
			}
		}
	}
	return (s);
}
