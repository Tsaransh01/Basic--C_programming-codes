#include<stdio.h>
int main()
{
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
    }pokemon;

    pokemon a,b,c;
    printf("%d ", a.hp);

    return 0;
}