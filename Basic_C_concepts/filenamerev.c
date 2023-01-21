#include <string.h>
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
    char name[100];
    char ch;
    printf("enter name :");
    input(name,100);
    printf("hello ");
    FILE *fp;
    fp=fopen("C:\\Users\\rupan\\OneDrive\\Documents\\c practice vscode\\name.txt","w");
    fprintf(fp,name);
    fclose(fp);
    fp=fopen("C:\\Users\\rupan\\OneDrive\\Documents\\c practice vscode\\name.txt","r");
    while(ch!=EOF)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    printf("\nyour name in reverse: ");
    fclose(fp);
    strrev(name);
    //printf("demo %s",name);
    fp=fopen("C:\\Users\\rupan\\OneDrive\\Documents\\c practice vscode\\reverse.txt","w");
    fprintf(fp,name);
    fclose(fp);
    fp=fopen("C:\\Users\\rupan\\OneDrive\\Documents\\c practice vscode\\reverse.txt","r");
    if(fp==NULL)
    {
        printf("nope");
    }
    ch=0;
   while(ch!=EOF)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
