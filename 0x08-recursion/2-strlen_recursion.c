#include "main.h"

/**
 * _strlen_recursion - It gets thr length of a string.
 * @s: The string whose length to be calculated.
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(++s)) : 0);
}
