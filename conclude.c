#include<stdio.h>
int main()
{
    int number;
    printf("enter number\n");
    scanf("%d", &number);

    if (number >=0)    
    {
        printf("the number is positive\n");
        if (number % 2==0)
        
{
       printf("the number is divisible by 2\n");

 }
       else 
       {
        printf("the number is positive but not divisible by 2\n");
       }
    }
    else if  (number<0)

    {
        printf("the number is negative\n");
         if (number % 2==0)
        
{
       printf("the number is divisible by 2\n");

 }
       else 
       {
        printf("the number is negative and not divisible by 2\n");
       }
    }
    
    
    return 0;
}