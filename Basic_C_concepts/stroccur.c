#include<stdio.h>
#include <string.h>
int input(char str[],int n)
{
    int ch,i=0;
    while ((ch = getchar())!='\n')
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
    int z,n,t;
    char c;
    char str[200];
    z=input(str,200);
    scanf("%c",&c);
    int i,count=0,l=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==c)
        {
            count++;

        }
    }
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==c)
        {
            l++;
            if(l==1)
            {
                printf("the first occurence is %d\n",i+1);
            }
            else if(l==count)
            {
                printf("the last occurence is %d",i+1);
            }

        }
    }

    return 0;
}
