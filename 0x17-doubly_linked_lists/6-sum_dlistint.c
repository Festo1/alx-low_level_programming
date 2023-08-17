#include "lists.h"

/**
 * sum_dlistint - It gets the sum of data in doubly linked list
 * @head: Pointer to head of doubly linked list
 * Return: The sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
