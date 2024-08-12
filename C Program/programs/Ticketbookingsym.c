#include<stdio.h>
int main() {
    int age;
    float hight,price,T_price;
    char vip_pass;
    printf("Enter your age:");
    scanf("%d",&age);

    printf("Enetr your hight in cm:");
    scanf("%f",&hight);

    printf("Do you have a VIP pass?(y/n):");
    scanf(" %c",&vip_pass);

    if(age>0 && age<=3){
    price=0;
    }else if(age>=4 && age<=12){
        price=20;
    }else if(age>=13 && age<=64){
        price=100;
    }else {
        price=50;
    }
    // some additional considerations on hight

    if(hight>=180){
        price=price+50;
    }else if(hight<=120){
        price=price * 0.50;
     }
    // apply for vip pass dis
    if(vip_pass == 'Y' || vip_pass == 'y'){
        price=price - price * 0.20;
    }
    T_price=price;
     printf("The ticket price is: Rs.%.2f\n", T_price);
    return 0;
}
