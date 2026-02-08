#include<stdio.h>
int main()
{
    struct book{
        char name[100];
        int price;
        int pages;  
    } thejourney,LOVE,success,work;

    thejourney.name= "the journey";
    thejourney.pages=308;
    thejourney.price=187;

    LOVE.name="the affairs of affair";
    LOVE.pages=239;
    LOVE.price=84;

    success.name= " the path to the success";
    success.price=753;
    success.pages=453;
    
    work.name="the art of working";
    work.price=368;
    work.pages=291;

    return 0;
}