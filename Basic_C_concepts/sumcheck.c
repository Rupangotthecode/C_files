#include <stdio.h>
#include<math.h>

int main()
{
    int i,j,n,s,sum=0,c=1,h,p,k,f,m,u=1;
    printf("number of digits=");

    scanf("%d",&n);
    printf("sum=");
    scanf("%d",&s);
    f=pow(10,n)-1;
    for(m=f;m>=1;m--)
    {

        for(i=1;i<=8;i++)
        {
            h=m/pow(10,c);
            if(h==0)
            {
                break;
            }
            c++;
        }
        for(j=c-1;j>=0;j--)
        {
            p=m/pow(10,j);
            k=pow(10,j);
            m=m%k;
            sum=sum+p;
        }
        if(sum==s)
        {
            printf("the number is %d\n",f-u);
            break;
        }
        else
        {
            printf("%d\n",sum);
            u++;
        }
        m=f-u;
        printf("%d\n",m);
    }
    return 0;


}
