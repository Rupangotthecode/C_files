#include <stdio.h>

int main() {
	int t,n,i,c=0,b;
	scanf("%d",&t);
	int a[100];
	while(t!=0)
	{
	    scanf("%d",&n);
	    a[0]=0;
	    for(i=1;i<(n+1);i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    i=0;
	    while(i<n)
	    {
	        scanf("%d",&b);
	        if((a[i+1]-a[i])>=b)
	        {
	            c++;
	        }
	        i++;
	    }
	    printf("%d",c);
	    c=0;
	    t--;
	}
	return 0;
}
