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
   int check=0;
   for (int i=0;i<size;i++)
   {
    for (int j=i+1;j<size;j++)
    {
        if (arr[i]==arr[j]) {
            check++;
            printf("index are %d and %d\n",i+1,j+1);
        }
    }
   }
   printf("%d equals the number of duplicate pairs",check);
    return 0;
}