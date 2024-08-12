#include <stdio.h>

int main() {
    int n,originalnum,revnum=0,r;
    printf("Enter the number:");
    scanf("%d",&n);
    originalnum = n;
    while(n!=0)
    {
    r=n%10;
    revnum=revnum*10+r;
    n/=10;
    }
    if(originalnum==revnum){
    printf("Given number is palindrome ");
    }else{
        printf("Given number is not palindrome");
    }
    return 0;
}
