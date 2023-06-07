**0x01. C -VARIABLES, IF, ELSE**
===============================

Variables:
----------

* In programming, a variable is a container that holds a value. Think of it like a box that you can put things in. You can give a variable a name, and then assign a value to it. For example, let's say we want to store the number of apples in a basket. We could create a variable called "apples" and assign it a value of 5. Here's what that looks like in C code:

```
 **code**

int apples = 5;
```
* The keyword "int" tells the computer that we want to create an integer variable (a whole number), and "apples" is the name we're giving the variable.

If statements:
--------------

* An if statement is a type of conditional statement that allows the program to make decisions based on certain conditions. For example, let's say we want to write a program that checks if a number is greater than 10. We could use an if statement to do this. Here's what the code might look like:

```
 **code**

int number = 15;
if (number > 10) {
    printf("The number is greater than 10.");
}
```
* In this code, we're creating a variable called "number" and assigning it a value of 15. Then, we're using an if statement to check if the value of "number" is greater than 10. If it is, the program will print the message "The number is greater than 10."

Else statements:
----------------

* An else statement is another type of conditional statement that allows the program to do something if the condition in the if statement is not true. For example, let's modify the previous code to print a different message if the number is not greater than 10. Here's what the code might look like:

```
 **code**

int number = 5;
if (number > 10) {
    printf("The number is greater than 10.");
} else {
    printf("The number is not greater than 10.");
}
```
* In this code, we're creating a variable called "number" and assigning it a value of 5. Then, we're using an if statement to check if the value of "number" is greater than 10. If it is, the program will print "The number is greater than 10." If it's not, the program will print "The number is not greater than 10."

**Copyright &copy; 2023 Festoug, All rights reserved.**
