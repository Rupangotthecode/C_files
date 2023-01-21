#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[100];
    int i,j,n,c=0;
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
            if(array[i]<array[j])
            {
                ptr=ptr+1;
                break;
            }
            if(j==n-1)
            {

                    c++;
            }
        }
        if(c==1)
        {
            printf("%d",*ptr);
            break;
        }
    }
    return 0;
}
