**0x09. C - STATIC LIBRARIES**
==============================

What is a C library ?
---------------------

* A C library is a collection of pre-written functions (also called routines) that can be used in programs written in the C programming language.

* These functions are typically compiled into a file called a "library" that can be linked to a program during the build process. When the program is run, it can call these functions from the library to perform useful tasks, like reading input from the user or writing data to a file.

* C libraries are widely used because they allow programmers to save time and effort by reusing code that has already been written and tested. Rather than writing their own code from scratch to perform common tasks, they can use functions from a library that has already been written and refined over time.

* For example, let's say you're writing a program that needs to perform string manipulation, like copying, concatenating, or searching for substrings within a larger string. Instead of writing your own string manipulation functions, you can use functions from the standard C library, such as `strcpy` (to copy one string to another), `strcat` (to concatenate two strings), or `strstr` (to find a substring within a larger string).

* Using functions from a C library can save a lot of time and effort, since you don't have to write and test your own code for every task you want your program to perform.

## What is Good for it ?

* Reusability: C libraries allow programmers to reuse pre-written code, which saves time and effort. By using existing functions from a library, programmers don't have to write their own code for every task they want their program to perform.

* Reliability: C libraries are often well-tested and well-documented, which can make them more reliable than code written from scratch. This is because the functions in a library have likely been used and refined by many programmers over time, which can help to identify and fix bugs.

* Standardization: C libraries are often part of a standard library that comes with the C programming language. This means that they are widely available and can be used across different platforms and systems. This can help to ensure that programs written using C libraries can run on different computers without having to be modified.

* Performance: C libraries are often written in C or other low-level languages, which can be faster and more efficient than code written in high-level languages like Python or Java. This is because low-level languages allow for more direct control over the computer's hardware, which can result in faster and more efficient code.

 *Overall, C libraries are a powerful tool for programmers who want to save time and effort, improve the reliability of their code, and create high-performance applications that can run across different platforms and systems*.

## **What is a static Library** ?

* *In computer programming, a "static library" is a collection of pre-written code that programmers can use to help build their own programs. This pre-written code is called "functions" or "routines", and it can perform all kinds of useful tasks, like printing text on the screen or doing complex calculations*.

* Think of a static library like a toolbox full of different tools that you can use to build something. Just like you can use a hammer to build a birdhouse, a programmer can use a function from a static library to build their program.

* Here's an example: Let's say you want to write a program that does some math. You need to calculate the square root of a number, but you don't know how to do that in code. Instead of trying to figure it out yourself, you can use a function that's already been written in a static library. This function takes a number as input, calculates the square root, and returns the result. All you have to do is call the function from your program, and you'll get the answer you need.

* Another example: Let's say you want to write a program that plays a sound when a button is pressed. You could try to figure out how to play a sound yourself, but that would take a lot of time and effort. Instead, you can use a function from a static library that's specifically designed to play sounds. This function takes a sound file as input, plays the sound, and then returns. All you have to do is call the function from your program, and you'll have sound in your program!

## **How does it work** ?

* Here's how the process typically works:

1. The programmer writes the program code and compiles it into object files using a compiler such as gcc.

2. The programmer compiles the library code into object files and archives them together into a single file using a utility such as `ar` (short for `archive`).

3. The programmer links the program code with the library code by including a reference to the static library file during the linking step. This causes the necessary object files from the library to be linked directly into the executable file.

4. The resulting binary contains both the program code and the library code, and can be run on any system that has the necessary libraries installed.

`NB`

* Because the library code is linked directly into the program binary, there is no need to include separate library files when deploying the program to other systems. This can make it easier to distribute the program to different users or deploy it to different systems. Additionally, because the library code is compiled into the program binary, there is no runtime overhead associated with dynamically linking to a separate library, which can result in faster program startup times and better overall performance.

## **Why use a static Library** ?

* *There are several reasons why a programmer might choose to use a static library in their program*:

1. Portability: A static library is compiled directly into the program, which means that the program can be run on any system that has the necessary libraries installed. This can make it easier to distribute the program to different users or deploy it to different systems.

2. Performance: Because the library code is compiled directly into the program, there is no overhead associated with dynamically linking to a separate library at runtime. This can result in faster program startup times and better overall performance.

3. Ease of use: Using a static library can make it easier for programmers to distribute their code to other developers or users, since the library code is already compiled and linked into the program. This can help to avoid issues with missing or incompatible libraries that might otherwise arise when dynamically linking to a shared library.

