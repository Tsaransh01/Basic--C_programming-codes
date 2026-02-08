#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];
   printf("enter your sentence : ");
   scanf("%[^\n]s",str);
   int size=0;
   int i=0;
   while (str[i]!=0)
   {
    size++;
    i++;
   }
   printf("the size of the string is %d", size);
    return 0;
}