#include<stdio.h>
int main()
{
    int r,c ;
    printf("enter the row number : ");
    scanf("%d",&r);
    printf("enter the column number :  ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        printf("enter the elements of %dth row\n" ,i+1);
        for (int j=0;j<c;j++)
        {
           scanf("%d",&arr[i][j]); 
        }
    }
    for (int i=0;i<r;i++)
    {
        for (int j=i;j<c;j++)
        {  
             if (i!=j)
           {
           arr[i][j]=arr[i][j]^arr[j][i];
           arr[j][i]=arr[i][j]^arr[j][i];
           arr[i][j]=arr[i][j]^arr[j][i]; 
           }
        }
    }
    for (int i=0,j=c-1;i<r,j>=0;i++,j--)
    {
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][c-j-1];
            arr[i][c-j-1]=temp;
        }
    }
    printf("\n");
    for(int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
           printf("%d ",arr[i][j]); 
        }
        printf("\n");
    }
  
    return 0;
}