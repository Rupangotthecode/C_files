#include<stdio.h>
int main(){
    int x=1;
    int n=10;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            int ans = x++;
            printf("%d ",ans);
        }
    }
    return 0;
}
