#include<stdio.h>

struct student{
char name[20];
int marks[3];
}st[100];
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter name: ");
        scanf("%s",st[i].name);
        for(j=0;j<3;j++)
        {
            printf("enter marks %d",j);
            scanf("%d",&st[i].marks[j]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf(" name: %s",st[i].name);
        for(j=0;j<3;j++)
        {
            printf("%d",st[i].marks[j]);
        }
    }
}
