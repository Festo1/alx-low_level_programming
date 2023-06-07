#include <stdlib.h>

/**
 * _strdup - It returns a pointer to newly allocted memory space that contains
 * a copy of the string given as parameter.
 * @str: The string to be copied
 * Return: The _strdup function wiil return a pointer to the duplicated string
 * on Success, however, it will return NULL if str = NULL.
 */

char *_strdup(char *str)
{
	int size, a;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;
	ptr = (char *) malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		ptr[a] = str[a];
	ptr[a] = '\0';

	return (ptr);
}
