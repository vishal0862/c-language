#include<stdio.h>
void main()
{
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("even number");
    else
        printf("odd number");
}