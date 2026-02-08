#include<stdio.h>
void swap(int a,int b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    printf("first number is = %d \nsecond number is = %d \n",a,b);
}
int main()
{
   int a,b;
   printf("Enter the first number : ");
   scanf("%d",&a);
   printf("enter the second number : ");
   scanf("%d",&b);
   swap(a,b);
    return 0;
}
