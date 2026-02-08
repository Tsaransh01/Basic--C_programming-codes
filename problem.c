#include<stdio.h>
int main()
{
    int cp,sp;
    //cp=cost price , sp=selling price ;


    printf("what is your cost price AND selling price respectively enter it  : \n");
    scanf("%d %d", &cp, &sp);

    if ((cp-sp)>0)
     {
        printf("\nsorry you are in loss :( \n loss = %d", cp-sp);
     }
    else if ((sp-cp)>0)
    { 
        printf("the profit is %d", sp-cp);
    }
    else
    printf("you're in eqm as no profit no loss\n");
    
    return 0;
}