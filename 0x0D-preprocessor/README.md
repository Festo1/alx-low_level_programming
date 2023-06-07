0X0D. C - PREPROCESSOR.
=======================

What is Preprocessor ?
----------------------

* This is Just a text substitution tppl and it instructs a compiler to do required pre-processing before the actual compiling.
All preprocesssor commands begin with a hash `#` symbol.

* The preprocessor is the first stage of the C compilation process. Before the C code is compiled into machine code, the preprocessor goes through the code and performs some preprocessing tasks.

1. One of the main tasks of the preprocessor is to handle macros. Macros are defined using the "#define" directive, which tells the preprocessor to replace any occurrences of the macro name with its corresponding value or code.

2. Another task of the preprocessor is to include header files using the `#include` directive. Header files contain declarations of functions, variables, and other symbols that are used in the program. When the preprocessor encounters an "#include" directive, it replaces it with the contents of the included file.

3. The preprocessor also provides conditional compilation using the `#ifdef`, `#ifndef`, and `#endif` directives. These directives allow you to include or exclude parts of the code based on whether certain symbols have been defined or not.

4. Finally, the preprocessor provides other directives that can be used to control the behavior of the compiler or to generate code automatically. For example, the `#pragma` directive can be used to set compiler-specific options, and the `#error` directive can be used to generate an error message during compilation.

> ***Overall, the preprocessor is a powerful tool that allows C programmers to write more efficient and organized code. By handling macros, including header files, providing conditional compilation, and other directives, the preprocessor makes it easier to write complex C programs that can be compiled into efficient machine code.***

## Imagine what is simply Preprocessor with a live example.

* So, imagine you're building a big lego house. You have a lot of different kinds of legos, and you want to make sure everything fits together nicely. The C preprocessor is like a machine that helps you organize all of your legos before you start building.

* In programming, we use something called `macros` to help us write code more efficiently. Macros are like shortcuts that tell the computer to do something automatically instead of typing out all the steps every time. The C preprocessor is the part of the computer that handles macros.

* Let me give you an example. Say you wanted to write a program that would print out a message to the screen. Normally, you would have to write out a bunch of code to make this happen. But with the C preprocessor, you can create a macro that does it for you. Here's what it might look like:

~~~
 **code**
#define PRINT_MSG printf("Hello, world!\n")
~~~

* What this does is create a macro called `PRINT_MSG` that tells the computer to print out the message `Hello, world!` every time you use it. So instead of writing out the whole printf statement every time you want to print something, you can just use the shortcut you created with the preprocessor.

* Here's another example. Let's say you're working on a big project with a lot of different files. Each file might have its own set of variables and functions that it uses. To keep everything organized, you can use the C preprocessor to create "header files" that contain all of the information each file needs. Here's an example of what a header file might look like:

~~~
 **code**
#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H

int add_numbers(int a, int b);
void print_message(char *message);

#endif
~~~

* What this does is create a header file called `my_header_file.h` that defines two functions: `add_numbers` and `print_message`. The `#ifndef` and `#define` statements at the beginning make sure that the header file isn't included more than once in your project. And the `#endif` at the end tells the preprocessor where the header file ends.

* So that's a basic introduction to the C preprocessor. It might seem a little complicated at first, but once you get the hang of it, it can be a really useful tool for writing efficient, organized code.

What are Macros ?
-----------------

* Macros are like shortcuts in programming that allow you to write code more efficiently. They are small pieces of code that can be defined once and then used multiple times in different parts of your program.

* For example, let's say you have a program that needs to do some calculations using the value of pi. Instead of typing out the value of pi every time you need it, you can define a macro that represents the value of pi, like this:

~~~
 **code**
#define PI 3.14159
~~~

* Now, every time you use the macro "PI" in your code, it will be replaced with the value 3.14159. So instead of typing out the value of pi every time you need it, you can just use the shortcut you created with the macro.

* Macros can also take arguments, like functions. For example, let's say you want to write a macro that calculates the square of a number. You could define it like this:

```
 **code**
#define SQUARE(x) ((x) * (x))
```
* Now, every time you use the macro `SQUARE` with an argument, it will be replaced with the square of that argument. So if you write `SQUARE(5)`, it will be replaced with `(5) * (5)`, which equals 25.

  **Copyright &copy; 2023 Festoug, All rights reserved.**
