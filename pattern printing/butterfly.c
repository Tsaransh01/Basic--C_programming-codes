#include<stdio.h>
int main()
{
 int n;
 char c='*';
 scanf("%d",&n);
 for (int i=1;i<=n/2;i++)
 {
    for (int j=1;j<=i;j++)
    {
        printf("%c ",c);
    }
    for(int k=1;k<=n-2*i;k++)
    {
        printf("  ");
    }
    for (int l=1;l<=i;l++)
    {
        printf("%c ", c);
    }
    printf("\n");
 }
 for (int i=1;i<=n;i++) 
 {
    printf("%c ", c);
 }
 printf("\n");
 for (int i=n/2;i>=1;i--)
 {
    for (int j=i;j>=1;j--)
    {
        printf("%c ", c);
    }
    for (int k=n-2*i;k>=1;k--)
    {
        printf("  ");
    }
    for (int j=i;j>=1;j--)
    {
        printf("%c ",c);
    }
    printf("\n");
 }
    return 0;
}