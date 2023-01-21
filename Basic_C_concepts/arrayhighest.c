#include<stdio.h>

int main()
{

    int i,j,n,m;
    int ar[i][j];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&ar[i]);
        for(j=0;j<m;j++)
        {
            scanf("%d",&ar[j]);
        }
    }
    return 0;
}
