# Linked List Creation in C

This C program demonstrates the creation of a simple linked list. The linked list consists of nodes, each containing an integer data value and a pointer to the next node in the list.

## Code Overview

The code defines a basic structure for a node (`struct Node`), which contains an integer data field and a pointer to the next node in the list. The `typedef` statement is used to create an alias `Newnode` for `struct Node`.

The `head` variable is a pointer to the first node in the linked list.

In the `main` function:

1. Memory is allocated for a new node using `malloc`.
2. If the memory allocation is successful, the data field of the node is set to 10, and the next pointer is set to NULL.
3. The `head` pointer is assigned the address of the newly created node.
4. The allocated memory is freed using `free`.

## Building and Running the Code

To compile the code, use a C compiler such as `gcc`. For example:

```bash
gcc linked_list.c -o linked_list
