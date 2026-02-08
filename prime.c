#include<stdio.h>
void main()
{

    /*this is an infite loop*/
    int x=4,y=0;
    while (y>=0)
    {
        x--;
        y++;

        if (y==x)
        {
        continue;
        }
        else {printf("\n %d %d ",x,y);}
    }
}