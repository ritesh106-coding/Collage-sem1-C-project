//Q12. Write a program to simulate an ATM login system: 
//? Input correct PIN (predefined) 
//? If correct, ask for transaction type (withdraw, deposit, check balance) using nested if 
//? If incorrect, show “Access Denied.”
#include<stdio.h>
int main()
{
	int pin,withdraw,choice,amount;
	int balance=1000000;
	printf("Enter Your PIN: ");
	scanf("%d",&pin);
	
	if(pin==1234)//    1234 its your pin
	{
	
	printf("\nLogin successful!\n");
        printf("Choose transaction type:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Check Balance\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);
        
        if(choice==1)
        {
        	printf("Enter amount to withdraw: ");
        	scanf("%d",&amount);
        	 if (amount > 0 && amount <= balance) {
             balance = balance - amount;      // Explicit subtraction
	 		//	balance -= amount;               // Compound assignment
			  printf("Withdrawal successful. Remaining balance: ?%d\n", balance);
            } else {
                printf("Invalid amount or insufficient balance.\n");
            }
		} 
		
		else if(choice==2)
		{
		printf("Enter amount to Deposit: ");
        scanf("%d",&amount);
        if(amount>0){
		
		balance=balance+amount;
		printf("Depsit successful. Total balance: %d\n", balance);
		}else
		printf("Invalid amount or insufficient balance.\n");
        }
	
	else if(choice==3)
	 {
            printf("Your current balance is: %d\n", balance);
        } else {
            printf("Invalid transaction choice.\n");
        }
	}
	else
	{
		printf("Invalide: Your pin is Wrong ");
	}
	return 0;
}