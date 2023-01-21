#include <stdio.h>

void trtype(int a,int b,int c)
{
    if(a==b && b==c)
    {
        printf("equilateral");
    }
    else if(a==b && b!=c)
    {
        printf("isosceles");
    }
    else if(a==c && a!=b)
    {
        printf("isosceles");
    }
    else if(b==c && b!=a)
    {
        printf("isosceles");
    }
    else
    {
        printf("scalene");
    }

}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    trtype(a,b,c);
    return 0;
}
