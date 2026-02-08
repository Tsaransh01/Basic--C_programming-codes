#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows you want to print the pattern : ");
    scanf("%d",&n);

    
    for(int i=1;i<=n;i++)
    {  
    if (i%2!=0)
      {
        for (int j=1;j<=i;j++)
        {
        printf("%d ",j);
        }
        printf("\n");
      }
    else if (i%2==0)
    {
        for (int j=65;j<65+i;j++)
        {
        printf("%c ",(char)j);
        }
        printf("\n");
    }
    }
    
    
    return 0;
}