#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b&&a>c)
    {
    printf("\nthe greatest of entered numbers is a\n");
    }
    if (b>c&&b>a)
    {
        printf("\nthe greatest of entered numbers is b\n") ;
    }
    if (c>a&&c>b)
    {
        printf("\nthe greatest of entered numbers is c\n");
    }
    else if (a==b||a==c||b==c)
    {
     printf("\nthe atleast any two of the number entered are same, please input non same values of a b c");

    }
    
    return 0;
}