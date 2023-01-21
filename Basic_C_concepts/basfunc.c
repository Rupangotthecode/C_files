#include<stdio.h>
#include<math.h>
float area1(float n)
{
    float ar;
    ar=3.14*pow(n,2);
    return ar;
}
float area2(float n)
{
    float ar;
    ar=n*n;
    return ar;
}
int main()
{
    float a,ar1,ar2;
    scanf("%f",&a);
    ar1=area1(a);
    ar2=area2(a);
    printf("%f %f",ar1,ar2);
    return 0;
}
