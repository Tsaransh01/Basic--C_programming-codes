#include<stdio.h>
#include<string.h>
int main()
{
    puts("enter your string : ");
    char str[100];
    scanf("%[^\n]s",str);
    int size=0;
    int k=0;
    while (str[k]!=0)
    {
     size++;
     k++;
    }
    for (int i=0;i<size/2;i++)
    {
        char temp=str[i];
        str[i]=str[size-i-1];
        str[size-i-1]=temp;
    }
    printf(" the reverse string is : %s", str);
    return 0;
}