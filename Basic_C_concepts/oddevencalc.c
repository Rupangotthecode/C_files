#include<stdio.h>

int main()
{
    int n,i,sume=0,sumo=0;
    printf("enter the number of slots:");
    scanf("%d",&n);
    int array[n];
    printf("enter the numbers one by one");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sumo=sumo+array[i];
        }
        else
        {
            sume=sume+array[i];
        }
    }
    printf("the sum of numbers in the even slots are :%d\n",sume);
    printf("the sum of numbers in the odd slots are :%d\n",sumo);
    return 0;

}
