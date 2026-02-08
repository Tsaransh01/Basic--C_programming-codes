#include<stdio.h>
void reverse (int arr[],int si,int ei ){ 
    for (int i=si,j=ei;i<=j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return ;
}
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
   int k;
   printf("enter the rotating factor : ");
   scanf("%d",&k);
   k=k%size;
   reverse(arr,0,size-1-k);
   reverse(arr,size-k,size-1);
   reverse(arr,0,size-1);
   for (int i=0;i<size;i++)
   {
    printf("%dth element is : %d \n",i+1, arr[i]);
   }
    return 0;
}