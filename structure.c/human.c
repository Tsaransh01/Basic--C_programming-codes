#include<stdio.h>
#include<string.h>
typedef struct person{
   int age;
   float weight; 
}person ;
int main()
{   
    person a;
    person* x=&a;
    x->age=34;
    x->weight=72.45;

   printf("%.2f =weight for the man of %d age", x->weight,(*x).age);
    return 0;
}