#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct custdet
{
    char name[40];
    char accnum[40];
    int accbal;
}cd[20];
int viewall(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d.Account Name-%s\nAccount Number-%s\nAccount Balance-%d",i+1,cd[i].name,cd[i].accnum,cd[i].accbal);
    }
}
int addnew(int n)
{
    int i;
    char v;
    for(i=0;i<n;i++)
    {
        printf("add?y/n");
        scanf("%c",&v);
        if(v=='y')
        {
            printf("%d.customer name",i+1);
            scanf("%s",&cd[i].name);
            printf("%d.customer num",i+1);
            scanf("%s",&cd[i].accnum);
            printf("%d.customer bal",i+1);
            scanf("%d",&cd[i].accbal);
        }
        else
        {
            break;
        }
    }
}
int dep(int n)
{
    char str[40];
    int val,i,depam;
    printf("enter customer account number: ");
    scanf("%s",str);
    printf("enter the deposit amount:");
    scanf("%d",&depam);
    for(i=0;i<n;i++)
    {
        val=strcmp(str,cd[i].accnum);
        if(val==0)
        {
            cd[i].accbal=cd[i].accbal+depam;
            printf("deposit successful!!/nAccount balance-%d",cd[i].accbal);
            break;
        }
        if(i==n-1)
        {
            printf("Sorry!Please try again");
        }
    }
}
int with(int n)
{
    char str[40];
    int val,i,witam;
    printf("enter customer account number: ");
    scanf("%s",str);
    printf("enter the withdrawal amount:");
    scanf("%d",&witam);
    for(i=0;i<n;i++)
    {
        val=strcmp(str,cd[i].accnum);
        if(val==0)
        {
            cd[i].accbal=cd[i].accbal-witam;
            printf("withdrawal successful!!/nAccount balance-%d",cd[i].accbal);
            break;
        }
        if(i==n-1)
        {
            printf("Sorry!Please try again");
        }
    }
}
int search(int n)
{
    char str[40];
    int val,i,witam;
    printf("enter customer account name: ");
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
        val=strcmp(str,cd[i].accnum);
        if(val==0)
        {
            printf("%d.Account Name-%s\nAccount Number-%s\nAccount Balance-%d",i+1,cd[i].name,cd[i].accnum,cd[i].accbal);
        }
        if(i==n-1)
        {
            printf("Sorry!Please try again");
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of customers to be inputted: ");
    scanf("%d",n);
    struct custdet cd[n];
    printf("---Welcome to banking system---");
    printf("Enter an option:\n1.Add New Customer\n2.View All Customers\n3.Search\n4.Deposit\n5.Withdraw\n6.Exit");

}
