#include <stdio.h>

// Struct: là Mảng mà phần tử Mảng có các kiểu dữ liệu khác nhau
// Tên của struct (cấu trúc)

struct DateOfBirth
{
	int day;
	int month;
	int year;
};

struct Student
{
	// Biến thành phần
	int roll_no;
	char name[30]; // gets(name)
	char class_room[10];
	char address[100];
	struct DateOfBirth dob;
} student[5]; // Biến struct

int main(){
	// Declartion
	int searchID;
	int found = 0;
	
	for(int i = 0; i < 5; i++){
		printf("Enter information student no.%d", i + 1);
		printf("\nEnter ID: ");
		scanf("%d", &student[i].roll_no);
		printf("Enter name: ");
		fflush(stdin);
		gets(student[i].name);
		printf("Enter class: ");
		gets(student[i].class_room);
		printf("Enter date of birth (dd/mm/yyyy): ");
		scanf("%d %d %d", &student[i].dob.day, &student[i].dob.month, &student[i].dob.year);
		printf("Enter adress: ");
		fflush(stdin);
		gets(student[i].address);	
	}
	
	while(1){
		printf("\nEnter searching ID studen: ");
		scanf("%d", &searchID);
		if(searchID == 0){
			break;
		}
		found = 0;
		for(int i = 0; i < 5; i++){
			if(student[i].roll_no == searchID){
			found = 1;
			printf("ID_Student: %d", student[i].roll_no);
			printf("\nName: ");
			puts(student[i].name);
			printf("Date Of Birth: %d/%d/%d\n", student[i].dob.day, student[i].dob.month, student[i].dob.year);
			printf("Address: ");
			puts(student[i].address);
			break;
			}
		}
		if(!found){
			printf("ID not invalid!!!\n");
		}
	}
	
	return 0;
}
	
	
	
	