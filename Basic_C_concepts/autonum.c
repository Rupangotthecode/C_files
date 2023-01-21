#include<stdio.h>
int main()
{
    int n,i,t,j;
    scanf("%d",&n);
    int marks[n];
    for(i=0;i<n;i++)
    {
        printf("enter %d\n ",i);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(marks[j]>marks[i])
            {
                t=marks[i];
                marks[i]=marks[j];
                marks[j]=t;

            }
        }
    }

    printf("%d %d",marks[0],marks[1]);
    return 0;
}
