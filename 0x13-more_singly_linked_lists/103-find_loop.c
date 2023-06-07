#include "lists.h"

/**
 * find_listint_loop - It finds the loop in a linked list.
 * @head: linked list to be searched for.
 *
 * Return: An address of the node where the loop starts, or NULL.
 */

listint_t *find_listint_loop(listint_t *head)
{
	/* Declare two pointers slow and fast */
	listint_t *slow, *fast;

	/* If the head of the list is null or there is only one node, return null */
	if (head == NULL || head->next == NULL)
		return (NULL);

	/* Set slow to the next node and fast to the next of next node of head */
	slow = head->next;
	fast = (head->next)->next;

	/* Traverse the linked list with fast */
	while (fast)
	{
		/* If there is a loop, the slow and fast will meet at some point */
		if (slow == fast)
	{
		/* Move slow back to head of the list */
		slow = head;

		/* Traverse the list with slow and fast until they meet */
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}

	/* Return the node where the loop starts */
	return (slow);
	}

		/* Move slow to next node and fast to next of next node */
		slow = slow->next;
		fast = (fast->next)->next;
	}

	/* If there is no loop, return null */
	return (NULL);
}
