#include<stdio.h>

int main()
{
    int i,j,s,c=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1||j==1)
            {
                printf(" %d",c);
                c++;
            }
            else if(i==5 || j==5)
            {
                printf(" %d",c);
                c++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
