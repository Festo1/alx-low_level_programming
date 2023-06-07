#include "lists.h"

/**
 * free_listint - It frees a linked list
 * @head: listint_t list to be freed
 *
 * It is a function that frees the memory allocated to a linked list of type
 * listint_t.
 * This takes a pointer to the head node of the list as input and iterates
 * through the list, freeing each node's memory as it goes along.
 *
 * @head: Pointer to the head node of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	/* Loop through the list, freeing each node as it goes along */
	while (head)
	{
		temp = head->next; /* Save a pointer to the next node */
		free(head); /* Free the current node */
		head = temp; /* Move to the next node */
	}
}
