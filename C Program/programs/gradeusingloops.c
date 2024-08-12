#include<stdio.h>
int main()
{
    float physics,chemistry,biology,mathematics,computer;
    float total,percentage;
    char grade;
    printf("Enter marks for Physics: ");
    scanf("%f", &physics);
    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks for Biology: ");
    scanf("%f", &biology);
    printf("Enter marks for Mathematics: ");
    scanf("%f", &mathematics);
    printf("Enter marks for Computer: ");
    scanf("%f", &computer);
    total = physics + chemistry + biology + mathematics + computer;
    percentage=(total/500)*100;
    grade = percentage/10;
    switch(grade){
        case 10: case 9:puts("grade A");break;
        case 8:puts("grade B");break;
        case 7:puts("grade C");break;
        case 6:puts("grade D");break;
        case 5:case 4:("grade E");break;
        default: puts("grade F");
    }
    return 0;
}