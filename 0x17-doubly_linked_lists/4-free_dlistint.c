#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - It frees a doubly linked list with only int data, no strings
 * @head: Pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
	{
		return;
	}

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
