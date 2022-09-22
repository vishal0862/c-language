#include<stdio.h>
void main()
{
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    if(a>0)
        printf("a is positive");
    else if(a<0)
        printf("no is negative");
    else 
        printf("its a zero");

}