#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n); //n=number of the rows
    for (int i=1;i<=n;i++)
    {
        for (int  j=65 ;j<65+i;j++)
        {
            printf("%c ", (char)j);
        }
        printf("\n");
    }
    
    
    return 0;
}