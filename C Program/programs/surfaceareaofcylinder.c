#include<stdio.h>
#include<math.h>
int main() {
  //  const PI=3.14159;
    float rad,hig,A;
    printf("Enter the radius of the cylinder: ");
    scanf("%f",&rad);
    printf("Enter the hight of the cylinder: ");
    scanf("%f",&hig);
    printf("\nRadius:%.2f\n",rad);
    printf("hight:%.2f\n",hig);
    A = 2*(3.14159*rad*rad) + 2*(3.14159*rad*hig);
    printf("Area of cylinder is: %f\n",A);
    return 0;

}