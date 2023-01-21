#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data)
{
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void preOrder(struct node* root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node* root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
void InOrder(struct node* root)
{
    if(root!=NULL)
    {
        InOrder(root->left);
        printf("%d ",root->data);
        InOrder(root->right);
    }
}
int main()
{
    struct node* p1=createNode(4);
    struct node* p2=createNode(1);
    struct node* p3=createNode(6);
    struct node* p4=createNode(5);
    struct node* p5=createNode(2);
    struct node* p6=createNode(1);
    struct node* p7=createNode(7);
    struct node* p8=createNode(7);
    struct node* p9=createNode(3);
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    p4->left=p8;
    p4->right=p9;
    p3->left=p6;
    p3->right=p7;
    preOrder(p1);
    printf("\n");
    postOrder(p1);
    printf("\n");
    InOrder(p1);
}