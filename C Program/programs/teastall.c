#include <stdio.h>

int main() {
  int choice,quntity,change,total_amt,amount;
  char ch;
   a:
   printf("Welcome to our Tea Stall Counter! Our menu:\n");
   printf("Tea --------------------- Rs. 10\n");
   printf("Coffee ------------------ Rs. 20\n");
   printf("Cold coffee ------------- Rs. 50\nExit\n");
   printf("Choose  by entering a number (1-3):");
    scanf("%d",&choice);
     if(choice!=1 && choice!=2 && choice!=3){
         printf("\nEnter a valid choice");
         return 0;
     }else if(choice==1){
         printf("\nHow many cups of refreshing tea?:");
         scanf("%d",&quntity);
         total_amt=quntity*20;
    
     }else if(choice==2){
         printf("\nHow many cups of aromatic coffee?:");
         scanf("%d",&quntity);
         total_amt=quntity*50;

     }else {
         printf("\nHow many cups of chilled cold coffee?:");
         scanf("%d",&quntity);
         total_amt=quntity*100;
     }
     printf("Total bill amt is =%d\n",total_amt);
     
     printf("Enter your payment amt: Rs.");
     scanf("%d",&amount);
     if(amount==total_amt){
         printf("You have paid Total amt\n");
     } else if(amount>total_amt){
         change=amount-total_amt;
         printf("your change is %d\n",change);
     }else if(amount<total_amt){
         change=total_amt-amount;
         printf("you don't pay total amt please pay remaining amount:Rs.%d ",change);
     }
     printf("\nExplore more or finalize? (Type 'Y' for Yes or 'N' for No):");
     scanf(" %c",&ch);
      if(ch=='Y' || ch=='y'){
          printf("Certainly, let's explore.\n");
        goto a;
      }else if(ch=='N'|| ch=='n'){
          printf("Thank you for visiting! We look forward to serving you again soon!");
      }else{
        printf("Please select a valid selection:");
      }

   return 0;
}