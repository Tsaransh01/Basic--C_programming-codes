#include<stdio.h>
void preInpost(int n)
{
    if(n==0) return ;
    printf(" pre %d\n", n);
    preInpost(n-1);
    printf(" In %d\n", n);
     preInpost(n-1);
    printf(" post %d\n", n);
    return ;
}
int main()
{ 
    int n;
    scanf("%d",&n);
    preInpost(n);
    return 0;
}