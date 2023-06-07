# **0x05. C - POINTERS, ARRAYS AND STRINGS**

* This project Task will be about C - Pointers, arrays and strings where will discuss what is C- pointers arrays and strings.

## *POINTERS*

Pointers:
---------

* In C programming, a pointer is a variable that holds the memory address of another variable. Think of it like a pointer in real life - it points to something else. Here's an example:

* Let's say you have a variable x that holds the value 10. You can create a pointer to x like this:

```
 **code**

int x = 10;  // create a variable x and assign it the value 10
int *p = &x; // create a pointer p that points to the memory address of x
```
* In this example, p is a pointer variable that points to the memory address of x. You can use the * operator to access the value stored at the memory address pointed to by p, like this:

```
 **code**
int y = *p;  // y now holds the value 10, which is the value stored in x
```
## *ARRAYS*

Arrays:
-------

* In C programming, an array is a collection of elements of the same data type, stored in contiguous memory locations. You can think of it like a row of boxes, each box containing a value of the same type. Here's an example:

* Let's say you want to create an array of integers that can hold five values. You can create an array like this:

```
 **code**

int numbers[5] = { 10, 20, 30, 40, 50 };
```
* In this example, numbers is an array variable that can hold five integers. The values 10, 20, 30, 40, and 50 are stored in contiguous memory locations, like this:

```
 **code**

Index   | 0 | 1 | 2 | 3 | 4 |
Value   |10 |20 |30 |40 |50 |
```
* You can access individual elements of the array by their index, like this:

```
 **code**

int third_number = numbers[2];  // third_number now holds the value 30
```

## *STRINGS*

Strings:
--------

* In C programming, a string is a collection of characters, stored in contiguous memory locations, terminated by a null character '\0'. You can think of it like a row of boxes, each box containing a character. Here's an example:

* Let's say you want to create a string that holds the word "hello". You can create a string like this:

```
 **code**

char greeting[] = "hello";
```
* In this example, greeting is a string variable that holds the characters 'h', 'e', 'l', 'l', and 'o', in contiguous memory locations, like this:

```
**code**

Index   | 0 | 1 | 2 | 3 | 4 |
Value   |'h'|'e'|'l'|'l'|'o'|
```
* The string is terminated by a null character '\0', which is automatically added by the compiler. You can access individual characters of the string by their index, like this:

```
 **code**

char first_char = greeting[0];  // first_char now holds the value 'h'
```

**Copyright &copy; 2023 Festoug, All rights reserved.**
