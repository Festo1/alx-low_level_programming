**0X0A. C - arg, argv**
=======================

What is argc and argv ?
-----------------------

* `argc` stands for "`argument count`" and it represents the number of arguments passed to the program.

* "argv" stands for "`argument vector`" and it is an array of strings that holds the actual arguments passed to the program.

* Together, "argc" and "argv" are used to handle command-line arguments and can be used to make C programs more versatile and customizable.
***

* When we write computer programs, we can use something called "command-line arguments" to make the program behave differently depending on what we tell it to do.

* For example, let's say we write a program that adds two numbers together. We can make the program add different numbers depending on what we tell it to do when we run the program. We can do this by using "command-line arguments."

* Here's how it works: When we run a program, we can type some words after the program name. These words are called "arguments." The program can read these arguments and use them to change how it works.

* Now, "C - argc, argv" are two special words that programmers use in the programming language called C to read the command-line arguments.

* "argc" is a number that tells the program how many arguments we typed in after the program name. For example, if we ran the program with the command "myprogram.exe 10 20", then "argc" would be 3, because there are three things we typed: "myprogram.exe", "10", and "20".

* "argv" is an array (like a list) of words that we typed after the program name. The first word in "argv" is always the program name itself (in this example, "myprogram.exe"). The other words are the arguments we typed after the program name.

So, if we ran the program with the command "myprogram.exe 10 20", then "argv" would be an array with three strings: "myprogram.exe", "10", and "20".

Here's some example code to show you how "argc" and "argv" work in C:

~~~
 **code**
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("The program name is %s\n", argv[0]);
  printf("The first argument is %s\n", argv[1]);
  printf("The second argument is %s\n", argv[2]);
  return 0;
}
~~~
In this code, we're using "argc" and "argv" to print out the program name and the first two arguments that we typed in after the program name. If we ran this program with the command "myprogram.exe hello world", then the output would be:

~~~
 **code**

The program name is myprogram.exe
The first argument is hello
The second argument is world
~~~
**Copyright &copy; 2023 Festoug, All rights reserved.**
