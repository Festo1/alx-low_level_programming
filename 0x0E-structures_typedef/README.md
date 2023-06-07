0X0E. C - STRUCTURES, TYPEDEF.
==============================

What are structures ?
-------------------

* Structures are a way of grouping together related data items under a single name. Structures allow you to create a user-defined data type that can store data of different types, such as integers, characters, and arrays.

* A structure is defined using the keyword struct, followed by the structure name and a list of its members enclosed in curly braces. Each member is defined as a type and a name separated by a semicolon. Here is an example of how to define a structure that represents a point in two-dimensional space.
~~~
 **code**
struct Point {
  int x;
  int y;
};
~~~

* In this example, we define a structure called Point that has two integer members: x and y. Now we can create variables of type Point to store two-dimensional points:

~~~
 **code**
struct Point p1 = {10, 20};
struct Point p2 = {30, 40};
~~~

* We can access the members of a structure using the dot (.) operator. For example:

~~~
 **code**
int distance = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
~~~

* In this example, we calculate the distance between two points p1 and p2 using the formula for Euclidean distance. We access the x and y members of the Point structure using the dot operator.

What is typedef ?
-----------------

* Typedef is a keyword used to create a new name for an existing data type. It allows you to define an alias for a complex type, making it easier to use and understand in your code.

The syntax for typedef is as follows:

~~~
 **code**
typedef <existing_data_type> <new_data_type_name>;
~~~

* Here is an example of how to use typedef to create a new data type name for an existing integer data type:

~~~
 **code**
typedef int my_int;
~~~

* In this example, we define a new data type called my_int which is an alias for the existing integer data type. Now, we can use my_int in place of int throughout our code:

~~~
 **code**
my_int x = 5;
my_int y = x + 10;
~~~

* We can also use typedef to create a new name for a structure or pointer type. Here is an example of how to use typedef to define a new name for a structure type:

~~~
 **code**
typedef struct {
    int age;
    char name[20];
} Person;
~~~

* In this example, we define a structure type with two members: age and name. We then use typedef to create a new data type called Person which is an alias for this structure type. Now, we can use Person to declare variables of this structure type:

~~~
 **code**
Person john = {25, "John"};
printf("Name: %s, Age: %d\n", john.name, john.age);
~~~

`NB:`

* Using typedef makes our code more readable and easier to maintain by giving meaningful names to complex data types.


## *BRIEFLY*

* In programming, structures are used to group together related pieces of information, just like a container that holds different things. Think of it like a backpack where you can put your books, pencils, and lunch box in different compartments. Each compartment in the backpack has a specific purpose, and they all work together to make the backpack useful.

* Similarly, in programming, a structure is a way to group together different types of data, such as numbers, characters, and text, into a single unit. For example, you could create a structure to represent a person, with fields for their name, age, and address. Then, you could create multiple instances of that structure to represent different people.

* Here's an example code snippet in C that defines a structure to represent a person:

```
 **code**
struct person {
  char name[20];
  int age;
  char address[50];
};
```
* The code above defines a structure called "person" that has three fields: a string field for the person's name (up to 20 characters), an integer field for their age, and a string field for their address (up to 50 characters).

* Now, let's move on to "typedef". This is a way to create a new name for an existing type. Think of it like giving a nickname to someone. For example, if you have a friend named "William", but you always call him "Will", then "Will" is like a typedef for "William".

* In programming, typedef is often used to make code easier to read and understand. For example, if you have a complex data type that you use frequently in your code, you can create a typedef to give it a simpler name. Here's an example:

```
 **code**
typedef struct person Person;
```
* The code above creates a new name "Person" for the "person" structure we defined earlier. Now, instead of using "struct person" every time we want to create a new instance of the structure, we can simply use "Person". For example:

```
 **code**
Person myFriend;
myFriend.age = 10;
```
* In this example, we create a new instance of the "person" structure and call it "myFriend" using the typedef "Person". We can then access the "age" field of the structure using the "." operator.

   **Copyright &copy; 2023 Festoug, All rights reserved.**
