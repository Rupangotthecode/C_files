#include<stdio.h>
#include<math.h>
int main()
{
    long int num,i,h,j,t,f,c=0;
    scanf("%ld",&num);
    for(i=0;i<=8;i++)
    {
        h=num/pow(10,i);
        if(h==0)
        {
            break;
        }
    }
    for(j=i-1;j>=0;j--)
    {
        f=pow(10,j);
        t=num/f;
        num=num%f;
        if(t==0)
        {
            printf("not good number");
            c++;
            break;

        }

    }
    if(j==-1 && c==0)
    {
        printf(" good number");
    }
return 0;


}
