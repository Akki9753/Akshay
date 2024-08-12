#include<stdio.h>
int main(){
char nation,gender;
int age;
printf("Enter your natinality(I/i for indian): ");
scanf(" %c",&nation);
if(nation=='I'||nation=='i') {
    printf("Enter your gender (M/m for male,F/f for female): ");
    scanf(" %c",&gender);
    if(gender=='M'||gender=='m'){
        printf("Enter your ege:");
        scanf("%d",&age);
        if(age>=21 && age<=50){
            printf("congratulations! you are eligiable for marrige.");
        }
        else{
            printf("you are not eligiable for marrige.");
        }
    }else if(gender=='F'||gender=='f'){
            printf("Enter your ege:");
        scanf("%d",&age);
        if(age>=18 && age<=45){
            printf("congratulations! you are eligiable for marrige.");
        }
        else{
            printf("you are not eligiable for marrige.");
        }
        }
    else {
            printf("Invalid gender input.\n");
        }
    } 
else {
        printf("This eligibility check is only for Indian citizens.\n");
    }
return 0;
}