#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    //n=number of rows ;
    for (int i=0;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d ", 2*j-1);
        }
        printf("\n");
    }
    return 0;
}