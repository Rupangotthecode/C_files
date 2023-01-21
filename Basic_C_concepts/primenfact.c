#include<stdio.h>
int main()
{
    int n,num,i,j,t=1;
    printf("enter number");
    scanf("%d",&num);
    printf("enter choice");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
            for(i=2;i<num;i++)
            {
                j=num%i;
                if(j==0)
                {
                    printf("not prime");
                    break;
                }
                else if(i==num-1)
                {
                    printf("prime");
                }

            }
            break;
        }
    case 2:
        {
            for(i=1;i<=num;i++)
            {
                t=t*i;

            }
            printf("factorial :%d",t);
        }
        break;

    }
    return 0;

}


