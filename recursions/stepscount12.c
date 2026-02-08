#include<stdio.h>
long int count(int n)
{
    if (n<=2) return n;
    return count(n-1)+count(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("the number of ways = %ld ", count(n));
    return 0;
}