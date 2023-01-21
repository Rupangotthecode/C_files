#include<stdio.h>
int input(char str[],int n)
{
    char ch,i=0;
    while((ch=getchar())!='\0')
    {
        if(i<n)
        {
            ch=str[i++];
        }
        str[i]='\0';
    }
    return 0;

}
int main()
{
    char str[100];
    int i;
    input(str,100);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    return 0;

}
