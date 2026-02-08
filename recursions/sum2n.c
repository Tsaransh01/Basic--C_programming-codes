#include<stdio.h>
void sum(int n)
{
    if (n==0) return ;
    sum (n-1);
    printf("%d\n",(n*(n+1)/2));
    return ;
}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
    return 0;
}