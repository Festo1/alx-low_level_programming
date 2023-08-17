#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - It adds the node to end of doubly linked list
 *
 * @head: Pointer to head of list
 * @n: Node data
 *
 * Return: The address of new node, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	if (!head)
		return (NULL);

	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	new->next = NULL;
	new->prev = last;
	last->next = new;

	return (new);
}
