# 0x1E: C - Search Algorithms

This repository contains the source code for Project 0x1E of the ALX low-level programming track, which focuses on implementing search algorithms in C.

## Learning Objectives

Upon completion of this project, you will be able to:

* **Explain search algorithms:**
    * Define a search algorithm and its function.
    * Describe linear search and its time and space complexities.
    * Describe binary search and its time and space complexities.
    * Analyze the optimal search algorithm for different scenarios.
* **Implement search algorithms in C:**
    * Develop functions for linear and binary search.
    * Adhere to the Betty coding style for consistent and maintainable code.
    * Utilize appropriate data structures and functions efficiently.
    * Understand and apply Big O notation to analyze algorithm performance.

## Technical Requirements

* **Development Environment:**
    * Operating System: Ubuntu 20.04 LTS
    * Compiler: GCC
    * Allowed Editors: `vi`, `vim`, `emacs`
* **Coding Style:** Betty style (enforced by `betty-style.pl` and `betty-doc.pl`)
* **Restrictions:**
    * No global variables
    * Maximum of 5 functions per file
    * Allowed function: `printf` (no other standard library functions)
* **File Structure:**
    * `README.md` (this file)
    * `search_algos.h` (function prototypes)
    * `main.c` (example usage; optional for submission)
* **Header File:**
    * `search_algos.h` should include:
        * Function prototypes with accurate argument and return values
        * Include guards to prevent multiple inclusions
* **Big O Notation:**
    * Use the following standardized format:
        * `O(1)`
        * `O(n)`
        * `O(n!)`
        * `n * m -> O(nm)`
        * `n square -> O(n^2)`
        * `sqrt n -> O(sqrt(n))`
        * `log(n) -> O(log(n))`
        * `n * log(n) -> O(nlog(n))`

### Resources

* **Wikipedia:**
    * Search algorithm: [https://en.wikipedia.org/wiki/Search_algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
    * Space complexity: [https://en.wikipedia.org/wiki/Space_complexity](https://en.wikipedia.org/wiki/Space_complexity)

## Search Algorithms Explained

Search algorithms are fundamental building blocks of computer science, used to find specific data within a collection. Imagine searching for a book in a library or a specific word in a document. Both scenarios involve applying search algorithms to locate the desired information efficiently.

### Types of Search Algorithms

Two primary search algorithms are commonly used:

**1. Linear Search:**

* This method iterates through each element in the collection sequentially, comparing it to the target value.
* Imagine searching for a specific book in a library by checking each book on the shelf one by one.
* It has an average time complexity of **O(n)**, meaning the search time increases linearly with the size of the collection (n).
* It is simple to implement but inefficient for large datasets.

**2. Binary Search:**

* This method applies a divide-and-conquer approach, repeatedly dividing the search space in half based on the target value.
* Imagine searching for a specific page in a book by opening it to the middle and comparing the page number to the target.
* It requires the collection to be sorted in ascending or descending order.
* It has an average time complexity of **O(log n)**, meaning the search time increases logarithmically with the size of the collection.
* It is significantly faster than linear search for large datasets but requires additional sorting overhead.

### Choosing the Right Algorithm

The optimal search algorithm depends on the specific scenario and the characteristics of the data. Here's a breakdown:

* **Use linear search:**
    * If the collection is small.
    * If the collection is unsorted.
    * If simplicity and ease of implementation are paramount.
* **Use binary search:**
    * If the collection is large and sorted.
    * If speed and efficiency are crucial.
    * If multiple searches are anticipated.

### Examples and Illustrations

**Example 1: Searching for a phone number in a phone book:**

* **Linear search:** Imagine flipping through the phone book page by page until you find the desired name and associated number. This is a slow and tedious process, especially for large phone books.
* **Binary search:** Suppose the phone book is alphabetically sorted. You can open the book to the middle section, compare the target name with the names on that page, and then decide which half to search further based on the alphabetical order. This process is significantly faster and becomes even more efficient with larger phone books.

**Example 2: Searching for a specific word in a document:**

* **Linear search:** You can scan the document word by word until you find the desired word. This might be acceptable for small documents, but it becomes impractical for large ones.
* **Binary search:** If the document is stored digitally and indexed by word occurrences, you can utilize a binary search algorithm to locate the desired word much faster. This approach relies on the indexing structure to navigate directly to the relevant section of the document.

These are just a few examples, and the choice of algorithm depends on various factors like data size, sorting requirements, and performance needs.

**Additional Notes:**

* This explanation provides a simplified overview of search algorithms. Real-world implementations involve various optimization techniques and advanced data structures to achieve efficient search operations.
* Other search algorithms exist beyond linear and binary search, each with its specific strengths and weaknesses, depending on the data and search criteria.