4. Code isolation: By using a static library, the programmer can ensure that the code in the library is isolated from other code in the program. This can help to avoid issues with namespace collisions or conflicts that might arise when using dynamically linked libraries.

'NB'

*Overall, using a static library can help to simplify the development and distribution of programs, while also providing performance benefits and code isolation*.

## **How to creat a Static library** 

To create a static library in C, you need to follow these general steps:

1. Write the code: Write the functions that you want to include in your library. These functions should be compiled into object files using a C compiler.

2. Create object files: Compile each of the source files into object files using a C compiler. For example, if you have two source files `file1.c` and file2.c`, you can create object files `file1.o` and `file2.o` using the following commands:

 **code**
```
gcc -c file1.c
gcc -c file2.c
```
* This will create two object files `file1.o` and `file2.o` in the same directory.

3. Create a library: Use the `ar` command to create a library archive file from the object files. For example, you can create a library called `libmylib.a` using the following command:

 **code**
```
ar rcs libmylib.a file1.o file2.o
```
* This will create a library file `libmylib.a` that contains the object files `file1.o` and `file2.o`.


4. Use the library: To use the library in a program, you need to include the header file that declares the functions in the library, and link the program with the library file. For example, if you have a program called `myprog.c` that uses functions from the library, you can compile and link it with the library using the following command:

 **code**
```
gcc -o myprog myprog.c -L. -lmylib
```
* This will create an executable file `myprog` that uses functions from the library `libmylib.a`.

`Note`
 *that these steps are just a general guideline, and may vary depending on the specific tools and platforms that you are using*.

## **How to use it**

* To use a static library in a C program, you need to follow these general steps:

1. Include the header file: The library should come with a header file that declares the functions and data structures that are provided by the library. You need to include this header file in your program source code using the `#include` directive. For example, if the library provides a function called `myfunc`, you might include the header file `mylib.h` like this:

```
 **code**

#include `mylib.h`
```
2. Compile the program: Compile your program source code into an object file using a C compiler. For example, you might compile a program called `myprog.c` using the following command:

```
 **code**

gcc -c myprog.c
```
3. Link with the library: Link your program object file with the library file using the `-l` option to specify the library name. For example, if the library file is called "libmylib.a", you might link your program using the following command:

```
 **code**
gcc -o myprog myprog.o -L. -lmylib
```
* Here, the `-L.` option tells the linker to look for library files in the current directory, and the `-lmylib` option tells it to link with the library file `libmylib.a`.

4. Run the program: Run your program by executing the resulting executable file. For example, if your program is called `myprog`, you might run it using the following command:

```
 **code**
./myprog
````
`Note`
 *that these steps are just a general guideline, and may vary depending on the specific tools and platforms that you are using. Additionally, you may need to set additional compiler and linker options depending on the library and program requirements*.

## **Basic usage of ar, ranlib, nm**

ar, ranlib, and nm are three Unix commands that are commonly used when working with static libraries in C. Here's a brief overview of each command and their basic usage:

1. ar: The ar command is used to create and manipulate archive files. To create an archive file from a set of object files, you can use the following command:

```
 **code**
ar rcs libmylib.a file1.o file2.o
```
* Here, `libmylib.a` is the name of the archive file that will be created, and `file1.o` and `file2.o` are the object files that will be included in the archive. The r, c, and s options respectively indicate that the archive should be created or updated, that it should be created if it doesn't already exist, and that an index of the archive should be created.

* To extract an object file from an archive, you can use the following command:

```
 **code**
ar x libmylib.a file1.o
```
* Here, `libmylib.a` is the name of the archive file, and `file1.o` is the name of the object file that should be extracted.

2. ranlib: The ranlib command is used to create an index of an archive file. The index is used to speed up linking by allowing the linker to quickly find the object files that it needs. To create an index of an archive file, you can use the following command:

```
 **code**
ranlib libmylib.a
```
* Here, `libmylib.a` is the name of the archive file that should be indexed.

3. nm: The nm command is used to list the symbols that are defined in an object file or archive file. To list the symbols that are defined in an object file, you can use the following command:

```
 **code**
nm file1.o
```
* Here, `file1.o` is the name of the object file that should be inspected.

* To list the symbols that are defined in an archive file, you can use the following command:

```
 **code**
nm libmylib.a
```
* Here, `libmylib.a` is the name of the archive file that should be inspected.

* These are just a few basic examples of how ar, ranlib, and nm can be used when working with static libraries in C. There are many other options and use cases for these commands, depending on the specific requirements of your project.

**Copyright &copy; 2023 Festoug, All rights reserved.**
