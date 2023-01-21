#include<stdio.h>
int main()
{
    int s1,s2,i;
    printf("enter the sizes respectively");
    scanf("%d %d",&s1,&s2);
    int ar1[s1],ar2[s2],rar[s1+s2];
    printf("enter s1 values");
    for(i=0;i<s1;i++)
    {
        scanf("%d",&ar1[i]);
    }
    printf("enter s2 values");
    for(i=0;i<s2;i++)
    {
        scanf("%d",&ar2[i]);
    }
    for(i=0;i<=s1;i++)
    {
        rar[s1+s2-i]=ar1[i-1];
    }
    for(i=s2-1;i>=0;i--)
    {
        rar[i]=ar2[s2-i-1];
    }
    for(i=0;i<s1+s2;i++)
    {
        printf("%d ",rar[i]);
    }
    return 0;
}
