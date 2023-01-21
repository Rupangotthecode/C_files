#include<stdio.h>

int main()
{
    int i,j,m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("the value of ar[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d" ,a[i][j]*10);
        }
        printf("\n");
    }
    

    
    return 0;


}