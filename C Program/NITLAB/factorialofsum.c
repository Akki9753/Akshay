#include<stdio.h>
int main() 
{ 
 int n,fac,sum=0;
 printf("Enter a number:");
 scanf("%d",&n);
 for(int j=1;j<=n;j++) {
 fac=1; 
 for(int i=1;i<=j;i++)
 { 
     fac=fac*i;
  } sum=sum+fac;
 } 
  printf("%d",sum);
 return 0; 
}