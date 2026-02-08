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
    int sum;
    int row;
    int sum2=0; 
    for (int i=0;i<r;i++)
    {    
        sum=0;
        for (int j=0;j<c;j++)
        {
        sum=sum+arr[i][j];
        if(sum2<sum) 
        {
            sum2=sum;
            row=i;
        } 
        }
    }
    printf("%d is the row with the max sum and %d is the sum", row,sum2);
    return 0;
}