#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node* head=NULL;
void printList()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp->next;
    }
}
void insertB(int d)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=head;
    head=newnode;
    newnode->data=d;
    newnode->prev=NULL;
}
void insertE(int d)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *temp=head;
    newnode->next=NULL;
    newnode->data=d;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
void insertm(int d,int pos)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    struct node* temp=head;
    int i;
    for(i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->data=d;
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    temp=newnode->next;
    temp->prev=newnode;
}
void deleteB()
{
    struct node* temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}
void deleteE()
{
    struct node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    struct node* ptr=head;
    while(ptr->next=temp)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
    free(temp);
}
void deleteM(int pos)
{
    struct node *ptr1=head,*ptr2=head;
    struct node* temp;
    int i;
    for(i=0;i<pos-1;i++)
    {
        ptr1=ptr1->next;
    }
    for(i=0;i<pos;i++)
    {
        ptr2=ptr2->next;
    }
    ptr1->next=ptr2->next;
    temp=ptr2->next;
    temp->prev=ptr1;
    free(ptr2);
}
int main()
{
   
}
