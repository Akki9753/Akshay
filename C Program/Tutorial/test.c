#include<stdio.h>
int main()
{
    int n;
    printf("Enter Week number: ");
    scanf("%d",&n);
    if(n==1){
        puts("Monday");
    }else if(n==2){
        puts("Tuesday");
    }else if(n==3){
        puts("Wednesday");
    }else if(n==4){
        puts("Thursday");
    }else if(n==5){
        puts("Friday");
    }else if(n==6){
        puts("Saturday");
    }else if(n==7){
        puts("Sunday");
    }else {
        puts("Invalid input! Please enter week number between 1 and 7.");
    }
    return 0;
}