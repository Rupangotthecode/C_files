#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t,n,k,i,j,m=0,o;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&k);
        int integers[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&integers[j]);
            o=abs(integers[j]-integers[j-1]);
            if(j>0)
            {
                if(o>k)
                {
                    m++;
                }
            }
        }
        if(m>0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        m=0;

    }


	return 0;
}
