#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void printList()
{
    struct Node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void insertNodeAtFirst(int d)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->next=head;
    temp->data=d;
    head=temp;
}
void deleteFirst()
{
    struct Node *temp=head;
    head=head->next;
    free(temp);
}
void insertAtEnd(int d)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    struct Node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    temp->data=d;
    temp->next=NULL;
    ptr->next=temp;
}
void deleteLast()
{
    struct Node *ptr=head;
    struct Node *ptr2=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    
    while(ptr2->next!=ptr)
    {
        ptr2=ptr2->next;
    }
    ptr2->next=NULL;
    free(ptr);
}
void insertAtMiddle(int d,int pos)
{
    int c=1;
    struct Node *ptr1=head;
    struct Node *ptr2;
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    while(c<pos-1)
    {
        ptr1=ptr1->next;
        c++;
    }
    ptr2=ptr1->next;
    ptr1->next=temp;
    temp->next=ptr2;
    temp->data=d;
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

int main() {
    insertNodeAtFirst(10);
    insertNodeAtFirst(20);
    insertNodeAtFirst(30);
    printList();
    deleteFirst();
    printf("\n");
    printList();
    printf("\n");
    insertAtEnd(100);
    printList();
    printf("\n");
    insertAtEnd(70);
    insertAtEnd(80);
    insertAtEnd(90);
    printList();
    printf("\n");
    deleteLast();
    printList();
    printf("\n");
    insertAtMiddle(5,3);
    printList();
    search(100);
    return 0;
}
