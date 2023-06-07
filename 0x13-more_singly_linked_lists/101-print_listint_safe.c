#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - It Counts the number of unique nodes in a looped
 * listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - The number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	/* Declare two pointers, tortoise and hare */
	const listint_t *tortoise, *hare;
	size_t nodes = 1; /* Initialize the node count to 1 */

	/* Check if the list is empty or has only one node */
	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next; /* Set tortoise to the second node */
	hare = (head->next)->next;  /* Set hare to the third node */

	while (hare) /* Traverse through the linked list */
	{
	if (tortoise == hare) /* Check if the two pointers meet */
	{
		tortoise = head; /* Set tortoise back to the first node */
		while (tortoise != hare) /* Traverse until the pointers meet again */
	{
		nodes++; /* Increment the node count */
		tortoise = tortoise->next; /* Move tortoise to the next node */
		hare = hare->next; /* Move hare to the next node */
	}

	tortoise = tortoise->next; /* Move tortoise to the next node */
	while (tortoise != hare) /* Traverse until the pointers meet again */
	{
		nodes++; /* Increment the node count */
		tortoise = tortoise->next; /* Move tortoise to the next node */
	}

	return (nodes); /* Return the node count */
	}

	tortoise = tortoise->next; /* Move tortoise to the next node */
	hare = (hare->next)->next; /* Move hare to the next two nodes */
	}

	return (0); /* Return 0 if the list is not looped */
}

/**
 * print_listint_safe - It prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	/* Declare the variables for counting the number of nodes and the current */
	/* index */
	size_t nodes, index = 0;

/* Get the number of unique nodes in the linked list */
	nodes = looped_listint_len(head);

	if (nodes == 0)  /* If the list is not looped */
	{
		for (; head != NULL; nodes++) /* Traverse through the linked list */
		{
			/* Print the node address and value */
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next; /* Move to the next node */
		}
	}

	else /* If the list is looped */
	{
	/* Traverse through the unique nodes in the linked list */
	for (index = 0; index < nodes; index++)
	{
		 /* Print the node address and value */
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;  /* Move to the next node */
	}

	/* Print the address and value of the looped node */
	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes); /* Return the number of nodes */
}
