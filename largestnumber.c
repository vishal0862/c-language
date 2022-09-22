#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("a is greater then others");
    else if(b>a && b>c)
        printf("b is greater then others");
    else
        printf("c is greater then others");

}