#include "main.h"

/**
 * rot13 - It encodes rot13.This simply substitutes cipher that replaces a
 * letter with the 13th letter after it in the alphabet.
 * @s: String params for the pointer.
 * Return: *s on success.
 */

char *rot13(char *s)
{
	int a;
	int b;
	char alpha_data[] =
"ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz";
	char rot_data[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == alpha_data[b])
			{
				s[a] = rot_data[b];
				break;
			}
		}
	}
	return (s);
}
