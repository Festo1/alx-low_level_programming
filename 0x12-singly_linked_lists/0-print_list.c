#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list -It prints all elements of a linked list.
 * @h: pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	/* Traverse the linked list until the end */
	while (h)
	{
	/* If the string element is NULL, print the message "(nil)" */
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	/* If the string element is not NULL, print the string and its length */
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	count++; /* increment the counter for each node */
	h = h->next; /* move to the next node */
	}

	return (count); /* return the total number of nodes in the linked list */
}
