#include<stdio.h>
#include<string.h>
int main()
{
    struct PERSON{
        char name[100];
        int age;
        float salary;
    };

     struct PERSON a;
     a.name;
    strcpy(a.name,"Saransh");
    a.age=19;
    a.salary=0.70;

    struct PERSON b;
    b.name;
    strcpy(b.name,"Siva_Abhijeet");
    b.age=18;
    b.salary=150.0;

    printf("%s \n",a.name);
    printf("%d",b.age);

    return 0;
}