#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* account number = 221151540
   pin = 2002*/

int option;
int balance = 50000;
void withDraw(){
float deductAmount,accountBalance = 50000.00,leftAmount;
printf("At the moment your balance is R%.2f\n",accountBalance);
printf("How much money you would like to withdraw from your account: \nR");
scanf(" %f",&deductAmount);
if(accountBalance < deductAmount){
    printf("INSUFFICIENT FUNDS IN YOUR BANK ACCOUNT\n");
}
else{

printf("\n                SUCCESSFUL TRANSACTION\n");
leftAmount = accountBalance - deductAmount;
printf("Now left with R%.2f in your bank account.\n",leftAmount);}


}
void deposit(){
    float depositAmount,accountBalance = 50000.00, total;
printf("Your current balance: R%.2f\n",accountBalance);
printf("The amount of money you would like to deposit into your bank  account:\nR");
scanf(" %f",&depositAmount);
total = accountBalance + depositAmount;
printf("Total amount of money in your bank account after deposit: %.2f\n",total);

}
void Exit(){
  printf("You have chosen option: %d\n",option);
  printf("Exiting the program\n");


}


int main()
{printf("**************************ABSA BANK - INTERACTIVE AUTOMATED TELLER MACHINE(ATM)**************************************\n\n");
 int accountNumber,pinCode,option,chances = 3;//declare variable/

 while (accountNumber  != 221151540 ||  pinCode != 2002){
 printf("Enter your account number: \n");//prompt the user to enter account number//
 scanf(" %d",&accountNumber);//store user's input on accountNumber variable//
 printf("Enter your pincode: \n");//prompt user to enter pincode//
 scanf(" %d",&pinCode);//store user's input on pinCode variable//
 chances--;
 system("CLs");
 if (accountNumber  == 221151540 && pinCode == 2002){
   printf("==========================================WELCOME TO YOUR ABSA ACCOUNT!!======================================\n\n");
   printf("Enter any key to see your options:");
 }

 else{
            printf("Wrong account number or pin \nYou have %d chances left\n\n",chances);
 }

  if(chances<0){
            printf("You have exceeded your number of chances. \nBYE...");
            getch();
            return 0;
        }
 }

 do{
    getch();
    system("CLs");
    puts("");
    printf("============================================M E N U =================================================================\n\n");
    printf("To view you balance - press 0:\n\n");
    printf("To withdraw money from your account press 1:\n\n");
    printf("To deposit money into your account press 2:\n\n");
    printf("To exit press 3:\n\n");

    printf("Enter your option: ");
    scanf(" %d",&option);
    if (option == 0){
     printf("You have chosen option: %d\n",option);
            puts("Viewing the balance");
            printf("Your balance is R %d\n",balance);
    }
    else if (option == 1){
        withDraw();
    }
    else if (option == 2){

         deposit();
    }
    else if(option == 3){
       Exit();
    }
    else{
        printf("Incorrect input");
    }
 }
 while(option != 3);

    printf("Bye");
    getch();
 return 0;
}
