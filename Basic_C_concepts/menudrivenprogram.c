#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch,a,i;
    printf("Enter your choice :\n1 Factorial\n2 prime\n3 odd/even\n4 exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
       case 1:
           printf("Enter your number=");
           scanf("%d",&a);
           for(i=a;i>=2;i--)
           {
               a=a*(i-1);
           }
           printf("%d",a);
           break;
       case 2:
           printf("Enter your number=");
           scanf("%d",&a);
           for(i=2;i<a;i++)
           {
               if(a%i==0)
               {

                printf("not a prime");
               break;
               }
               else if(i==a-1)
               {
                   printf("prime ");
               }

           }
           break;
       case 3:
           printf("Enter your number=");
           scanf("%d",&a);
           if(a%2==0)
           {
               printf("even");
           }
           else
           {
               printf("odd");
           }
           break;
       case 4:

            printf("are you dumb bruh:/");
            break;

    }
    return 0;


    }

