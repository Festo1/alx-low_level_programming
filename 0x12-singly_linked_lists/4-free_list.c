#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - It release the memory allocated for a list.
 * @head: A pointer to the first node of the list to free.
*/

void free_list(list_t *head)
{
	/* If the list is not empty */
	if (head)
	{
		/* Free the rest of the list */
		free_list(head->next);

	/* Free the string in the current node if it exists */
	if (head->str)
		free(head->str);

	/* Free the current node */
	free(head);
	}
}
