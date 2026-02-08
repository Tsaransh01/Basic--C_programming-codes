#include<stdio.h>
int max(int m,int n)
{   int max;
  if (m>n) max =m;
   else max=n;
   return max;
}
int main()
{
   int size;
   printf("enter the size of the element : ");
   scanf("%d",&size);
   int arr[size];
   for (int i=0;i<size;i++)
   {
    printf("enter the %dth element : ",i+1);
    scanf("%d",&arr[i]);
   }
   int j=arr[0];
   for (int i=1;i<size;i++)
   {
    j=max(j,arr[i]);
   }
   printf("the maximum of all the elements is %d ", j);
    return 0;
}