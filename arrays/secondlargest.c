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
    int max=0;
    int smax;
   for (int i=0;i<size;i++)
   {
    if (max<arr[i]) {
        smax=max;
        max=arr[i];
       }
    else if (smax<arr[i])
    {
      smax=arr[i];
    }
   }
   printf("The second largest of all the elements given is %d",smax);
    return 0;
}