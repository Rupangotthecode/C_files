#include <stdio.h>
int rar[100];
int main(void)
{
	int n,i,t;
	scanf("%d",&n);
	int array[100];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&array[i]);
	}
	int c=0,rem;
    for(i=0;i<n;i++)
    {
        while(array[i]!=0)
        {
           rem=array[i]%10;
           if(rem==4)
           {
               c++;
           }
           array[i]=array[i]/10;
        }
        rar[i]=c;
        c=0;
    }
	for(i=0;i<n;i++)
	{
	    printf("%d\n",rar[i]);
	}
	return 0;
}
