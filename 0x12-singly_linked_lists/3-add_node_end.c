#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - It finds the length of a string.
 * @str: pointer to a string.
 * Return: Length of the string.
*/
unsigned int _strlen(char *str)
{
	unsigned int i;

	/* Loop through the string until the null terminator is reached */
	for (i = 0; str[i]; i++)
		;

	return (i); /* Return the length of the string */
}

/**
 * add_node_end - It adds a new node to the end of a linked list.
 * @head: pointer to a pointer to the head of the linked list.
 * @str: string to be stored in the new node.
 *
 * Return: pointer to the new node.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL) /* Check if the string is NULL */
		return (NULL);

	new = malloc(sizeof(list_t)); /* Allocate memory for the new node */
	if (new == NULL)
		return (NULL);

	new->str = strdup(str); /* Copy the string into the new node */

	if (new->str == NULL) /* Check if the strdup function failed */
	{
		free(new);
		return (NULL);
	}

	/* Set the length of the string in the new node */
	new->len = _strlen(new->str);

	new->next = NULL; /* Set the next pointer of the new node to NULL */

	/* If the linked list is empty, set the head to the new node */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head; /* Traverse the linked list to find the last node */
	while (tmp->next)
	tmp = tmp->next;

	/* Set the next pointer of the last node to the new node */
	tmp->next = new;

	return (new); /* Return a pointer to the new node */
}
