#include<stdio.h>
int main()
{
    int n;
    //2n+1=number of rows
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%d ", j);
        }
        for (int l=i-1;l>=1;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
    for (int m=n-1;m>=1;m--)
    {
         for (int k=1;k<=n-m;k++)
        {
            printf("  ");
        }
        for (int j=1;j<=m;j++)
        {
         printf("%d ", j);
        }
        for (int l=m-1;l>=1;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
    return 0;
}