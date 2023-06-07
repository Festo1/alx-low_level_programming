#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - It returns the length of a string.
 * @s: A pointer to a string.
 *
 * Return: The length of the string.
*/

int _strlen(const char *s)
{
	int i = 0;

	/* Loop through the string until the null terminator is reached */
	while (s[i] != '\0')
	{
		i++;
	}

	return (i); /* Return the length of the string */
}

/**
 * add_node - It adds a new node to the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: string to be stored in the new node.
 *
 * Return: pointer to the new node.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	/* Allocate memory for the new node */
	add = malloc(sizeof(list_t));
	if (add == NULL)
	return (NULL);

	/* Copy the string into the new node */
	add->str = strdup(str);

	/* Set the length of the string in the new node */
	add->len = _strlen(str);

	/* Set the next pointer of the new node to the current */
	/* head of the linked list */
	add->next = *head;

	/* Update the head of the linked list to point to the new node */
	*head = add;

	return (add); /* Return a pointer to the new node */
}
