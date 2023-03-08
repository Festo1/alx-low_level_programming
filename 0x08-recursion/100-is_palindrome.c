#include "main.h"

int check_pal(char *S, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - It checks if a string is a palindrome.
 * @s: The string to reverse.
 * Return: 1 if it is, 0 if it is not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - It gets the length of a string.
 * @s: The string whose length to be calculated.
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(++s)) : 0);
}

/**
 * check_pal - It checks the characters recursively for palindrome.
 * @s: String to be checked.
 * @i: iterator
 * @len: Length of the string.
 * Return: 1 if palindrome, 0 if it is not.
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
