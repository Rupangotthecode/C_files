#include <stdio.h>
#include<stdlib.h>
int count=0;
struct stack{
    int items[10];
    int top;
};
typedef struct stack st;
void createStack(st *s)
{
    s->top=-1;
}
int isFull(st *s)
{
    if(s->top==9)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(st *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push(st *s,int it)
{
    if(isFull(s)==1)
    {
        printf("Stack overflow!\n");
    }
    else{
        s->top++;
        s->items[s->top]=it;
        count++;
    }
}
void pop(st *s)
{
    if(isEmpty(s)==1)
    {
        printf("Stack underflow!\n");
    }
    else{
        s->top--;
        count--;
    }
}
void disp(st *s)
{
    int i;
    printf("Stack: ");
    for(i=0;i<count;i++)
    {
        printf("%d ",s->items[i]);
    }
    printf("\n");
}
void search(st *s,int sr)
{
    int i,flag=0;
    for(i=0;i<count;i++)
    {
        if(s->items[i]==sr)
        {
            printf("object found at: %d\n",i);
            break;
            flag=1;
        }
        if(flag==0)
        {
            printf("not found!\n");
        }
    }
}
int main()
{
    st *s1=(st*)malloc(sizeof(st));
    createStack(s1);
    push(s1,1);
    push(s1,2);
    push(s1,3);
    push(s1,4);
    push(s1,5);
    disp(s1);
    pop(s1);
    disp(s1);
    return 0;
}
