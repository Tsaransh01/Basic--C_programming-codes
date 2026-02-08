#include<stdio.h>
 int main()
{  
   int size;
   printf("enter the size of the arrays : ");
   scanf("%d",&size);
   int arr[size];
   for (int i=0;i<size;i++)
   {
    printf("enter the %dth element : ",i+1);
    scanf("%d",&arr[i]);
   }
   return 0;
}
 
 
 