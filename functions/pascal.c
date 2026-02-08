#include<stdio.h>
#include<math.h>
int fact(int n)
{
    int fact=1;
    for (int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    
    return fact;
}
int ncr(int n,int r)
{  
    int n_fact= (n==0)? 1: fact(n);
    int r_fact= (r==0)? 1: fact(r);
    int nr_fact= (((n-r))==0)? 1 : fact(n-r);
    int ncr=n_fact/(r_fact*nr_fact);
    return ncr;
}
int main()
{ 
    int n;
    //n=number of rows ;
    scanf("%d",&n);

    for (int i=0;i<=n-1;i++)
    {
        for(int k=1;k<=n-1-i;k++)
        {
            printf(" ");
        }
        for (int j=0;j<=i;j++)
        {
           printf("%d ",ncr(i,j));
        }
        printf("\n");
        
    
    }
    return 0;
}