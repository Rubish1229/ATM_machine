 #include<stdio.h>
 #include<stdlib.h>
int main(){
	int pin1=1229,pin,a=1,ch,amt,balance=10000;
	
	
	printf("\n\t\t\t\t\t\t\t Welcome to Nepal Bank!!!");
	begin:
	
		printf("\n Enter your pin number:");
		scanf("%d",&pin);
		
			if(pin == pin1){
				printf("\n\t\t\t\t\t\t\t Welcome Rubish Karmacharya!\n");
				printf("Select your option:\n");
				
				printf("1.Balance enquiry\n 2.Withdraw money\n 3.Deposite money\n 4.Transfer money\n 5.Account information.");
				scanf("%d",&ch);
				system("cls");
				switch(ch)
				{
					case 1:printf("Your current balance:%d\n",balance);
						   
						break;
					case 2:printf("Enter the amount you want to withdraw:\n");
						   scanf("%d",&amt);
						   if(amt<=10000)
						   {
						   	if(amt<=balance)
						   	{
						   		balance=balance-amt;
								   printf("The deducted amount is:%d\n Your current balance is:%d");
						   		
							   }
							   else
							   {
							   	printf("Insufficient balance!!!");
							   }
						   }
						   else{
						   	printf("You can only withdraw:99999\n");
						   }
						break;
						
					case 3:printf("Enter the amount you want to deposite:\n");
						   scanf("%d",&amt);
						   if(amt<=10000)
						   {
						   	balance=balance+amt;
						   	printf("%d",balance);
						   }
						   else{
						   	printf("You can only withdraw:99999\n");
						   }
						break;
					
					case 4:printf("Enter the amount you want to transfer:\n");
						  scanf("%d",balance);
						  if(amt<=10000){
						  
						  {
						  	balance=balance-amt;
						  	printf("%d",balance);
						  }
					}
						  else
						  {
						  	printf("You can only transfer amount:99999\n");
						  }
					
						  break;
					
						  
					case 5:printf("Here's your personal information:");
						   printf("\n\t\t\t\t Customer information\n");
						   printf("1) Name of the Customer\t\t:\t\t Rubish Karmacharya\n");
						   printf("2) Citizenship ID:\t\t:\t\t 12-32-9876483\n");
						   printf("3) Bank number\t\t\t:\t\t 652625262687\n");
						   printf("4) Contact number\t\t:\t\t9825413723\n");
				}
			}
			else{
				printf("Your pin number didn't match'.\n");
				if(a<3)
				{
					a++;	
				
				goto begin;
				
			}
			}
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\tThank you for your kind co-operation.");
			printf("\n\t\t\t\t\t For further info contact us on:\n \t\t\t\t\tEmail-nepalbank1@gmail.com\n \t\t\t\t\tcontact us on:01-5435424,01-6252431");
				
			}
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	begin:
//	
//	printf("Welcome to Nepal Bank\n");
//
//	for(i=0;i<3;i++){
//			printf("Enter your 4-digit pin number:");
//			scanf("%d",&pin);
//		
//		printf("\n");
//		
//		if(pin==pin1){
//	
//			printf("Welcome! Rubish Karmacharya\n");
//			printf("Please select your choice:\n");
//			printf("1.Deposite\n 2.Withdraw\n 3.Check balance\n");
//			scanf("%d",&abc);
//			
//			switch(abc)
//			{
//				case 1:printf("Enter the deposite amount\n");
//					scanf("%d",&amt);
//						if(amt<=1000)
//						{
//							balance=balance+amt;
//							printf("%d",balance);
//						}
//						else{
//							printf("Your limit is only 999");
//						}
//						
//					break;
//					
//				case 2:printf("Enter the withdraw amount\n");
//				scanf("%d",&amt);
//				
//					if(amt<=1000)
//					{
//						balance=balance-amt;
//						printf("Now your current balance is:%d",amt,balance);
//					}
//					else{
//						printf("You can only withdraw is 999");
//					}
//
//					break;
//
//					default:
//					//code block
//			}
//		
//		break;
//	}
//		else{
//			printf("Your pin number is invalid.\n Enter valid pin:");
//			printf("\n");
//			printf("\n");
//			
//			goto begin;
//			
//	}
//}
//	


	
		
