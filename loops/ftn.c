#include<stdio.h>
int main()
{

    int n;
    printf("enter the number n : ");
    scanf("%d",&n);
    int fact=1;
    int i=1;
    while (i<=n)
    { 
     fact=fact*i;
     printf("%d\n",fact);  
     i++;
    }
    return 0;
}