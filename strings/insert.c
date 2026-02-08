#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100]="saransh";
    int size=strlen(str1);
    for (int i=size;i>0;i--)
    { 
        str1[i]=str1[i-1];
    }
    str1[0]='T';
    puts(str1);
    return 0;
}