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
struct student{
char name[100];
int roll ;
};
int main()
{
    char namestr[100];
    input(namestr,100);
    struct student s1;
    scanf("%d",&s1.roll);
    strcpy(s1.name,namestr);
    printf("%s\n",s1.name);
    printf("%d",s1.roll);


}
