#include<stdio.h>
int main()
{
    int n,sum=0;
    printf ("enter the value of  the variable n\n");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
     sum=sum+i;
     printf("%d \n", sum);
    }

    printf("and\n");

    for ( int j=n*(n+1)/2;j>=1;j--)
    {
     printf ("%d ",j);
    }

    return 0;
}