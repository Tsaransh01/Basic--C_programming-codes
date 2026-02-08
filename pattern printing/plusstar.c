#include<stdio.h>
int main()
{
   int n;
   printf("enter the number of row : ");
   scanf("%d",&n);

   for (int i=1;i<=n;i++)
   {
     if (i%3==0)
     {
      for (int j=1;j<=5;j++)
      {
        printf("*");
      }
      printf("\n");
    }
    else
    {
        for(int k=1;k<=2;k++)
        {
            printf(" ");
        }
        printf("*");
        for (int p=1;p<=2;p++)
        {
            printf(" ");
        }
        printf("\n");
    }
   }   



    return 0;
}