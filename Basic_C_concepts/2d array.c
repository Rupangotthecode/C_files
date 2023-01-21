#include<stdio.h>

int main()
{
    int a[3][2]={
    {1,4},
    {5,2},
    {6,5}
    };
    int i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
