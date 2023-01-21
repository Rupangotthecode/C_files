#include <stdio.h>

int main()
{
  printf("hello world");
  int a,i;
  scanf("%d",&a);
  for(i=1;i<=10;i++)
  {
    printf("%d",a*i);
  }
  return 0;
}