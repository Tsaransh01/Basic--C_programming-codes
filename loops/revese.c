#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int t;
    t=n;

    printf("enter the number \n");
    scanf("%d",&n);

    int i=0;
    while (n>0)
    {
    i=i+n%10;
    n=n/10;
    }
    
    int b=0;
    {
     

    }
    return 0;
}