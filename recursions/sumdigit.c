#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=0,s;
    while(n>0)
    {
        s=n%10;
        m=m+s;
        n=n/10;
    } 
    printf("%d", m) ;
      return 0;
}