#include<stdio.h>
int main()
{
   int n ;
   printf("enter the number n : \n");
   //for storage issue of the int datatype give input only for n <=16 ;
   scanf("%d", &n);

   int fact=1;
   for (int i=1;i<=n;i++)
   { 
     fact = fact*i;
     

     if (fact<0)
     {
        break;
     }
  

   }
    
    printf("%d",fact);

    return 0;
}