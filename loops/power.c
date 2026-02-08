#include<stdio.h>
int main()
{
    int a,b,t;
    //a=base, b=power
    printf("enter the value of a,b\n");
    scanf("%d%d",&a,&b);
    t=a;
    for (int i=1;i<=b;i++)
    {
      a=a*t;
    }
    printf("%d",a);
    return 0;
}