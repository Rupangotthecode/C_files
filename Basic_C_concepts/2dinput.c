#include<stdio.h>

int main()
{

    int i,j,m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;j++)
        {
            printf("enter %d %d element:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
