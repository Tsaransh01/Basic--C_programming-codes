#include<stdio.h>
int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d", &number);
     
    number>=1?printf("the number is natural number"): printf("the number is not a natural number");
    return 0;
}