
#include <stdio.h>

int main() {
    int r,c,nr,k;
    printf("Enter the no of row :");
    scanf("%d",&nr);

    for(r=1;r<=nr;r++)
    {
        for(c=r;c<r;c++)
        {
            printf(" ");
        }
        for(k=1;k<=r;k++)
        {
            printf("*");
        }
        printf("\n"); 
    }
    
    return 0;
}