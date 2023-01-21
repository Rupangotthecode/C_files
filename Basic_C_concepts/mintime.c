#include <stdio.h>
int main()
{
    int t,n,x[100002],y[100002];
    int i=1,j,s=0;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d ",&x[j]);
        }
        printf("\n");
        for(j=0;j<n;j++)
        {
            scanf("%d ",&y[j]);
        }
        for(j=0;j<n;j++)
        {
            if(x[j]>y[j])
            {
               s=s+y[j];
            }
            else if(x[j]<y[j])
            {
                s=s+x[j];
            }
        }
        printf("%d",s);
        i++;
    }

	return 0;
}
