 #include<stdio.h>
 int main()
 {
    int a,b,c,small;
    printf("enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b)
    {
        if (b<c) small =b;
    }
    if (b>c)
    {
        if (a>c) small =c;

    }
    if (c>b)
    {
        if (b>a) small =a;

    }
    printf("the smallest number among all is %d", small);
    return 0;
 }