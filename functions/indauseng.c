#include<stdio.h>
void australia()
{
    printf("i hate kangaroos :(\n Still remebers 19 november \n");
    return ;
    
}
void england ()
{
    printf("England is a strong team :) \n");
    australia();
    return ; 
}
void india()
{ 
    printf("I LOVE MY INDIA <3 :)\n");
    england();
    return ;
    
}

int main()
{
    india();
    return 0;
}