#include<stdio.h>
#include<math.h>
void main()
{
int n;
printf("enter the number of terms\n");
scanf("%d",&n);

int pre= -1, sum=0;
for (int i=0;i<=n;i++)
{
 pre*=-1;   
 sum =sum+ pre*i;
}
printf("the sum of the series is n: %d",sum);

}