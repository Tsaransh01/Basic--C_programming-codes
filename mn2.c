#include<stdio.h>
int main()
{
   int m,n;
   printf("enter the value of m,n resoectively\n");
   scanf("%d%d",&m,&n);

   int i=1;
   while(i<=n)
   {
    i++;
    
    if (i==m)
    {
        continue;
    }
   printf("%d ",i);

   }
   
return 0;
}