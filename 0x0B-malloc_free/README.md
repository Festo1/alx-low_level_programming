**0x0B. C - MALLOC, FREE**
==========================

What is Malloc ?
----------------

* C is a programming language, which means it's a way for people to write instructions that tell computers what to do. In C, programmers can use something called "malloc" and "free" to help manage memory. Memory is like the computer's short-term memory - it's where the computer stores information it needs to use right away.

* `Malloc` stands for `memory allocation`, and it's a function that programmers can use to ask the computer for a certain amount of memory. For example, if a programmer is writing a program that needs to store a list of numbers, they might use "malloc" to ask the computer for enough memory to hold all the numbers in the list. Here's an example:

~~~
 **code**
int *numbers;
numbers = (int *) malloc(5 * sizeof(int));
~~~

* In this code, the programmer is creating a pointer called `numbers` that will eventually point to the list of numbers. Then, they're using `malloc` to ask the computer for enough memory to hold 5 integers `which is what "5 * sizeof(int)" means`. The `(int *)` part is there to tell the computer what kind of data will be stored in the memory.

## Free

`Free` is another function that programmers can use to tell the computer that they're done using a certain piece of memory. For example, after the programmer is finished with the list of numbers, they might use "free" to tell the computer that it can use that memory for something else.

* *Here's an example:*

```
 **code**
free(numbers);
```
* In this code, the programmer is telling the computer to free the memory that was allocated to `numbers`.

## Why Malloc ?

* `Malloc` is a very important function in C because it allows programmers to allocate memory dynamically at runtime. This means that a program can request memory only when it needs it, and release it when it's no longer needed.

* One of the key advantages of using `malloc` is that it allows a program to allocate memory on the heap, rather than on the stack. The heap is a region of memory that can be accessed by any part of a program, whereas the stack is a region of memory that's used to store local variables and function calls. The stack is limited in size, and using too much of it can cause a program to crash.

* `Malloc` also allows a program to allocate memory for data structures that are too large to be created on the stack. For example, if a program needs to create an array with thousands of elements, it's not practical to allocate that array on the stack. `Malloc` allows the program to allocate that array on the heap, where there's more available memory.

**Copyright &copy; 2023 Festoug, All rights reserved.**
