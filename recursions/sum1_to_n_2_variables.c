#include<stdio.h>
void print(int x,int n,int sum)
{
    if ((sum+x)>(n*(n+1)/2)) return ;
    sum=sum+x;
    printf("%d\n", sum);
    print(x+1,n,sum);
    return ;
}
int main()
{  int n;
   scanf("%d",&n);
   print(1,n,0);
    return 0;
}