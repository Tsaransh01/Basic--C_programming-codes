#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketers{
      char name[50];
      int age;
      int matches;
      float average;
    } stats;
    int size;
    printf("Enter the number of cricketers whom you want to form stats  : ");
    scanf("%d",&size);
    stats arr[size];

    for (int i=0;i<2;i++){
        printf("ENTER THE NAME OF %d CRICKETER : ",i+1);
        scanf("%s",arr[i].name);
         printf("ENTER THE AGE OF CRICKETER : ");
        scanf("%d",&arr[i].age);
         printf("ENTER THE number OF PLAYED TEST MATCHES BY CRICKETER : ");
        scanf("%d",&arr[i].matches);
         printf("ENTER THE AVVERAGE OF CRICKETER : ");
        scanf("%f",&arr[i].average);
    }

    for (int i=0;i<2;i++)
    {
        printf("following are the details of %dth cricketer \n",i+1);
        printf("the name of  the cricketer is %s\n",arr[i].name);
        printf("the age of  the cricketer is %d\n",arr[i].age);
        printf("the number matches played by the cricketer is %d\n",arr[i].matches);
        printf("the average of the cricketer is %f\n",arr[i].average);         
    }

    return 0;
}