#include<stdio.h>
int minimum(int a,int b)
{
  int mini;
  if (a>b) mini =b;
  else mini= a;
 return mini;
}
int main()

{
    int n;
    //n=number of the rows ;
    scanf("%d",&n);
    printf("\n\n\n\n");
    
    for (int i=1;i<=2*n-1;i++)
    { 
      int min=0;
      for (int j=1;j<=2*n-1;j++)
      {
      int a;
      int b;
      if (i>n) a=2*n-i;
      else a=i;
      if (j>n) b=2*n-j;
      else b=j;
      min=minimum(a,b);
      printf("%d ", n+1-min);
      }
      printf("\n");
    }
    
    return 0;
}