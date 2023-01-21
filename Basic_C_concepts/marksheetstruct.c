#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
struct marks
{
    char name[40];
    int marks;
};
int main()
{
    int n,i,s[40],f;
    scanf("%d",&n);
    struct marks ms[n];
    for(i=0;i<n;i++)
    {
        printf("enter the name of student %d: ",i+1);
        scanf("%s",&ms[i].name);
        printf("enter the marks of student %d: ",i+1);
        scanf("%d",&ms[i].marks);
    }
    system("cls");
    printf("enter name of student : ");
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        f=strcmp(ms[i].name,s);
        if(f==0)
        {
            printf("the marks of %s is %d.",ms[i].name,ms[i].marks);
            break;
        }
        if(i==n-1)
        {
            printf("Sorry! Please try again");
        }
    }
}
