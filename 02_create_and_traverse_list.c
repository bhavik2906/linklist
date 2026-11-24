#include<stdio.h>
#include<stdlib.h>

struct node
{
// A node contains data and the address of the next node.
int data;
struct node *next;
};

int main(void)
{

struct node *head, *second, *third;

// Allocate memory for three nodes.
head = malloc(sizeof(struct node));
second = malloc(sizeof(struct node));
third = malloc(sizeof(struct node));

// Store a value in each node.
head->data = 10;
second->data = 20;
third->data = 30;

// Link the nodes: 10 -> 20 -> 30 -> NULL.
head->next = second;
second->next = third;
third->next = NULL;

// Start traversal from the first node.
struct node *temp = head;


//printf("data is %d\n",temp->data);


while(temp != NULL)
{
// Print the current node, then move to the next node.
printf("data is %d\n",temp->data);
temp=temp->next;
}

// Free the memory used by all three nodes.
free(third);
free(second);
free(head);

return 0;
}
