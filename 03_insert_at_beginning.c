#include<stdio.h>
#include<stdlib.h>


struct node 
{
// A node holds data and a pointer to the next node.
int data;
struct node *next;
};

int main(void){

struct node *head, *f, *s, *t;

// Allocate memory for four nodes.
head= malloc(sizeof(struct node));
f= malloc(sizeof(struct node));
s= malloc(sizeof(struct node));
t= malloc(sizeof(struct node));

// Store values in the four nodes.
head->data = 10;
f->data = 20;
s->data = 30;
t->data = 40;

// Link the nodes: 10 -> 20 -> 30 -> 40 -> NULL.
head->next = f;
f->next = s;
s->next = t;
t->next = NULL;




struct node *temp=head;
printf("before insertion of node the list is .....\n");
// Traverse and print every node in the original list.
while (temp != NULL)
{
printf("data is %d\n",temp->data);
temp=temp->next;
}



struct node *newnode;

// Create a new node that will become the first node.
newnode= malloc(sizeof(struct node));
newnode->data = 50;

// Point the new node to the old first node, then update head.
newnode->next = head;
head = newnode;

struct node *tmp=head;
printf("after insertion of node the list is .....\n");
// Traverse and print the list after insertion.
while (tmp != NULL)
{
printf("data is %d\n",tmp->data);
tmp=tmp->next;
}

// Free the memory used by all five nodes.
free(t);
free(s);
free(f);
free(head);

return 0;


}
