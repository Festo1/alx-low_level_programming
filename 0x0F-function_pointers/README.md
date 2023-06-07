0x0F. C - FUNCTION POINTERS
============================

What is C Function pointers
----------------------------

* In C programming, a function pointer is a variable that holds the address of a function in memory. It allows you to pass functions as arguments to other functions or assign a function to a variable, which can then be called later through that variable. Function pointers are useful when you want to create more flexible and dynamic programs that can be easily customized by the user.

* For example, we could have a function called "add" that takes two numbers and adds them together. Or we could have a function called "subtract" that takes two numbers and subtracts one from the other.

* Now, imagine if we wanted to make a program that could use different functions depending on what the user wants. We could have a "menu" that asks the user what they want to do, and then our program would call the right function to do that task.

* But what if we didn't know beforehand which function we would need to use? That's where function pointers come in!

* A function pointer is like a little arrow that points to a specific function. We can use this arrow to call the function that it points to, without actually knowing which function it is until runtime.

* Let's take an example. Say we have two functions called "add" and "subtract". We could make a function pointer like this:

```
 **code**
int (*func_ptr)(int, int);
```
* This creates a variable called "func_ptr" that is a pointer to a function that takes two integers as arguments and returns an integer.

* We can set this pointer to point to the "add" function like this:

```
**code**
func_ptr = &add;
```
* Now, when we call the function pointer, like this:

```
 **code**
int result = (*func_ptr)(2, 3);
```

   **Copyright &copy; 2023 Festoug, All rights reserved.**
