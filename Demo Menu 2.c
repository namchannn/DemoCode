#include <stdio.h>

void prime();
void odd_even();

void odd_even(){
	printf("Odd and Even function");
}

void prime(){
	printf("Prime function");
}

int main(){
	int choice = 0;
	
	// Menu
	printf("Menu: \n1. Check odd or even \n2. Check prime \n3. Exit");
	int flag = 1;
	
	while(flag){
		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				odd_even();
				break;
			case 2:
				prime();
				break;
			case 3:
				printf("Bye!!!");
				flag = 0;
				break;
			default:
				printf("Invalid input");
				break;
		}
	}
	return 0;
}