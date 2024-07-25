 #include<stdio.h>
int main(){
	int pin1=1229,pin,a=1,ch,amt,balance=10000;
	
	
	printf("\n\t\t\t\t\t\t\t Welcome to Nepal Bank");
	begin:
	
		printf("\n Enter your pin number:");
		scanf("%d",&pin);
		
			if(pin == pin1){
				printf("\n\t\t\t\t\t\tWelcome Rubish Karmacharya!\n");
				printf("Select your option:\n");
				printf("1.Balance enquiry\n2.Withdraw money\n3.Withdraw amount\n4.Deposite amount\n");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:printf("Check your balance:\n");
						   scanf("%d",&amt);
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:printf("Enter the amount you want to deposite:\n");
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


	
		
