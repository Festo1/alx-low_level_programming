 0x13. C - MORE SINGLY LINKED LISTS.
 ====================================
 
 The following are the functions and prototypes Fully explained as they will be used in the task.
 -------------------------------------------------------------------------------------------------
 
0. *Print list*
* 0-print_listint.c: This is a C function that prints all the elements of a listint_t linked list and Returns the number of nodes in the listint_t list.

1. *List length*
* 1-listint_len.c: This is a C function that returns the number of elements in the listint_t linked list.

2. *Add node*
* 2-add_nodeint.c: It is a C function that adds a new node at the beginning of a listint_t linked list, If the function fails it returns NULL, Otherwise - returns the address of the new element.

3. *Add node at the end*
* 3-add_nodeint_end.c: This is a C function that adds a new node at the end of a listint_t linked list and If the function fails - returns NULL, Otherwise - returns the address of the new element.

4. *Free list*
* 4-free_listint.c: It is C function that frees a listint_t linked list.
 
5. *Free*
* 5-free_listint2.c: It is a C function that frees a listint_t linked list. Sets the head to NULL.

6. *Pop*
* 6-pop_listint.c: This is a C function that deletes the head node of a listint_t linked list and If the linked list is empty - returns 0, Otherwise - returns the head node's data (n).

7. *Get node at index*
* 7-get_nodeint.c: This is a function that locates a given node of a listint_t linked list. If the node does not exist - returns NULL, Otherwise - returns the located node.
 
8. *Sum list*
* 8-sum_listint.c: This function returns the sum of all the data (n) of a listint_t linked list. If the linked list is empty - returns 0. Otherwise - returns the sum of all the data (n). 

9. *Insert*
9-insert_nodeint.c: C function that inserts a new node to a listint_t linked list at a given position. If it is not possible to add the new node at index idx, or the function fails - returns NULL. Otherwise - returns the address of the new node.

10. *Delete at index*
* 10-delete_nodeint.c: This C function deletes the node at a given index of a listint_t linked list. If the function succeeds - returns 1. If the function fails - returns -1.

11. *Reverse list*
* 100-reverse_listint.c: It is a C function that reverses a listint_t linked list using a maximum of one loop and two variables. Returns a pointer to the first node of the reversed list.
 
12. *Print `safe version`*
* 101-print_listint_safe.c: This is a C function that prints a listint_t linked list safely `can free lists containing loops`. Returns the number of nodes in the listint_t list.

13. *Free `safe version`*
* 102-free_listint_safe.c: This C function frees a listint_t linked list safely. Returns the size of the list that was freed. Sets the head to NULL.
 
14. *Find the loop*
* 103-find_loop.c: It is a C function that finds the loop contained in a listint_t linked list using a maximum of two variables. If no loop is found - returns NULL. Otherwise - returns the address of the node where the loop starts.
