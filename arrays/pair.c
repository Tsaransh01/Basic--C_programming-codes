#include<stdio.h>
int main()
{
   int size;
   printf("enter the size of the array : ");
   scanf("%d",&size);
   int arr[size];
   for (int i=0;i<size;i++)
   {
    printf("enter the %dth element : ",i+1);
    scanf("%d",&arr[i]);
   }
   int x;
   printf("Enter the number with whom all the array elements are to be compared : ");
   scanf("%d",&x);
   int sum=0;
   for (int i=0;i<size;i++)
   {
    for (int j=i+1;j<size/2;j++)
    {
        if((arr[i]+arr[j])==x)  sum++;
    }
   }
   printf("%d is the total number of pairs", sum);
    return 0;
}