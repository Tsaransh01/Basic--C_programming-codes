#include<stdio.h>
#include<math.h>
long cube(int n)
{
   if (n==0) return 1;
   return cube(n-1) + pow(n,3);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%ld",cube(n));
    return 0;
}