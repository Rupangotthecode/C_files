#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    int i=0,j=0;
    char ch;
    char alpha[20],num[20];
    printf("file content : ");
    fp=fopen("C:\\Users\\rupan\\OneDrive\\Documents\\c practice vscode\\input.txt","r");
    while(ch!=EOF)
    {
        ch=fgetc(fp);
        printf("%c",ch);
        if(ch>=48 && ch<=57)
        {
            num[i]=ch;
            i++;
        }
        else if(ch>=65 && ch<=90)
        {
            alpha[j]=ch;
            j++;
        }
        else if(ch>=97 && ch<=122)
        {
            alpha[j]=ch;
            j++;
        }
    }
    ch=0;
    fclose(fp);
    fp=fopen("C:\\Users\\rupan\\OneDrive\\Documents\\c practice vscode\\number.txt","w");
    fprintf(fp,"%s",num);
    fclose(fp);
    printf("\nthe numbers are: ");
    fp=fopen("C:\\Users\\rupan\\OneDrive\\Documents\\c practice vscode\\number.txt","r");
    while(ch!=EOF)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    fp=fopen("C:\\Users\\rupan\\OneDrive\\Documents\\c practice vscode\\alphabet.txt","w");
    fprintf(fp,"%s",alpha);
    fclose(fp);
    fp=fopen("C:\\Users\\rupan\\OneDrive\\Documents\\c practice vscode\\alphabet.txt","r");
    ch=0;
    printf("\nthe alphabets are: ");
    while(ch!=EOF)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);



}
