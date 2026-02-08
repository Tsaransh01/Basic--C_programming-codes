#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    //n=number of the rows
    for (int i=1;i<=n;i++)
    {
     for (int k=1;k<=n-i;k++)
     {
        printf(" ");
     }
     int b=1;
     for (int j=n-i+1;j<=n;j++)
     {
        printf("%c",(char)(b+64));
        b++;
     }

      printf("\n");
    }


    return 0;
}