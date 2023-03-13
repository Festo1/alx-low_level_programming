#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - It converts the params passed to the program to a string.
 * @ac: An argument count
 * @av: An argument vector
 * Return: NULL if ac == 0 or av == NULL
 * Otherwise returns a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		while (av[a][b])
		{
			len++;
			b++;
		}
		b = 0;
		a++;
	}
	s = malloc((sizeof(char) * len) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			s[c] = av[a][b];
			c++;
			b++;
		}
		s[c] = '\n';

		b = 0;
		c++;
		a++;
	}
	c++;
	s[c] = '\0';
	return (s);
}
