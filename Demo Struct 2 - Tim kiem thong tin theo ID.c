#include <stdio.h>
#include <string.h>

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
	
	for(int i = 0; i < 2; i++){
		printf("\nEnter information student no.%d", i + 1);
		printf("\nEnter ID: ");
		scanf("%d", &student[i].roll_no);
		getchar();
		printf("Enter name: ");
		gets(student[i].name);
		printf("Enter class: ");
		gets(student[i].class_room);
		printf("Enter date of birth (dd/mm/yyyy): ");
		scanf("%d %d %d", &student[i].dob.day, &student[i].dob.month, &student[i].dob.year);
		getchar();
		printf("Enter adress: ");
		gets(student[i].address);	
	}
	
	for (int i = 0; i < 2; i++){
		printf("\nEnter searching ID: ");
		scanf("%d", &searchID);	
		if(student[i].roll_no == searchID){
			printf("ID_Student: %d", student[i].roll_no);
			printf("\nName: ");
			puts(student[i].name);
			printf("Date Of Birth: %d/%d/%d\n", student[i].dob.day, student[i].dob.month, student[i].dob.year);
			printf("Adress: ");
			puts(student[i].address);
			break;
		}else{
			printf("ID not invalid!!!\n");
		}
	}
	
	return 0;
}
	
	
	
	