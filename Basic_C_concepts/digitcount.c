#include <stdio.h>
#include<math.h>

int main()
{

    long int num,i,h;
    scanf("%d",&num);
    for(i=1;i<=8;i++)
    {
        h=num/pow(10,i);
        if(h==0)
        {
            printf("%d ",i);
            break;
        }

    }
    return 0;
}
