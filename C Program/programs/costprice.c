#include<stdio.h>
#include<math.h>
int main() {
    int costprice=1200;
    int repairecost=250;
    int coloringcost=350;
    int accessoriescost=500;
    int desiredprofit=1500;
    
    int totalcost=costprice+repairecost+coloringcost+accessoriescost;
    int sellingprice=totalcost+desiredprofit;
    printf("sellingprice=%d\n",sellingprice);
    return 0;
}

