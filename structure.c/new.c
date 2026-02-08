#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct calender
    {
       char name[40];
       int noOfdays;
       int year; 
    } calender;
    
    calender arr[2];
    for (int i=0;i<2;i++)
    {
       printf("enter the name of the %d month : ",i+1);
       scanf("%s",arr[i].name);
       printf("enter the no of days in month : ");
       scanf("%d",&arr[i].noOfdays);
       printf("enter the year : ");
       scanf("%d",&arr[i].year);       
    }

        if(arr[0].name==arr[1].name) printf("months are equal \n");
        if(arr[0].noOfdays=arr[1].noOfdays) printf("no of days are equal \n");
        if(arr[0].year==arr[1].year) printf("year is same ");

    return 0;
}