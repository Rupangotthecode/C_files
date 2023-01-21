#include<stdio.h>
int i=2;
int array[100];
int fibonacci(int n)
{
    array[0]=1;
    array[1]=1;
    if(i<n)
    {
       array[i]=array[i-1]+array[i-2];
       i++;
       fibonacci(n);
    }
    else
    {
        return array;
    }
}
int main()
{
    int num,j,*ptr;
    scanf("%d",&num);
    ptr=fibonacci(num);
    for(i=0;i<num;i++)
    {
        printf("%d ",ptr[i]);
    }
    return 0;
}
