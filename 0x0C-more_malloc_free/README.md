0x0C. C - MORE MALLOC, FREE.
===========================

* In C programming, malloc and free are used to dynamically allocate and deallocate memory. Here's a brief explanation and some examples:

malloc is a function that allocates a block of memory of the specified size and returns a pointer to the first byte of the block. The general syntax of malloc is:

```
 **code**
void* malloc(size_t size);
```
* Here, size specifies the size of the block in bytes that needs to be allocated. The function returns a void pointer (void*) that needs to be cast to the appropriate data type before use. For example, if you want to allocate an integer-sized block of memory, you can use malloc as follows:

```
 **code**
int* ptr = (int*) malloc(sizeof(int));
```
* This allocates a block of memory of size sizeof(int) bytes and returns a void pointer, which is then cast to an int* and assigned to the pointer variable ptr.

free is a function that deallocates the memory previously allocated by malloc. The general syntax of free is:

```
 **code**
void free(void* ptr);
```
* Here, ptr is the pointer to the memory block that needs to be deallocated. For example, if you want to deallocate the memory block pointed to by ptr, you can use free as follows:

```
 **code**
free(ptr);
```
* This deallocates the memory block previously allocated by malloc and pointed to by ptr.

`NB`

~~~
It's important to note that once you deallocate memory using free, you should not attempt to access that memory block again, as it may result in undefined behavior. Additionally, it's good practice to set the pointer to NULL after deallocating the memory to avoid any dangling pointer issues.
~~~

  **Copyright &copy; 2023 Festoug, All rights reserved.**
