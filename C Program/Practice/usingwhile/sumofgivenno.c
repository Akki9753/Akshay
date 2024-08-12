#include <stdio.h>

int main() {
    int n,sum=0,a;
    printf("Enter a 3 digit number:");
    scanf("%d",&n);
    while(n!=0)
    {
    a=n%10;sum=sum+a;
    n=n/10;
    }
    printf("sum of the digits is %d",sum);
    return 0;
}