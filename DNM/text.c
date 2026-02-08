#include<stdio.h>

int main()
{ 

    char a[5]={'c','b','s','p','u'};
    for (int i=0;i<5/2;i++)
    {
      a[i]=a[i]^a[5-i-1];
      a[5-i-1]=a[i]^a[5-i-1];
      a[i]=a[i]^a[5-i-1];
    }
    for(int i=0;i<5;i++)
    {
        printf("%c ",a[i]);
    }

    return 0;
}