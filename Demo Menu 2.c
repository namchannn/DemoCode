#include <stdio.h>

void check_odd_even(){
	int a;
	printf("\nEnter checking number: ");
	scanf("%d", &a);
	if(a % 2 == 0){
		printf("%d is Even number.", a);
	}else{
		printf("%d is Odd number.", a);	
	}
}

void check_prime(){
	int a;
	int flag = 1;
	printf("\nEnter checking number: ");
	scanf("%d", &a);
	if(a < 2){
		flag = 0;
	}else{
		for(int i = 2; i <= a / 2; i++){
			if(a % i == 0){
			flag = 0;
			break;
			}
		}
	}
	if(flag){
		printf("%d is Prime number.", a);
	}else{
		printf("%d is not Prime number.", a);
	}
}

int main(){
	int choice = 0;
	// Menu
	printf("Menu: \n1. Check Odd or Even \n2. Check Prime \n3. Exit");
	int flag = 1;
	
	while(flag){
		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				check_odd_even();
				break;
			case 2:
				check_prime();
				break;
			case 3:
				printf("Bye!!!");
				flag = 0;
				break;
			default:
				printf("Invalid input.");
				break;
		}
	}
	return 0;
}