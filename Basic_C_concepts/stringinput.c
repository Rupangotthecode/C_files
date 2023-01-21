#include<stdio.h>
int main()
{
    int n,i;
    char str[7];
    for(i=0;i<=7;i++)
    {
       n=getchar();
       str[i]=n;
    }
    for(i=0;i<=7;i++)
    {
        printf("%c\n",str[i]);
    }
    return 0;
}
