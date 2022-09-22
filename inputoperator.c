#include<stdio.h>
void main()
{
    int a,b,d;
    char c;
    printf("enter opertor:");
    scanf("%c",&c);
    printf("enter value:");
    scanf("%d%d",&a,&b);
    switch(c)
    {
        case'+':d=a+b;
        printf("%d",d);
        break;
        case'-':d=a-b;
        printf("%d",d);
        break;
        case'*':d=a*b;
        printf("%d",d);
        break;
        case'/':d=a/b;
        printf("%d",d);
        break;


    }
}
