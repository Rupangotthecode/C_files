#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");

    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}