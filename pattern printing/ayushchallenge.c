#include<stdio.h>
int main()
{
    int row ,column;
    printf("enter the row : ");
    scanf("%d",&row);
 
    for (int i=0;i<row;i++)
    {
        for (int j=1;j<=row-i;j++)
        {
          printf("%d",j);
        }
        for (int j=0;j<i;j++)
        {
            printf("**");
        }
        
        for(int j=row-i;j>=1;j--)
        {
            printf("%d",j);
        }
     printf("\n");
    }
    return 0;
}