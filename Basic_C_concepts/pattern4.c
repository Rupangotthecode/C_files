#include <stdio.h>

int main()
{
    int i,j,n=-1,s,a,b,c;
    for(i=1;i<=4;i++)
    {
        for(s=0;s<=4-i;s++)
        {
            printf("  ");
        }
        n=n+2;
        for(j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");


    }
    for(a=1;a<=4;a++)
    {
        for(c=0;c<=a;c++)
        {
            printf("  ");
        }
        n=n-2;
        for(b=1;b<=n;b++)
        {
            printf("%d ",b);
        }
        printf("\n");


    }
    return 0;
}
