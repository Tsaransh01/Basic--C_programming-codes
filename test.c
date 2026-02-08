#include<stdio.h>
int main()
{
    float number;

    printf ("enter the marks obtained by you\n");
    scanf("%f", &number);
    if (number >=30&&number <50)
    printf("you obtained p\n");

    if (number>=50&&number<60)
    printf("you obtained D\n");

    if (number>=60&&number<70)
    printf("you obtained C\n");

    if (number>=70&&number<80)
    printf("you obtained B\n");

    if (number>=80&&number<90)
    printf("you obtained A\n");

    if (number>=90&&number<=100)
    printf("you obtained Ex\n");

    else if (number< 30&&number>0)
    printf("sadly you failed ):");

    else printf("please enter valid marks\n");
    
        return 0;
}