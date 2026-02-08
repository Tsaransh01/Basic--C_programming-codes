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
    int count;
    int count2=0;
    int row;
    for (int i=0;i<r;i++)
    { 
        count=0;
        for (int j=0;j<c;j++)
        {
            if (arr[i][j]==1) count++;
            if (count2<count)
            {
                 count2=count;
                 row=i+1;
            }
        }
    }
    printf("%d is the row with highest number of 1 and %d is the number of times it occurs :)",row,count2);
    return 0;
}