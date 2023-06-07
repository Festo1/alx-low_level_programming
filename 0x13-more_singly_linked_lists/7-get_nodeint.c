#include "lists.h"

/**
 * get_nodeint_at_index - It returns the node at a certain index in a linked
 * list.
 * @head: First node in the linked list.
 * @index: index of the node to be returned.
 *
 * Return: pointer to the node we're looking for, or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Declare and initialize variables */
	unsigned int i = 0;
	listint_t *temp = head;

	/* Traverse the list until the desired index is reached */
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* Return a pointer to the node at the desired index, or NULL if not found */
	return (temp ? temp : NULL);
}
