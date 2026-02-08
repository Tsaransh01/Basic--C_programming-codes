#include<stdio.h>
void main()
{
  int n;
  printf("enter the number n\n");
  scanf("%d",&n);

  int a=0,m=n,t=n;
  while (n>0)
  {
   n=n/10;
   a++;
  }

  if (a%2==0)
  {
    int i=0;
    while (m>0)
    {
      i=i+m%10;
      m=m/100;
    }
    printf("%d",i);
  }
  else
  {
    int b=0;
    t=t/10;
    while (t>0)
    {
        b=b+t%10;
        t=t/100;
    }
    printf("%d",b);
  }

}