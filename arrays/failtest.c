#include<stdio.h>
int main()
{
    int size;
   printf("enter the size of the element : ");
   scanf("%d",&size);
   int arr[size];
   for (int i=0;i<size;i++)
   {
    printf("enter the %dth element : ",i+1);
    scanf("%d",arr[i]);
   }
   for (int i=0;i<size;i++)
   {
    if (arr[i]<33) printf("the roll number of duffer is %d", i+1);
   }
    
    return 0;
}