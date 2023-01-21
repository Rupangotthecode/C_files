#include<stdio.h>
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
    int vc=0,cc=0;
    char *p;
    char str[100];
    input(str,100);
    p=str;
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U' ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
        {
            vc++;
        }
        else
        {
            cc++;
        }
        p++;
    }
    printf("the number of vowels are %d and the number of consonants are %d ",vc,cc);
    return 0;

}
