#include <stdio.h>
int linsearch(int *ar,int key,int n)
{
    int i,found=0,pos=-1;
    for(i=0;i<n;i++)
    {
        if(ar[i]==key)
        {
            pos=i+1;
            break;
        }
    }
    return pos;
}
int binsearch(int *ar,int key,int n)
{
    int l=0,h=n,m;
    while(l<=h)
    {
        m=(l+(h-1))/2;
        if(key==ar[m])
        {
            return m+1;
        }
        else if(key>ar[m])
        {
            l=m+1;
        }
        else if(key<ar[m])
        {
            h=m-1;
        }
    }
    return -1;
}
