#include<stdio.h>
#include<stdbool.h>
int main()
{
    int size;
   printf("enter the size of the arrays : ");
   scanf("%d",&size);
   int arr[size];
   for (int i=0;i<size;i++)
   {
    printf("enter the %dth element : ",i+1);
    scanf("%d",&arr[i]);
   }
   int check=0;
   for (int i=0;i<size;i++)
   {
    bool flag=false;
    for (int j=i+1;j<size;j++)
    {
        if (arr[i]==arr[j]) {
        flag = true ;
        }
    }
    if (flag==false){ 
        printf("%d is the unduplicated element \n", arr[i]);
    break ;
    }
   }
  
    return 0;
}