#include<stdio.h>
int main()
{
 int n;
 //n=number of the rows;
 scanf("%d",&n);
 
 for(int i=1;i<=n;i++)
 { 
   for (int k=1;k<=n-i;k++)
   {
   printf("  ");
   }
   int a=1;
   for(int j=1;j<=2*i-1;j++)
   {
    printf("%c ",(char)(64+a));
    a++;
   }
   printf("\n");
 }
    return 0;
}