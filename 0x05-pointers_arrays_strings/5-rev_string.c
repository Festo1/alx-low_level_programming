#include "main.h"

/**
 * rev_string - It reverses the string.
 * @s: The string to be reversed.
 * Return: Nothing on Success.
 */
void rev_string(char *s)
{
	int count = 0, a = 0;
	char last_char;

	while (*s)
	{
		s++;
		count++;
	}
	for (a = 0; a < count; a++)
		s--;
	for (a = 0; a < (count / 2); a++)
	{
		int last = count - 1;

		last_char = s[last - a];
		s[last - a] = s[a];
		s[a] = last_char;
	}
}
