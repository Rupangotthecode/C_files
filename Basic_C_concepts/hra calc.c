#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hra(int num)
{
    int res=10*num/100;
    return res;
}
int main()
{
    int bsal;
    scanf("%d",&bsal);
    printf("%d",hra(bsal));
    return 0;
}
