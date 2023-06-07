#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
/* initialize a variable to keep track of the number of nodes */
	size_t num = 0;

	/* iterate through the linked list and increment the node */
	/* count for each node */
	while (h)
	{
		num++; /* increment the node count */
		h = h->next; /* move to the next node */
	}

	return (num); /* return the total number of nodes in the linked list */
}
