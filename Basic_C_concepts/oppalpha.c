#include<stdio.h>
#include <string.h>
int input(char str[],int n)
{
    int ch,i=0;
    while((ch=getchar())!='\n')
    {
        if(i<n)
        {
            str[i++]=ch;
        }
        str[i]='\0';
    }
    return 0;
}
int main()
{
    char str[100];
    int i,l;
    l=input(str,100);
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
        printf("%s",str);

    return 0;

}
