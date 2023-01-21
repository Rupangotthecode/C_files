#include<stdio.h>
int main()
{
    int i,j,k=1,s;
    for(i=0;i<5;i++)
    {
        for(s=1;s<=5-i;s++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(i==0 || j==0)
            {
                k=1;
            }
            else
            {
                k=k*(i-j+1)/j;
            }
            printf(" %d",k);

        }
        printf("\n");
    }
    return 0;
}
