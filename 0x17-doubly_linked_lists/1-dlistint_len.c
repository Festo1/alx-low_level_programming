#include "lists.h"

/**
 * dlistint_len - It counts and returns number of elements
 * in a doubly linked list
 *
 * @h: Pointer to the head of list
 *
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes += 1;
	}

	return (nodes);
}
