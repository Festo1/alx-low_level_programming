#include "lists.h"

/**
 * pop_listint - It deletes the head node of a linked list.
 * @head: pointer to the first element in the linked list.
 *
 * This function deletes the head node of a linked list of type listint_t.
 * It takes a pointer to a pointer to the head node of the list as input,
 * updates the head pointer to point to the next node in the list, frees
 * the memory allocated to the original head node, and returns the data
 * contained in the original head node.
 *
 * @head: Pointer to a pointer to the head node of the list.
 *
 * Return: Data inside the element that was deleted, or 0 if the
 * list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	/* Check if the list is empty or the head pointer is NULL */
	if (!head || !*head)
		return (0);

	/* Save the data contained in the original head node */
	num = (*head)->n;

	/* Update the head pointer to point to the next node in the list */
	temp = (*head)->next;
	/* Free the memory allocated to the original head node */
	free(*head);
	/* Update the head pointer to point to the new head node */
	*head = temp;

	/* Return the data contained in the original head node */
	return (num);
}
