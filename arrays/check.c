#include<stdio.h>
int main()
{
   int size;
   printf("enter the size of array : ");
   scanf("%d",&size);
   int arr[size];
   int x;
   printf("Enter the number with whom all the array elements are to be compared : ");
   scanf("%d",&x);
  
   for (int i=0;i<size;i++)
   {
    printf("enter the %dth element : ",i+1);
    scanf("%d",&arr[i]);
   }
   int check =0;
   for (int i=0;i<size;i++)
   {
    if (arr[i]>x) check=check+1;
   }
   printf(" Number of elemnts are : %d",check);
    return 0;
}