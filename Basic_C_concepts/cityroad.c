#include <stdio.h>
#include <math.h>

int main(void) {
    int t,a,b,i,res;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d%d",&a,&b);
        res=a-b;
        if(abs(res)==2)
        {
            printf("Yes\n");
        }
        else if(abs(res)==1)
        {
            for(i=0;i<=a+b;i++)
            {
                if(a==(2*i)+1 && b==(2*i)+2)
                {
                    printf("yes\n");
                    break;
                }
                 else if(b==(2*i)+1 && a==(2*i)+2)
                {
                    printf("yes.\n");
                    break;
                }
                if(i==a+b)
                {
                    printf("no8");
                }

            }
        }
        else
        {
            printf("no\n");
        }

        t--;
    }

	return 0;
}
