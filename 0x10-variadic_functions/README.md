0x10. C - VARIADIC FUNCTIONS
============================

What is C Variadic Functions?
-----------------------------

* Variadic functions are features in the C programming language that allow a function to accept a variable number of arguments. In C, the standard library provides variadic functions such as printf() and scanf(). The stdarg.h header file provides the necessary macros to declare and access arguments passed to a variadic function.

* This repository contains examples of variadic functions in C that use the stdarg.h header file.

### Description of Functions

* This repository contains four functions that demonstrate the use of variadic functions:

~~~
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
~~~
1. int sum_them_all(const unsigned int n, ...)

* This function takes in an unsigned integer n and a variable number of integers. It returns the sum of all the integers passed as arguments.

2. void print_numbers(const char *separator, const unsigned int n, ...)

* This function takes in a separator string and an unsigned integer n followed by a variable number of integers. It prints all the integers separated by the separator string.

3. void print_strings(const char *separator, const unsigned int n, ...)

* This function takes in a separator string and an unsigned integer n followed by a variable number of strings. It prints all the strings separated by the separator string.

4. void print_all(const char * const format, ...)

* This function takes in a format string followed by a variable number of arguments. The function prints all the arguments according to the format string.

* The format string should contain a series of format specifiers that correspond to the arguments passed to the function. The format specifiers are:


| Specifier |   Output   |
| --------- |   -------  |
|   c	    |  Character |
|   i	    |  Integer   |
|   f	    |  Float     |
|   s	    |  String    |


> Examples

* Here are some examples of how to use the variadic functions:

* Example 1: `sum_them_all()`

```
 **code**

#include "variadic_functions.h"

int main(void)
{
    int sum = sum_them_all(4, 10, 20, 30, 40);
    printf("The sum is: %d\n", sum);
    return (0);
}
Output:

 **code**
The sum is: 100
```
* Example 2: `print_numbers()`

```
 **code**
#include "variadic_functions.h"

int main(void)
{
    print_numbers(", ", 4, 10, 20, 30, 40);
    printf("\n");
    return (0);
}
Output:

 **code**
10, 20, 30, 40
```
* Example 3: `print_strings()`

~~~
 **code**
#include "variadic_functions.h"

int main(void)
{
    print_strings(", ", 3, "Hello", "World", "!");
    printf("\n");
    return (0);
}
Output:
"Hello, World, !"
~~~

   **Copyright &copy; 2023 Festoug, All rights reserved.**
