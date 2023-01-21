#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node *head=NULL;
void printList()
{
    struct Node *ptr=head;
    if(ptr==NULL)
    {
        printf("empty list\n");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
       
        printf("\n");
    }
}
void insertFront(int d)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        temp->data=d;
        temp->prev=NULL;
        temp->next=head;
        head=temp;
    }
    else
    {
        temp->data=d;
        temp->prev=NULL;
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void deleteFront()
{
    struct Node* ptr=head;
    if(head->next!=NULL)
    {
        head=head->next;
        free(ptr);
        head->prev=NULL;
    }
    else if(head==NULL)
    {
        printf("empty list\n");
    }
    else{
        head=head->next;
        free(ptr);
    }
}
void insertEnd(int d)
{
    struct Node* ptr=head;
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        temp->data=d;
        temp->prev=NULL;
        temp->next=head;
        head=temp;
    }
    else{
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        temp->data=d;
        temp->prev=ptr;
        temp->next=NULL;
        ptr->next=temp;
    }
}
void deleteEnd()
{
    struct Node* ptr=head;
    struct Node* ptr2=head;
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node)); 
    if(ptr==NULL)
    {
        printf("empty list\n");
    }
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr2=ptr->prev;
        ptr2->next=NULL;
        free(ptr);
    }
}
void insertMiddle(int d,int pos)
{
    struct Node* ptr=head;
    struct Node* ptr2;
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node)); 
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
    struct Node* ptr1=head;
    struct Node* ptr2=head;
    struct Node* ptr3=head;
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node)); 
    int i;
    for(i=1;i<pos;i++)
    {
        ptr1=ptr1->next;
    }
    ptr2=ptr1->next;
    ptr3=ptr2->next;
    free(ptr2);
    ptr1->next=ptr3;
    ptr3->prev=ptr1;   
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