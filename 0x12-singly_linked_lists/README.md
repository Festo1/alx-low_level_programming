 0x12. C - SINGLY LINKED LISTS
==============================

![Singly linked lists](https://www.codesdope.com/staticroot/images/ds/link14.gif)

 What are Singly linked lists?
------------------------------ 

* A singly linked list is a data structure used in computer programming to store a collection of elements called nodes. Each node contains a value and a reference (or pointer) to the next node in the list. The first node in the list is called the head, the last node is called the tail, and a reference to null indicates it. Singly linked lists are called `singly` because each node only has a reference to the next node in the list but not to the previous one.

* Why are Singly linked lists so Important in C

* Singly linked lists are essential in C (and other programming languages) because they efficiently store and manipulate data dynamically. Unlike arrays, which have a fixed size and are held in contiguous memory locations, singly linked lists can be easily resized, and the memory for the nodes can be allocated dynamically at runtime. This makes them useful for situations where the size of the data is not known in advance or when the data needs to be frequently added, removed, or reordered.

> In addition, singly linked lists can be used to implement other data structures, such as stacks, queues, and trees. They are also used in various algorithms and programming challenges, such as traversing graphs, sorting, and searching. Therefore, understanding and mastering singly linked lists is a fundamental skill for any programmer working with C (or any other programming language).

## Advantages of using singly linked lists in C

* There are several advantages of using singly linked lists in C, including:

1. **Dynamic memory allocation:** Singly linked lists allow for dynamic memory allocation, which means that nodes can be added or removed from the list at runtime. This makes singly linked lists flexible and efficient for managing data that needs to be frequently added, removed, or reordered.

2. **Efficient insertion and deletion:** Singly linked lists allow for efficient insertion and deletion of nodes, as it only requires updating the pointers of the nodes involved in the operation. This is in contrast to arrays, which require shifting of elements to make room for a new element or remove an existing one.

3. **Reduced memory waste:** Singly linked lists can reduce memory waste by allocating only the required memory for each node rather than allocating a fixed-size array. This can be especially useful when working with large or variable-sized data structures.

4. **Implementing other data structures:** Singly linked lists can be used as a building block to implement other data structures, such as stacks, queues, and trees. This makes singly linked lists a versatile tool for solving various programming problems.

5. **Easy traversal:** Singly linked lists allow for easy traversal in a forward direction, as each node has a pointer to the next node. This makes singly linked lists an efficient data structure for iterating over a sequence of elements.

* *Singly linked lists provide a flexible, efficient, and memory-efficient way to manage and manipulate data in C.*

## Here are some examples of stringly linked lists.

* Imagine you have many toys you want to put away in your toy box. You could throw them all in the box, but finding the one you wish to later would be hard. So instead, you decide to line them up on the floor next to the toy box in a specific order. This way, you can easily find the toy you want by looking at their order.

* This is similar to what a singly linked list does. A singly linked list is like a line of toys, where each toy (or `node`) has a name and a pointer to the following toy in the queue. The first toy in line is the `head` of the list, and the last is the `tail` of the list.

* For example, you have four toys: a teddy bear, a ball, a puzzle, and a car. You decide to put them in a singly linked list in the order they appear above. The head of the list is the teddy bear, and the tail is the car. Here's what the list would look like:

* **Teddy bear -> Ball -> Puzzle -> Car -> null**

* The arrows represent the pointers from one toy to the next. The `null` at the end of the list means no more toys after the car.

* Now, let's say you want to add a new toy, a doll, to the beginning of the list. You can do this easily by creating a new node for the doll and setting its pointer to the current head of the list (the teddy bear). Then, you update the head of the list to be the new node (the doll). Here's what the list would look like now:

* **Doll -> Teddy bear -> Ball -> Puzzle -> Car -> null**

* You can also remove a toy from the list by updating the pointers of the nodes around it. For example, let's say you want to remove the puzzle from the list. You would update the pointer of the ball to point to the car and then delete the node for the puzzle. Here's what the list would look like after removing the puzzle:

* **Doll -> Teddy bear -> Ball -> Car -> null**

* And that's basically how singly linked lists work! They're like a line of toys, where each toy has a name and a pointer to the next toy in line. You can add or remove toys from the line by updating the pointers of the nodes around them.

## Here are more examples

* Sure! Here are some examples of singly linked lists in C language code:

* Creating a new singly linked list:

```
 **code**
/* Define the structure for a node */
struct node {
    int data;
    struct node *next;
};

/* Create a new empty list */
struct node *head = NULL;
```
* This creates a new empty singly linked list with no nodes.

* Adding a node to the beginning of the list:

```
 **code**
/* Create a new node with a data value of 42 */
struct node *new_node = (struct node*) malloc(sizeof(struct node));
new_node->data = 42;

/* Make the new node the head of the list */
new_node->next = head;
head = new_node;
```
* This creates a new node with a data value of 42 and adds it to the beginning of the list by making it the new head of the list.

* Removing a node from the list:

```
 **code**
/* Traverse the list to find the node to remove */
struct node *prev = NULL;
struct node *curr = head;
while (curr != NULL && curr->data != target) {
    prev = curr;
    curr = curr->next;
}

/* Remove the node from the list */
if (curr != NULL) {
    if (prev != NULL) {
        prev->next = curr->next;
    } else {
        head = curr->next;
    }
    free(curr);
}
```
* This code traverses the list to find the node with a specific data value (target) and removes it from the list by updating the pointers of the nodes around it and freeing the memory allocated for the node.

* Counting the number of nodes in the list:

```
 **code**
/* Traverse the list and count the nodes */
int count = 0;
struct node *curr = head;
while (curr != NULL) {
    count++;
    curr = curr->next;
}

/* Print the number of nodes */
printf("The list has %d nodes\n", count);
```
* This code traverses the list and counts the number of nodes by incrementing a counter for each node. It then prints the number of nodes in the list.

* Reversing the order of the nodes in the list:

```
 **code**
/* Reverse the order of the nodes in the list */
struct node *prev = NULL;
struct node *curr = head;
while (curr != NULL) {
    struct node *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
}
head = prev;
```
* This code reverses the order of the nodes in the list by traversing the list and updating the pointers of the nodes to point to the previous node instead of the next node. It then sets the head of the list to the last node (now the first node after the reversal).

    **Copyright &copy; 2023 Festoug, All rights reserved.**
