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
   int a=0;
   for (int i=0;i<size;i++)
   {
    if (arr[i]==arr[size-1-i]) a++;
    else a=0;
    i++;
   }
    if (a!=0) printf("  The given array is an palindrome :)") ;
    else printf(" The given array is not palindrome :(") ;
    return 0;
}