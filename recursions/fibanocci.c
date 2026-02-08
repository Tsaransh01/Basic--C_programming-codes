#include<stdio.h>
long fibo(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    return fibo(n-1)+fibo(n-2);
}
long main()
{   
    int n;
    printf("enter the value  of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}