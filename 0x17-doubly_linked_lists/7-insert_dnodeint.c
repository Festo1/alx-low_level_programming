#include "lists.h"

/**
 * insert_node - Insert node at given index
 *
 * @tmp: The ptr to nth position node in doubly linked list
 * @n: node data
 *
 * Return: The address of inserted node
 */

dlistint_t *insert_node(dlistint_t *tmp, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;

	return (new);
}

/**
 * insert_dnodeint_at_index - It creates and inserts node at the nth index
 *
 * @h: Pointer to head of list
 * @idx: Index of the new node
 * @n: node data
 *
 * Return: Address of the inserted node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!h)
		return (NULL);

	tmp = *h;
	while ((idx != 0) && (tmp->next))
	{
		idx -= 1;
		tmp = tmp->next;
		if (idx == 0)
			return (insert_node(tmp, n));
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
