#include<stdio.h>
int series(int n)
{
    if (n<0) return 0;
    if (n<=2) return n;
    else return series(n-1)+ series(n-2)+series(n-3);
    
}
int main()
{
    int n;
    printf("ENTER THE VALUE OF N");
    scanf("%d",&n);
    int a;
    for (int i=1;i<=n;i++)
    {
        a=series(i);
        printf("%d ",a);
    }
    return 0;
}