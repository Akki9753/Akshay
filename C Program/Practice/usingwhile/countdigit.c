#include <stdio.h>

int main() {
    int n,a=0;
    printf("Enter a digit:");
    scanf("%d",&n);
    while(n!=0)
    {
    n/=10;
    a++;
    }
    printf("count of digits is %d",a);
    return 0;
}
