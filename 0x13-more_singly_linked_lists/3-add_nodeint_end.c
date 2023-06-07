#include "lists.h"

/**
 * add_nodeint_end - It adds a node at the end of a linked list.
 * @head: pointer to the first element in the list.
 * @n: Data to be inserted in the new element.
 *
 * Return: pointer to the new node, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new; /* declare a new node to be added to the linked list */
	/* declare a temporary pointer variable to traverse the linked list */
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t)); /* allocate memory for the new node */
	if (!new)
		return (NULL); /* return NULL if malloc fails */

	new->n = n;  /* set the data in the new node to the input data */

	/* set the next pointer of the new node to NULL, since it will be */
	/*the last node in the list */
	new->next = NULL;

	if (*head == NULL) /* if the linked list is currently empty */
	{
	*head = new; /* set the head pointer to the new node */
	return (new); /* return the new node */
	}

	/* if the linked list is not empty, traverse to the end of the list */
	/* and add the new node there */
	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new); /* return the new node that was added to the end of the list */
}
