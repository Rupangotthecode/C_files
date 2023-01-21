#include<stdio.h>
int c=0;
int primefact(int num)
{
    int fact[1000];
    int rem1,rem2,i,j;
    for(i=2;i<num;i++)
    {
        rem1=num%i;
        if(rem1==0)
        {
            if(i==2)
            {
                fact[0+c]=i;
                c++;
            }
            else
            {
                for(j=2;j<i;j++)
                {
                    rem2=i%j;
                    if(rem2==0)
                    {
                        if(i!=2)
                        {
                            break;
                        }
                    }
                    if(j==i-1)
                    {
                        fact[0+c]=i;
                        c++;
                    }
                }
            }
        }
    }
    return fact;

}
int main()
{
    int *ptr,num,i;
    scanf("%d",&num);
    ptr=primefact(num);
    for(i=0;i<c;i++)
    {
        printf("%d ",ptr[i]);
    }
}
