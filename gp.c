#include<stdio.h>
int main()
{
  int n,m;
  //m=common ration and n=number of terms
  printf("enter the value of n and m \n");
  scanf("%d%d",&n,&m);

  for (int i=1,a=100;i<=n;i++)
   {
    a=a/m;
    printf(" %d \n",a);
     
   }
    return 0;
}