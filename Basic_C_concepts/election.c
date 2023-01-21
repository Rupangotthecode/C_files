#include<stdio.h>

int maxfreq(int array[],int n)
{
    int i,j,count=1,maxcount=0,maxel;
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;i++)
        {
            if(array[i]==array[j])
            {
                count++;
                if(count>maxcount)
                {
                    maxel=array[j];
                    maxcount=count;
                }
            }
            count=1;
        }
    }
    return maxel;
}
int main()
{
    int n,wincan,i;
    printf("enter the number of ballot papers ");
    scanf("%d",&n);
    int cand[n];
    printf("enter the vote on each papaer ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&cand[i]);
    }
    wincan=maxfreq(cand,n);
    printf("the winning candidate is %d",wincan);
    return 0;
}
