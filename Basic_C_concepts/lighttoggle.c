#include <stdio.h>
int main()
{
    int lights[100001];
    int i,n,q,j;
    int l[100],r[100];
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&lights[i]);
    }
    for(i=0;i<q;i++)
    {
        scanf("%d %d\n",&l[i],&r[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            if(i>=(l[j]-1) && i<=(r[j]-1))
        {
            printf("e ");
            if(lights[i]==0)
            {
                lights[i]=1;
            }
            else
            {
                lights[i]=0;
            }
        }
        }
        printf("%d ",lights[i]);
    }

	return 0;
}
