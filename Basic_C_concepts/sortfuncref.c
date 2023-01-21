#include<stdio.h>
int sort(int n,int array[n])
{
    int t,i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                t=array[i];
                array[i]=array[j];
                array[j]=t;
            }
        }
    }
    return 0;
}
int main()
{
    int array[100];
    int i,j,n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter %d element",i);
        scanf("%d",&array[i]);
    }
    sort(n,array);
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }

}
