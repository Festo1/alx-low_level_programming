**0x08. C - RECURSION**
=======================

What is Recursion.
------------------

*  *Recursion in C is a way of solving a problem by breaking it down into smaller versions of itself. It's kind of like a loop, but instead of repeating the same code over and over again, it calls itself to solve a smaller version of the problem*.

* Think of it like a Russian doll : a big doll contains smaller dolls, which contain even smaller dolls, and so on. Recursion works the same way: a big problem contains smaller versions of the same problem, which contain even smaller versions, and so on, until the problem is small enough to solve easily.

`NB`

```
Recursion can be a very powerful tool in programming, but it can also be tricky to use correctly. It's important to make sure that your recursive function has a base case, which is a condition that stops the recursion from going on forever. Otherwise, your program might get stuck in an infinite loop!
```

## Why use recursion ?

1. Recursion is a useful technique in programming because it can simplify complex problems and make code more elegant and efficient. Here are a few reasons why you might choose to use recursion:

2. When the problem can be divided into smaller sub-problems: Recursion can be a natural choice when you need to solve a problem that can be broken down into smaller versions of the same problem. For example, sorting a list of numbers can be done recursively by sorting two smaller sub-lists and thenmerging them together.

3. When the solution to a problem depends on the solution to smaller sub-problems: Some problems cannot be solved directly, but can be solved by solving smaller sub-problems first. Recursion is a powerful way to tackle these types of problems.

4. When the structure of the problem is recursive: If the problem you are trying to solve has a recursive structure, then using recursion can be a natural and elegant way to solve it. Examples of such problems include traversing a tree or a graph.

`NB`

```
Recursion can make your code more concise and easier to read, as it often reduces the amount of code you need to write compared to an iterative approach. However, it's important to use recursion carefully, as it can be easy to create an infinite loop if you're not careful.
```

## The following are the `prototypes` as used in the project.

> #ifndef MAIN_H

* This line is telling the computer to check if something called "MAIN_H" hasn't been defined before. If it hasn't, then the computer will continue reading the code in this file. This helps make sure that this code is only read once, even if it's used in multiple places.

>

> #define MAIN_H

* This line is defining the term "MAIN_H" so that the computer knows it has been used and should not be read again. This is part of the header guard system.

>

> int _putchar(char c);

* This line is telling the computer that there is a function called "_putchar" that takes one argument (a single character "c") and returns an integer value. A function is like a special tool that does a specific task, like printing a letter on the screen.

>

> void _puts_recursion(char *s);

* This line is telling the computer that there is another function called "_puts_recursion" that takes one argument (a pointer to a string of characters "s") and doesn't return anything. This function is used to print out a whole string of characters.

>

> void _print_rev_recursion(char *s);

* This line is telling the computer that there is a function called "_print_rev_recursion" that takes one argument (a pointer to a string of characters "s") and doesn't return anything. This function is used to print out a whole string of characters in reverse order.

>

> int _strlen_recursion(char *s);

* This line is telling the computer that there is a function called "_strlen_recursion" that takes one argument (a pointer to a string of characters "s") and returns an integer value. This function is used to count how many characters are in a string.

>

> int factorial(int n);

* This line is telling the computer that there is a function called "factorial" that takes one argument (an integer value "n") and returns another integer value. This function is used to calculate the factorial of a number, which is the product of all positive integers up to and including that number.

>

> int _pow_recursion(int x, int y);

* This line is telling the computer that there is a function called "_pow_recursion" that takes two arguments (two integer values "x" and "y") and returns an integer value. This function is used to raise "x" to the power of "y".

>

> int _sqrt_recursion(int n);

* This line is telling the computer that there is a function called "_sqrt_recursion" that takes one argument (an integer value "n") and returns an integer value. This function is used to calculate the square root of a number.

>

> int is_prime_number(int n);

* This line is telling the computer that there is a function called "is_prime_number" that takes one argument (an integer value "n") and returns an integer value. This function is used to check whether a number is a prime number or not.

>

> int is_palindrome(char *s);

* This line is telling the computer that there is a function called "is_palindrome" that takes one argument (a pointer to a string of characters "s") and returns an integer value. This function is used to check whether a string is a palindrome or not, which means that it reads the same forwards and backwards.

>

> int wildcmp(char *s1, char*s2);

* This line is telling the computer that there is a function called "wildcmp" that takes two arguments (two pointers to strings of characters "s1" and "s2") and returns an integer value. This function is used to compare two strings of characters and see if they match or not.

>

> #endif

* This line is the end of the header guard system. It tells the computer that it has reached the end of the code in the "main.h" file and should stop reading it.

>

**Copyright &copy; 2023 Festoug, All rights reserved.**
