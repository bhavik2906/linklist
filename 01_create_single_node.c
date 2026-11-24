#include<stdio.h>
#include<stdlib.h>



struct node
{
/* Each node stores one integer and a pointer to the next node. */
int data;
struct node *next;
};




int main(void)
{

struct node *head;

// Allocate memory for one linked-list node.
head=malloc(sizeof(struct node));

// Store data in the node and mark it as the last node.
head->data =10;
head->next =NULL;

// Print the value stored in the node.
printf("data in node is %d\n",head->data);

// Release the memory allocated for the node.
free(head);

return 0;

}
