#include<stdio.h>
void hcf(int n,int m)
{   int min ;
    if (n>m) min =m;
    else min =n;
    
    for (int i=min;i>=1;i--)
    {
        if ((m%i==0)&&(n%i==0)) 
        {
         printf("the hcf of the the given numbers %d and %d is : %d ",n,m,i);
         break ;
        }
    }
}
int main()
{
    int m,n;
    printf(" Enter the numbers : ");
    scanf("%d%d",&n,&m);
    hcf(n,m);
    return 0;
}