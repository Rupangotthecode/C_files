#include<stdio.h>

void insertion_sort(int a[],int n)
{
   int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}

void bubble_sort(int ar[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i;
    int ar[]={2,5,1,4,7,3,9,8};
    
    bubble_sort(ar,8);
    for(i=0;i<8;i++)
    {
        printf("%d ",ar[i]);
    }
}