#include<stdio.h>
int  powerlog(int a,int b)
{
    if (b==0) return 1;
    int ans;
     int x= powerlog(a,b/2);
    if(b%2!=0){
    ans=x*x*a;
    } 
    if (b%2==0){
    ans=x*x;
    }
    return ans;
}
int main()
{
    int  a;//base 
    int b; //power
    scanf("%d%d",&a,&b);
    printf("the answer is %d",powerlog(a,b));
    return 0;
}