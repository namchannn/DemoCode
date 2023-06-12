#include <stdio.h>

// Pointer + Array
// Function: Lean code
// String -> Mảng các ký tự
// Structure -> "Mảng" mà các phần tử của Mảng có các kiểu dữ liệu khác nhau
//*Menu Program*

// Coffee function
void coffee(){
	printf("Enjoy your Coffee!");
}

// Tea function
void tea(){
	printf("Enjoy your Tea!");
}

// Milk function
void milk(){
	printf("Enjoy your Milk!");
}

// Main function
int main(){
	
	int choice = 0;
	int flag = 1;
	//menu display
	printf("Menu");
	printf("\n1. Coffee");
	printf("\n2. Tea");
	printf("\n3. Milk");
	printf("\n4. Exit");
	
	while(flag){
		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				coffee(); // printf("\nEnjoy your coffee!");
				break;
			case 2:
				tea();
				break;
			case 3:
				milk();
				break;
			case 4:
				printf("Bye!!!");
				flag = 0; // kết thúc loop while
				break;
			default:
				printf("Invalid input.");
				break;
		}
		
//		if(choice == 1){
//			coffee();
//		}else if(choice == 2){
//			printf("\nEnjoy your tea!");
//		}else if(choice == 3){
//			printf("\nEnjoy your milk!");
//		}else if(choice == 4){
//			printf("\nBye!!!");
//			break;
//		}else{
//			printf("\nInvalid input.");
//		}
	}
	return 0;
}