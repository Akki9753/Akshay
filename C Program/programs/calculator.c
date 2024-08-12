#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
    float num1,num2;
    char op;
    start:
    printf("Enetr num1:");
    scanf("%f",&num1);
    printf("Enter num2:");
    scanf("%f",&num2);
    printf("Enetr opration(+,-,*,/,%):");
    scanf(" %c",&op);
    switch(op){
        case '+':printf("sum=%.2f",num1+num2);break;
        case '-':printf("sub=%.2f",num1-num2);break;
        case '*':printf("mul=%.2f",num1*num2);break;
        case '/':printf("div=%.2f",num1/num2);break;
        case '%':printf("mod=%.2f",fmod(num1,num2));break;
        case 'e': case 'E': exit(0);break;
        default: puts("Invalid Option");
        goto start;
    }
    return 0;
    
}