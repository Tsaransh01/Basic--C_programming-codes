#include<stdio.h>
int main()
{
    int n;
    //n=number of the rows
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
     if (i==1||i==n)
     {
        for (int j=1;j<=n+1;j++)
        {
            printf("*");
        }
        printf("\n");
     }
     else 
     {
      printf("*");
      for (int k=1;k<=n-1;k++)
      {
        printf(" ");
      }
      printf("*");

      printf("\n");
     }

    }
    return 0;
}