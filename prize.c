#include<stdio.h>
/*
prize distribution based 
date 31 august 2024
saransh
*/

int main()
{
    int P,M;
   // p= physics, m= maths, 
   // all marks have range from 0 to 100

   printf ("enter the marks obtained by you in physics\n");
   scanf("%d", &P);


    printf ("enter the marks obtained by you in maths\n");
   scanf("%d", &M);
   
   if (P>=33&&M>=33)
   {
    printf("wow you have passed both the exam op you get a prize of rupees 45\n");
   }
   else if (P>=33)
   {
    printf ("congo on passing  the exam you are getting aprize of rupees 15\n");
   }
   else if (M>=33)
   {
    printf ("congo on passing  the exam you are getting aprize of rupees 15\n");
   }
   else
   {
     printf("sorry , better luck next time\n");
   }
    return 0;
}