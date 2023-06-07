#include "lists.h"

/**
 * delete_nodeint_at_index - It deletes a node in the linked list at a certain
 * index.
 * @head: pointer to the first element in the list.
 * @index: index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Declare and initialize pointers */
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	/* Check if list is empty */
	if (*head == NULL)
		return (-1);

	/* If index is 0, delete the first node and update the head */
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Traverse the list to reach the node before the one to be deleted */
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	/* Get a pointer to the node to be deleted */
	current = temp->next;

	/* Update the pointers to skip over the node to be deleted */
	temp->next = current->next;

	/* Free the memory allocated to the node to be deleted */
	free(current);

	return (1);
}
