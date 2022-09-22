#include<stdio.h>
void main()
{
    int unit;
    float total;
    printf("enter your units");
    scanf("%d",&unit);
    if(unit>=0 && unit<=200)
        total=unit*0.50;

    if(unit>200 && unit<=400
        total=(unit*0.65)+100;

    if(unit>400 && unit<=600)
        total=(unit*0.80)+230;

    if(unit>600)
        total=(unit*1.00)+390;
    printf("total bill:%.2f",total);
}
