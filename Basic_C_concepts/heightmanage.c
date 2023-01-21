#include<stdio.h>
int rar[10];
int htmng(int mar[100],int far[100])
{

    int i,j,t;
    for(i=0;i<5;i++)
    {
        rar[i]=mar[i];
    }
    for(i=5;i<10;i++)
    {
        rar[i]=far[i-5];
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(rar[j]<rar[i])
            {
                t=rar[i];
                rar[i]=rar[j];
                rar[j]=t;
            }
        }
    }
    return rar;
}


int main()
{
    int mar[5],far[5];
    int i,j,*ptr;
    for(i=0;i<5;i++)
    {
        printf("height of %d man",i);
        scanf("%d",&mar[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("height of %d woman",i);
        scanf("%d",&far[i]);
    }
    ptr=htmng(mar,far);
    printf("sorted heights:");
     for(j=0;j<10;j++)
    {
        printf("%d ",ptr[j]);
    }
}
