#include "lists.h"

/**
 * sum_listint - It calculates the sum of all the data in a listint_t list.
 * @head: First node in the linked list.
 *
 * Return: Resulting sum.
 */

int sum_listint(listint_t *head)
{
	/* Declare and initialize variables */
	int sum = 0;
	listint_t *temp = head;

	/* Traverse the list and accumulate the sum of all data values */
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	/* Return the resulting sum */
	return (sum);
}
