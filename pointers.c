#include<stdio.h>
void main()
{char name[20]; int a=0s;
char *p;
printf("enter name");
gets(name);
p=name;
while(*p!='\0')
{
p++;
printf("\n%c",*p);
a=a+1;
}
printf("\n%d",a);

}
