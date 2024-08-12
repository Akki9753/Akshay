#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enetr the number:");
    scanf("%d",&n);
    if(n==1){
     printf("Not a prime/ not a composite");
    }else{
    for(i=1;i<=n;i++)
        if(n%i==0)c++;
        if(c==2){
        printf("prime no");
        }else {
            printf("composite no");
        }
    
    }
    return 0;
}