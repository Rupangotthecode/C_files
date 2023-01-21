#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[100];
    int i,j,num=0,n;
    int *ptr;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter %d element",i);
        scanf("%d",&array[i]);
    }
    ptr=array;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ptr[i]<ptr[j])
            {
                break;
            }
            if(j==n-1)
            {
                num=ptr[i];
                printf("%d",num);
            }
        }
        if(num!=0)
        {
            break;
        }
    }
    return 0;
}
