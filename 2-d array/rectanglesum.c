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
    int r1,c1,r2,c2;
    printf("enter the value of the r1 : ");
    scanf("%d",&r1);
    printf("enter the value of the c1 : ");
    scanf("%d",&c1);
    printf("enter the value of the r2 : ");
    scanf("%d",&r2);
    printf("enter the value of the c2 : ");
    scanf("%d",&c2);
    int sum=0;
    for (int i=r1-1;i<r2;i++)
    {
        for (int j=c1-1;j<c2;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}