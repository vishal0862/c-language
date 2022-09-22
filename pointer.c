#include<stdio.h>
void main()
{
    int *p;
    int x;
    x=5;
    p=&x;
    printf("\n address%d ",p);
    printf("\n value",*p);
    *p=*p+10;
    printf("\n%d",x);
}
