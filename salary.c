#include<stdio.h>
void main()
{   
    int salary,gross;
    char gen;
    printf("enter salary:");
    scanf("%d",&salary);
    printf("enter gender [m/f]:");
    scanf("%c",&gen);
    if(gen=='m')
        gross=salary+(salary*10)/100;
    else
        gross=salary+(salary*15)/15;
    printf("\n%d",gross);

}