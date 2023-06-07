#include "lists.h"

/**
 * free_listint2 - It frees a linked list
 * @head: pointer to the listint_t list to be freed
 *
 * This function frees the memory allocated to a linked list of type listint_t.
 * It takes a pointer to a pointer to the head node of the list
 * as input and iterates through the list, freeing each node's memory as it
 * goes along.
 * This also sets the head pointer to NULL after the list has been freed.
 *
 * @head: pointer to a pointer to the head node of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	/* If the head pointer is already NULL, return immediately */
	if (head == NULL)
		return;

	/* Loop through the list, freeing each node as it goes along */
	while (*head)
	{
		temp = (*head)->next; /* Save a pointer to the next node */
		free(*head); /* Free the current node */
		*head = temp; /* Move to the next node */
	}

	 /* Set the head pointer to NULL after the list has been freed */
	*head = NULL;
}
