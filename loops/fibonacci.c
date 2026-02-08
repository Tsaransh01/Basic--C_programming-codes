#include<stdio.h>
int main()
{
  int n;
  printf("enter the term value  : ");
  scanf("%d",&n);
  int sum=0;
  int a=1;
  int b=1;
  for (int i=0;i<=n;i++)
  {
  sum=a+b;
  b=sum;
  a=b;
  }
  printf("%d",sum);
 return 0;
}