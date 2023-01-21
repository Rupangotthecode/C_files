#include<stdio.h>
char *ar(int n,char arr[100])
{
    int i;
    char temp;
    for(i=0;i<(n/2);i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    return arr;
}
int main()
{
    int i=0,j;
    char array[1000];
    char *ptr,ch;
    while((ch=getchar())!='\n')
    {
        array[i]=ch;
        i++;
        array[i]='\0';
    }
    ptr=ar(i,array);
    for(j=0;j<i;j++)
    {
        printf("%c\n",ptr[j]);
    }
    return 0;
}
