#include<stdio.h>
int main()
{   
    int a,b; 
    char opertn;
    // a=add, s=subtract, m = multiply, d=divide
    printf("enter the code of the type of arthmetic operation you wanna do with %d and %d (as mention is the comment section)\n", a,b);
    scanf ("%c", &opertn);
    
    printf("enter the two numbers\n");
    scanf("%d %d",&a,&b);

     

    printf("you have choosen %d and %d as your number for simple arthemetic operation\n", a,b);

    

    switch (opertn)
    {
    case 'a': {printf("%d", a+b);
               break;}
    case 's' :{ printf("%d", a-b);
               break;}
    case 'm' :{ printf("%d", a*b);
               break; }
    case 'd' : {printf("%d", a/b);
               break;}
    default : printf("please enter a valid keyword\n");

    } 
    return 0;
}