#include <stdio.h>

int main() {
    int n;
    printf("enetr a no: ");
    scanf("%d",&n);
    switch(n%2){
        case 0:puts("even");break;
        default:puts("odd");
    }

    return 0;
}