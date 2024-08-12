#include<stdio.h>
int main() {
    int n1,n2;
    printf("Enter the two number:");
    scanf("%d%d",&n1,&n2);
    switch(n1>n2){
        case 1:printf("%d is max",n1);break;
        case 0:switch(n1<n2){
            case 1:printf("%d is max",n2);break;
            case 0:printf("both are equl");break;
            default:printf("invalid input");
        }
    }
    return 0;
}