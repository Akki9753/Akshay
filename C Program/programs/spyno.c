#include<stdio.h>
int main()
{
    int n,s=0,p=1,q;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n>0;)
    {
        q=n%10;
        s=s+q;
        p=p*q;
        n=n/10;
    }
    printf("sum of given no = %d\nproduct of given no is = %d\n",s,p);
    if(s==p){
        printf("Given number is a spy no");
    }else {
        printf("Given number is not a spy number");
    }
    return 0;
}