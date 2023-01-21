#include<stdio.h>
#include<math.h>

int main()
{
    long int num,i,h,c=1,j,p,k,sum=0;
    printf("Enter a number");
    scanf("%ld",&num);
    for(i=1;i<=8;i++)
    {
        h=num/pow(10,c);
        if(h==0)
        {
            printf("%the number of digits is %ld\n ",c);
            break;
        }
        c++;
    }
    printf("the digits are:");
    for(j=c-1;j>=0;j--)
    {
        p=num/pow(10,j);
        printf(" %ld  ",p);
        k=pow(10,j);
        num=num%k;
        sum=sum+p;

    }
    printf("\nthe sum of the digits is %d",sum);
    return 0;
}
