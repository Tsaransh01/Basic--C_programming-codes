#include<stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
   
    int i=0;int m=0;
    while (n>0)
    {
    i=i+n%10;
    m=m+i*10;
    n=n/10;
    }

    return 0;
}