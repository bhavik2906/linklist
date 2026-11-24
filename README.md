# Linked List Basics in C

This repository contains small, beginner-friendly C programs that demonstrate how a singly linked list works.

Each example creates nodes with `malloc`, connects them using `next` pointers, prints the list, and releases allocated memory with `free`.

## Examples

| File | What it demonstrates |
| --- | --- |
| `01_create_single_node.c` | Creating, printing, and freeing one node |
| `02_create_and_traverse_list.c` | Creating a three-node list and traversing it |
| `03_insert_at_beginning.c` | Inserting a new node at the beginning of a list |
| `04_insert_at_end.c` | Inserting a new node at the end of a list |
| `05_insert_in_middle.c` | Inserting a new node after the node containing `20` |

## Compile and run

Use `gcc` to compile an example. For example:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic 05_insert_in_middle.c -o linked_list_example
./linked_list_example
```

The middle-insertion example produces this list:

```text
10 -> 20 -> 50 -> 30 -> NULL
```

## Concepts covered

- `struct node`
- Dynamic memory allocation with `malloc`
- Linking nodes with pointers
- Traversing a linked list with a temporary pointer
- Inserting nodes at the beginning, end, and middle
- Releasing memory with `free`
