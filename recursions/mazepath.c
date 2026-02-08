#include<stdio.h>
int count(int n,int m)
{
    if ((n==0)&&(m==0)) return 0;
    if (n==1||m==1) return 1;
    return count(n-1,m)+count(n,m-1);
}
int main()
{
    int n,m;//n=number of rows and number of columns ;
    printf("enterr the numberr of rows and columns : \n");
    scanf("%d%d",&n,&m);
    printf("%d is the total number of ways",count(n,m));
    return 0;
}