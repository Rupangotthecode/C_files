#include<stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head=NULL;
void printList()
{
    struct Node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void insertFront(int d)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        temp->next=NULL;
        temp->prev=NULL;
        temp->data=d;
        head=temp;
    }
    else
    {
        temp->next=head;
        temp->prev=NULL;
        temp->data=d;
        head->prev=temp;
        head=temp;
    }
}
void deleteFront()
{
    struct  Node* ptr=head;
    head=ptr->next;
    free(ptr);
    head->prev=NULL;
}
void insertEnd(int d)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    struct Node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    temp->data=d;
    temp->next=NULL;
}
void deleteEnd()
{
    struct Node *ptr=head;
    struct Node *ptr2;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr2=ptr->prev;
    ptr2->next=NULL;
    free(ptr);
}
void insertMiddle(int pos,int d)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    struct Node *ptr=head;
    struct Node *ptr2;
    int i;
    for(i=1;i<pos;i++)
    {
        ptr=ptr->next;
    }
    ptr2=ptr->prev;
    ptr2->next=temp;
    temp->prev=ptr2;
    temp->data=d;
    temp->next=ptr;
    ptr->prev=temp;
}
void deleteMiddle(int pos)
{
    struct Node *ptr=head;
    struct Node *ptr2,*ptr1;
    int i;
    for(i=1;i<pos;i++)
    {
        ptr=ptr->next;
    }
    ptr2=ptr->prev;
    ptr1=ptr->next;
    ptr2->next=ptr1;
    ptr1->prev=ptr2;
    free(ptr);
}
void search(int d)
{
    if(head==NULL)
    {
        printf("empty list\n");
    }
    else
    {
        struct Node *ptr=head;
        int pos=1,flag=0;
        while(ptr!=NULL)
        {
            
            if(ptr->data==d)
            {
                printf("match found at %d\n",pos);
                flag=1;
                break;
            }
            else
            {
                ptr=ptr->next;
                pos++;
            }

        }
        if(flag==0)
        {
            printf("no match found\n");
        }
    }
    
}
int main()
{
    insertFront(1);
    printList();
    printf("\n");
    insertFront(10);
    printList();
    printf("\n");
    insertEnd(100);
    printList();
    printf("\n");
    insertFront(200);
    printList();
    printf("\n");
    insertEnd(1000);
    printList();
    printf("\n");
    insertMiddle(3,20);
    printList();
    printf("\n");
    insertMiddle(2,30);
    printList();
    printf("\n");
    deleteFront();
    printList();
    printf("\n");
    deleteEnd();
    printList();
    printf("\n");
    deleteMiddle(3);
    printList();
    printf("\n");
    search(10);
    return 0;
}


