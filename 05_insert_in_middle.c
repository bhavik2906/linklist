#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* Store one value in this node. */
    int data;

    /* Store the address of the next node in the list. */
    struct node *next;
};

int main(void)
{
    /* Declare pointers for the first three nodes in the list. */
    struct node *head, *first, *second;

    /* Allocate memory for each of the original three nodes. */
    head = malloc(sizeof(struct node));
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));

    /* Put a value into each node. */
    head->data = 10;
    first->data = 20;
    second->data = 30;

    /* Link the nodes: 10 -> 20 -> 30 -> NULL. */
    head->next = first;
    first->next = second;
    second->next = NULL;

    /* Start at the first node so that we can print the original list. */
    struct node *temp = head;
    printf("Before insertion data is....\n");

    /* Print the current node, then move temp to the next node. */
    while (temp != NULL)
    {
        printf("Data is %d\n", temp->data);
        temp = temp->next;
    }

    /* Allocate memory for the new node that will be inserted. */
    struct node *newnode = malloc(sizeof(struct node));

    /* Store 50 in the new node. */
    newnode->data = 50;

    /* Begin searching again from the first node. */
    temp = head;

    /* Move temp until it reaches the node containing 20. */
    while (temp != NULL && temp->data != 20)
    {
        temp = temp->next;
    }

    /* Make 50 point to the node that currently comes after 20 (node 30). */
    newnode->next = temp->next;

    /* Make 20 point to 50. The list is now 10 -> 20 -> 50 -> 30 -> NULL. */
    temp->next = newnode;

    /* Start from the first node again to print the updated list. */
    temp = head;
    printf("after insertion data is....\n");

    /* Print every node in the updated list. */
    while (temp != NULL)
    {
        printf("Data is %d\n", temp->data);
        temp = temp->next;
    }

    /* Free the memory used by all four nodes. */
    free(newnode);
    free(second);
    free(first);
    free(head);

    return 0;
}
