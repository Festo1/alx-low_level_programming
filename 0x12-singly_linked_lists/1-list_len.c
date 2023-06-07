#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - It returns the number of elements in the list.
 * @h: singly linked list.
 * Return: Number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
