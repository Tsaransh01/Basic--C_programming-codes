#include<stdio.h>
int main()
{
   int i,n=1;

   printf("enter the value of n\n");
   scanf("%d",&n);

   for (i=n;i>=1;i--)
   {
    int sum=n*(n+1)/2;
    sum=sum-i;
    printf("%d\n", sum);    

   }


    return 0;
}