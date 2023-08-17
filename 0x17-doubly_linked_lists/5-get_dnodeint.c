#include "lists.h"

/**
 * get_dnodeint_at_index - It gets the node at the index
 *
 * @head: Pointer to head of doubly linked list
 * @index: The given index
 *
 * Return: Pointer to node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}

	if (index == 0)
		return (head);

	return (NULL);
}
