#include<stdio.h>
int odd(int num)
{
    printf("odd");
}
int even(int num)
{
    if(num%2==0)
    {
        printf("even");
    }
    else
    {
        odd(num);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    even(n);
    return 0;
}
