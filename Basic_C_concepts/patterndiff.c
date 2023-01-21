#include<stdio.h>
int main()
{
    int n,i,j,c,k;

    scanf("%d",&n);
    int ar[n][n];

    c=n;
    for(k=n;k>0;k--)
    {
        for(i=n-k;i<k;i++)
        {
            for(j=n-k;j<k;j++)
            {
                ar[i][j]=c;
            }
        }
        c--;
    }
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",ar[i][j]);
            }
            printf("\n");
        }

     return 0;


}
