#include<stdio.h>
#include<string.h>
typedef struct student 
{
    char name[40];
    int rolls;
    char branch[20];
    char department[20];
    int year;

} student;
int check(student a,student b)
{
    if (a.department==b.department) return 1;
    else return 0;
}
int main()
{
 student a,b;
 printf("enter the department of student a : ");
 scanf("%s",a.department);
 printf("enter the department of student b : ");
 scanf("%s",b.department);
 int x= check(a,b);
if (x==1) printf("the departments are same ");
else printf("the departments are not same ");
    return 0;
}