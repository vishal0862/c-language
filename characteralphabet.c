#include<stdio.h>
void main()
{
    char c;
    printf("enter any character");
    scanf("%c",&c);
    if(c>='a' &&c<='z')
        printf("its a alphabet");
    else
        printf("not a alphabet");
}