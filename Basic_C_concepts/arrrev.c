#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size-");
    scanf("%d",&n);
    int arr[n],rar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rar[i]=arr[n-1-i];
        printf("%d ",rar[i]);
    }
    return 0;
}
