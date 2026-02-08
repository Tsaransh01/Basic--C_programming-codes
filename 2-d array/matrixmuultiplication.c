#include<stdio.h>

int main()
{
    int m,n,p ;
    //row of first matrix 
    //column of first matrix and row of second matrix 
    //column of the second matrix \n 
    printf("enter the m value : ");
    scanf("%d",&m);
    printf("enter the n value :  ");
    scanf("%d",&n);
    printf("enter the p value :  ");
    scanf("%d",&p);
    int arr[m][n];
    int brr[n][p];
    for(int i=0;i<m;i++)
    {
        printf("enter the elements of %dth row\n" ,i+1);
        for (int j=0;j<n;j++)
        {
           scanf("%d",&arr[i][j]); 
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("enter the elements of %dth row\n" ,i+1);
        for (int j=0;j<p;j++)
        {
           scanf("%d",&brr[i][j]); 
        }
    }
    int res[m][p];
   for (int i=0;i<m;i++)
   {
    for (int j=0;j<p;j++)
    { 
      res[i][j]=0;
      for (int k=0;k<n;k++)
      {
        res[i][j]+=arr[i][k]*brr[k][j];
      }
    }
   }
    printf("\nnew resultant matrix is : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}