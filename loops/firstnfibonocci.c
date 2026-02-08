#include<stdio.h>
int main()
{
  int n;
  printf("enter the term value  : ");
  scanf("%d",&n);
  int sum=1;
  int a=1;
  int b=1;
  printf("the fibanocci follows\n1\n1\n ");
  for (int i=0;i<=n-2;i++)
  {
  sum=a+b;
  a=b;
  b=sum;
  
  printf("%d\n", sum);
  }
  
 return 0;
}