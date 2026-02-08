
#include<stdio.h>
#include<math.h>
int count(int n,int m)
{    
    if (n<=m) {
        for (int i=1;i<=m;i++)
        {
            return pow(2,i-1);
        }
    }
    else {
        int s=0;
        for (int i=1;i<=m;i++)
        {
            s=s+count(n-i,m);
        }
        return s;
    }
}
int main()
{
    int n;
    int m;
    printf("enter the number and step max allowed : ");
    scanf("%d%d",&n,&m);
    printf("the number of ways = %d " , count(n+1,m));
    return 0;
}