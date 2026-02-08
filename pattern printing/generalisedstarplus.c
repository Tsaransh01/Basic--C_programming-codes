#include<stdio.h>
int main ()
{
  int n;
  scanf("%d",&n);
  //n=number of the rows
  for(int i=1;i<=n;i++)
  {
   if (i==(n+1)/2)
   {
    for(int j=1;j<=n;j++)
    {
      printf("*");
    } 
    printf("\n");
   }
    else 
    {
      for (int k=1;k<(n+1)/2;k++)
      {
        printf(" ");
      }
      printf("*");
      for (int l=1;l<(n+1)/2;l++)
      {
        printf(" ");
      }
      printf("\n");
      
    }
  }
}