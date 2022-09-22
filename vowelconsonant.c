#include<Stdio.h>
void main()
{
    char a;
    printf("enter any character");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='a' || a=='o' || a=='u'|| a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
        printf("vowel");
    else 
        printf("consonent");
}