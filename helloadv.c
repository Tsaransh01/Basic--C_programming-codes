#include<stdio.h>
int main()
{
    int n;
    for(int i=0;i<=n;)
    {
     printf("enter the number: ");
     scanf("%d",&i);
     printf("you entered %d \n", i);

     if (i%2!=0)
     {
        break;
     }
     
    }
printf(" your entered number is odd ! sorry :( please restart the loop\n\n\n\n");

    return 0;
}
