#include<stdio.h>
#include<limits.h>
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
    int max=arr[0][0];
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (max < arr[i][j]) max=arr[i][j];
        }
    }
    printf("%d is the MAXIMUM element of the given set of the elements is the matrix arr[%d][%d] ",max,r,c);
    return 0;
}