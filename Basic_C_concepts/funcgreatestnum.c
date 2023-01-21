#include<stdio.h>

int main()
{
    int a=100,b=200000,ret;
    ret=max(a,b);
    printf("\n%d",ret);
    return 0;
}
void max(num1,num2)
{
    if(num1>num2)
    {
        printf("%d",num1);
    }
    else
    {
       printf("%d",num2);
    }

}
