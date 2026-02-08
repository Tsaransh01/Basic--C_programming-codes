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
   for (int i=0;i<size/2;i++)
   {
    int temp=arr[i];
    arr[i]=arr[size-i-1];
    arr[size-1-i]=temp;
   }
   for (int i=0;i<size;i++)
   {
    printf(" element number %d = %d  \n",i+1,arr[i]);  
   }
   
    return 0;
}