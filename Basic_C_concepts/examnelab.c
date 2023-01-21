#include<stdio.h>
int main()
{
    int n,ch,i,r,c=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("enter choice");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        for(i=2;i<n;i++)
        {
            r=n%i;
            if(r==0)
            {
                printf("not prime");
                break;
            }
        }
        if(i==n)
        {
            printf("prime");
        }
        break;
    case 2:
        for(i=1;i<=n;i++)
        {
            c=c*i;
        }
        printf("the factorial is:%d",c);
        break;
    }
    return 0;
}
