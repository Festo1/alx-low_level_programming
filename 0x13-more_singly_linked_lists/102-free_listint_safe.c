#include "lists.h"

/**
 * free_listint_safe - It frees a linked list while handling possible loops.
 * @h: A pointer to a pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0; /* Counter for the number of elements freed */
	int diff; /* Difference between the current node and the next node */
	listint_t *temp; /* Temporary pointer to store the next node */

	/* Check if the input pointer is NULL or if it is pointing to NULL */
	if (!h || !*h)
		return (0);

	/* Loop through the linked list while it is not empty */
	while (*h)
	{
		diff = *h - (*h)->next; /* Calculate the difference in memory addresses */
		if (diff > 0)  /* If the difference is positive, there is no loop */
		{
			temp = (*h)->next; /* Store the next node in a temporary pointer */
			free(*h); /* Free the current node */
			*h = temp; /* Move the head to the next node */
			len++; /* Increment the counter */
		}
		else /* If the difference is non-positive, there is a loop */
		{
			free(*h); /* Free the current node */
			*h = NULL;  /* Set the head to NULL to break the loop */
			len++; /* Increment the counter */
			break; /* Exit the loop */
		}
	}

	*h = NULL; /* Set the head to NULL */

	return (len); /* Return the number of elements freed */
}
