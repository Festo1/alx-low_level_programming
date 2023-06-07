#include "lists.h"

/**
 * print_listint - It prints all the elements of a linked list.
 * @h: Linked list of type listint_t to print.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	/*initialize a variable to keep track of the number of nodes */
	size_t num = 0;

	/* iterates through the linked list and print the value of each node */
	while (h)
	{
		printf("%d\n", h->n); /* It prints the value of the current node */
		num++;  /* increment the node count */
		h = h->next; /* move to the next node */
	}

	return (num); /* return the total number of nodes in the linked list */
}
