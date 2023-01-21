#include<stdio.h>

int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int ar[100][100];
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("enter %d %d element :",i,j);
                scanf("%d",&ar[i][j]);
            }
        }
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d ",ar[j][i]);
            }
            printf("\n");
        }



}
