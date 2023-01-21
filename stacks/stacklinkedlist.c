#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node* head=NULL;
struct Node* top=NULL;
void insertFirst(int d)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=d;
    temp->next=head;
    head=temp;
    if(top==NULL)
    {
        top=temp;
    }
}
void deleteFirst();