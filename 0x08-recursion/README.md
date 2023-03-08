**0x08. C - RECURSION**
=======================

What is Recursion.
------------------

*  *Recursion in C is a way of solving a problem by breaking it down into smaller versions of itself. It's kind of like a loop, but instead of repeatingthe same code over and over again, it calls itself to solve a smaller version of the problem*.

* Think of it like a Russian doll : a big doll contains smaller dolls, which contain even smaller dolls, and so on. Recursion works the same way: a big problem contains smaller versions of the same problem, which contain even smaller versions, and so on, until the problem is small enough to solve easily.

* Recursion can be a very powerful tool in programming, but it can also be tricky to use correctly. It's important to make sure that your recursive function has a base case, which is a condition that stops the recursion from going on forever. Otherwise, your program might get stuck in an infinite loop!

## Why use recursion ?

1. Recursion is a useful technique in programming because it can simplify complex problems and make code more elegant and efficient. Here are a few reasons why you might choose to use recursion:

2. When the problem can be divided into smaller sub-problems: Recursion can be a natural choice when you need to solve a problem that can be broken down into smaller versions of the same problem. For example, sorting a list of numbers can be done recursively by sorting two smaller sub-lists and thenmerging them together.

3. When the solution to a problem depends on the solution to smaller sub-problems: Some problems cannot be solved directly, but can be solved by solving smaller sub-problems first. Recursion is a powerful way to tackle these types of problems.

4. When the structure of the problem is recursive: If the problem you are trying to solve has a recursive structure, then using recursion can be a natural and elegant way to solve it. Examples of such problems include traversing a tree or a graph.

> Recursion can make your code more concise and easier to read, as it often reduces the amount of code you need to write compared to an iterative approach. However, it's important to use recursion carefully, as it can be easy to create an infinite loop if you're not careful.

## Some of the Prototype used in the project

> #ifndef MAIN_H
This line is telling the computer to check if something called "MAIN_H" hasn't been defined before. If it hasn't, then the computer will continue reading the code in this file. This helps make sure that this code is only read once, even if it's used in multiple places.


> #define MAIN_H

> int _putchar(char c);

> void _puts_recursion(char *s);

> void _print_rev_recursion(char *s);

> int _strlen_recursion(char *s);

> int factorial(int n);

> int _pow_recursion(int x, int y);

> int _sqrt_recursion(int n);

> int is_prime_number(int n);

> int is_palindrome(char *s);

> int wildcmp(char *s1, char*s2);

> #endif
