#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;  /* Initialize the previous node to NULL */
	listint_t *next = NULL;  /* Initialize the next node to NULL */

	while (*head)  /* Traverse through the linked list until the end */
	{
		next = (*head)->next;	/* Store the address of the next node */
		(*head)->next = prev;	/* Reverse the direction of the current node */
		prev = *head;	/* Update the previous node to the current node */
		*head = next;	/* Move to the next node in the list */
	}

	/* Set the head pointer to the new first node in the reversed list */
	*head = prev;

	return (*head);  /* Return a pointer to the first node of the reversed list */
}

