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
    int x;
   printf("Enter the number with whom all the array elements are to be compared : ");
   scanf("%d",&x);
   for (int i=0;i<size ;i++)
   {
    for (int j=i+1;j<size;j++)
    {
        for (int k=j+1;k<size;k++)
        if ((arr[i]+arr[j]+arr[k])==x) printf("(%d,%d,%d) is the triplet whose sum is equal to %d\n",arr[i],arr[j],arr[k],x);
    }
   }
    return 0;
}