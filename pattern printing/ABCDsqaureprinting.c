 #include<stdio.h>
 int main()
 {
    int n;
    scanf("%d",&n); //n=rows number
    
    for (int i=1;i<=n;i++)
    {
        for (char j=(char)65;j<=(char)65+(char)(n-1);j++)
        {
           printf("%c ", j) ;
        }
    printf("\n");
    }
     return 0;
 }