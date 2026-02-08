#include<stdio.h>
void prime(int n)
{   
    printf(" The prime factors of the number follows  : ");
    
    if (n%2==0) printf("%d ", 2);
    else  
    {
      for (int i=3;i*i<=n;i+=3)
      {
         while (n%i==0)
         {
            printf("%d ", i);
            n=n/i;
         }
       
      }
      if (n>2) printf("%d ", n);
    }
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    prime(n);
   
    return 0;
}