#include<stdio.h>
int main()
{
    int n;
    //n=number of rows
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            for (int j=1;j<=n;j++)
            {
                printf("%d",j);
            }
            for (int k=n-1;k>=1;k--)
            {
                printf("%d",k);
            }
            printf("\n");
        }
        else 
        {
            for (int j=1;j<=n-i+1;j++)
            {
            printf("%d",j);
            }
            for (int k=1;k<=2*i-3;k++)
            {
                printf(" ");
            }
            for(int l=n-i+1;l>=1;l--)
            {
                printf("%d",l);
            }
            printf("\n");
        }
    } 
    
    return 0;
}