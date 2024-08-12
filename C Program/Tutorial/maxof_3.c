#include<stdio.h>
// #include<conio.h>
int main()
{
    int a,b,c;
    printf("Enetr thre number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
     printf(" no is equl");
    else if(a>b && b>c)
     printf("a is big no");
    else if( b>a && b>c)
     printf("b is big no");
    else printf("c is big no");
    return 0;
}