#include "lists.h"

/**
 * add_nodeint - It adds a new node at the beginning of a linked list.
 * @head: pointer to the first node in the list.
 * @n: data to be inserted in the new node.
 *
 * Return: pointer to the new node, or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new; /* create a new node pointer */

	new = malloc(sizeof(listint_t)); /* allocate memory for the new node */
	if (!new)
		return (NULL); /* if memory allocation fails, return NULL */

	new->n = n; /* set the data of the new node to the value of n */
	/* sets the next pointer of the new node to the current head */
	new->next = *head;
	*head = new; /* set the head to point to the new node */

	return (new); /* return the pointer to the new node */
}
