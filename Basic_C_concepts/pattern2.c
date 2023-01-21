#include <stdio.h>
int main()
{
    int i,j,s=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            s++;
            printf("%d",s);

        }
        printf("\n");


    }
    return 0;
}

