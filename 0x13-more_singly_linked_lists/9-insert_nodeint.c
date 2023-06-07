#include "lists.h"

/**
 * insert_nodeint_at_index - It inserts a new node in a linked list, at a given
 * position.
 * @head: pointer to the first node in the list.
 * @idx: index where the new node is added.
 * @n: data to insert in the new node.
 *
 * Return: pointer to the new node, or NULL,
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Declare variables */
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	/* Set the data value for the new node and initialize its next pointer to */
	/* NULL */
	new->n = n;
	new->next = NULL;

	/* Handle the case where the new node is inserted at the beginning of the */
	/* list */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/* Traverse the list and insert the new node at the specified position */
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	/* If the index is out of range, return NULL */
	return (NULL);
}
