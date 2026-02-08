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
   int n;
   printf("enter the number you want to search : ");
   scanf("%d",&n);
   for(int i=0;i<size;i++)
   {
      if (n==arr[i]) printf("%d is the index of the element where %d is present in the array\n",i,n);
   }

    return 0;
}
