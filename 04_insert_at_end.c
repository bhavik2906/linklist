#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* Store one integer value in the node. */
    int data;

    /* Store the address of the next node in the list. */
    struct node *next;
};

int main(void)
{
    struct node *head, *first, *second, *third;

    /* Create the original four nodes. */
    head = malloc(sizeof(struct node));
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    /* Store data in each node. */
    head->data = 10;
    first->data = 20;
    second->data = 30;
    third->data = 40;

    /* Link the nodes: 10 -> 20 -> 30 -> 40 -> NULL */
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    /* Print the list before inserting the new node. */
    struct node *temp = head;
    printf("Before insertion at the end:\n");
    while (temp != NULL)
    {
        printf("data is %d\n", temp->data);
        temp = temp->next;
    }

    /* Create the new node that will be added at the end. */
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = 50;
    newnode->next = NULL;

    /*
       Move temp to the current last node (the node whose next is NULL).
       Then connect that last node to newnode.
    */
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;

    /* Print the list after insertion: 10 -> 20 -> 30 -> 40 -> 50 */
    temp = head;
    printf("After insertion at the end:\n");
    while (temp != NULL)
    {
        printf("data is %d\n", temp->data);
        temp = temp->next;
    }

    /* Free the memory used by all five nodes. */
    free(newnode);
    free(third);
    free(second);
    free(first);
    free(head);

    return 0;
}
