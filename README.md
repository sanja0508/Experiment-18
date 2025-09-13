# Experiment-18

Aim: To understand and implement the concept of a stack data structure using an array in C++. We will cover basic stack operations like push, pop, peek, display, and check if the stack is full or empty.

Software Required: Visual Studio

Theory: A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. This means that the last element added to the stack is the first one to be removed. 
A stack can be thought of as a collection of elements with two primary operations:
Push: Adds an element to the stack.
Pop: Removes and returns the top element of the stack.

In addition to these basic operations, the following operations are also common:
Peek (or Top): Returns the top element without removing it.
isEmpty: Checks whether the stack is empty.
isFull: Checks whether the stack is full.

A stack can be implemented using an array or a linked list. In this experiment, we will implement the stack using an array of a fixed size.

Advantages of Using Stack:
Memory Efficiency: Since the size of the stack is fixed, memory allocation is simpler and less overhead is needed.
Fast Operations: The basic operations (push, pop, peek) are performed in constant time 
𝑂
(
1
)
O(1).

Concepts Covered:
Array-Based Stack Implementation: Using an array to store elements of the stack.
Push Operation: Add an element to the stack.
Pop Operation: Remove an element from the stack.
Peek Operation: View the top element without removing it.
Overflow and Underflow: Handling scenarios when the stack is full (overflow) or empty (underflow).

Algorithms:
1. Push Operation:
Input: An integer to be pushed onto the stack.
Process: Check if the stack is full.
If full, display an error message (stack overflow).
Otherwise, increment the top pointer and insert the element at the new position.
Output: The element is added to the stack.

2. Pop Operation:
Input: None.
Process: Check if the stack is empty.
If empty, display an error message (stack underflow).
Otherwise, return and remove the element at the top pointer, and decrement the top.
Output: The removed element is returned.

3. Peek Operation:
Input: None.
Process: Check if the stack is empty.
If empty, display an error message (stack underflow).
Otherwise, return the element at the top.
Output: The top element of the stack.

4. Display Operation:
Input: None.
Process: Traverse the stack from the bottom (index 0) to the top.
Print the elements of the stack.
Output: A list of elements in the stack.

Conclusion: In this experiment, we successfully implemented a stack using an array in C++. We covered essential stack operations like push, pop, peek, and display, as well as checked for stack overflow and underflow conditions. Understanding the stack and its operations is essential for solving various computational problems where LIFO ordering is required.
