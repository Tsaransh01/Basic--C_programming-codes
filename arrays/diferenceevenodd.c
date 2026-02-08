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
    scanf("%d",&arr[i]);
   }
   int a=arr[0];
   int b=arr[1];
   for (int i=0;i<size;i++)
   {
    if (i%2==0) a=a+arr[i];
    else b=b+arr[i];
   }
   int dif=a-b;
   if (dif>0) dif=1*dif;
   else dif=-1*dif; 
   printf("\n The difference is %d ", dif);
    return 0;
}