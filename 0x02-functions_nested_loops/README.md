**C - Functions, nested loops**
===============================

**Functions**:
-------------

* In programming, a function is a block of code that performs a specific task. Functions help to break down large programs into smaller, more manageable pieces. When you want to perform a certain task, you can call a function that has already been defined and written, instead of writing that code again and again.

* Here's an example of a simple function in C that adds two numbers and returns the result:

```
**code**

int add_numbers(int a, int b)
{
    int sum = a + b;
    return sum;
}
```

* This function takes two integers (a and b) as input, adds them together, and returns the result. To call this function, you would write something like this:

```
**code**

int result = add_numbers(5, 7);
```
* This would set the variable result to the value `12`, because `5 + 7 = 12`.

**Nested Loops**:
----------------

* A loop is a programming construct that allows you to repeat a set of instructions multiple times. A nested loop is simply a loop inside another loop. Nested loops are useful for iterating over multi-dimensional arrays or performing certain types of calculations.

* Here's an example of a nested loop in C that prints out a multiplication table:

```
**code**

for (int i = 1; i <= 10; i++)
{
    for (int j = 1; j <= 10; j++)
    {
        printf("%d ", i * j);
    }
    printf("\n");
}
```
* This code uses two for loops to print out the numbers 1 through 10 multiplied by each other. The outer loop iterates over the numbers 1 through 10, and the inner loop also iterates over the numbers 1 through 10. Inside the inner loop, we print out the product of i and j, followed by a space. Then, after the inner loop completes, we print out a newline character to start a new row.

* So if you ran this code, it would output something like this:

```
**code**

1 2 3 4 5 6 7 8 9 10 
2 4 6 8 10 12 14 16 18 20 
3 6 9 12 15 18 21 24 27 30 
4 8 12 16 20 24 28 32 36 40 
5 10 15 20 25 30 35 40 45 50 
6 12 18 24 30 36 42 48 54 60 
7 14 21 28 35 42 49 56 63 70 
8 16 24 32 40 48 56 64 72 80 
9 18 27 36 45 54 63 72 81 90 
10 20 30 40 50 60 70 80 90 100
```

**Copyright &copy; 2023 Festoug, All rights reserved.**
