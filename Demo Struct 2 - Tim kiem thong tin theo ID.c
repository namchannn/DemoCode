#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct: là Mảng mà phần tử Mảng có các kiểu dữ liệu khác nhau
// Tên của struct (cấu trúc)
// Viết chương trình QLNV với các chức năng:
// 1. Nhập thông tin SV
// 2. Hiển thị thông tin tất cả SV
// 3. Tìm kiếm thông tin SV theo ID
// 4. Tìm kiếm thông tin SV theo Tên
// 5. Cập nhật thông tin NV theo ID
// 6. Thoát

#define maxStudents 5

struct DateOfBirth{
	int day;
	int month;
	int year;
};

struct Student{
	int eid;
	char name[30];
	char class_room[10];
	char address[100];
	struct DateOfBirth dob;
};

int checkDupID(struct Student std[], int id, int currentStdIndex){
	
	for(int i = 0; i < currentStdIndex; i++){
		
		if(std[i].eid == id){
			return 0;
		}
	}
	return 1;
}

void creatStd(struct Student std[]){
	
	for(int i = 0; i < maxStudents; i++){
		printf("Enter Student %d:\n", i + 1);
		
		while(1){
			printf("Enter ID: ");
			scanf("%d", &std[i].eid);
			
			if(checkDupID(std, std[i].eid, i)){
				break;
			}else{
				printf("ID already exists! Please try again.\n");
			}
		}
		printf("Enter name: ");
		fflush(stdin);
		gets(std[i].name);
		printf("Enter class: ");
		fflush(stdin);
		gets(std[i].class_room);
		printf("Enter date of birth (dd/mm/yyyy): ");
		scanf("%d %d %d", &std[i].dob.day, &std[i].dob.month, &std[i].dob.year);
		printf("Enter address: ");
		fflush(stdin);
		gets(std[i].address);
	}
}

void displayAll(struct Student std[]){
	printf("\nAll Students: \n");
	
	for(int i = 0; i < maxStudents; i++){
		printf("ID: %d", std[i].eid);
		printf("\nName: ");
		puts(std[i].name);
		printf("Class room: ");
		puts(std[i].class_room);
		printf("Date of birth: %d/%d/%d", std[i].dob.day, std[i].dob.month, std[i].dob.year);
		printf("\nAddress: ");
		puts(std[i].address);
	}
}

void findStdById(struct Student std[], int id){
	int found = 0;
	
	while(1){
		printf("\nEnter ID of Student to be search (Or press the '0' button to back): ");
		scanf("%d", &id);
		
		if(id == 0){
			break;
		}
		printf("\nResult Check\n");
		
		for(int i = 0; i < maxStudents; i++){
			
			if(std[i].eid == id){
				found = 1;
				printf("ID: %d", std[i].eid);
				printf("\nName: ");
				puts(std[i].name);
				printf("Class room: ");
				puts(std[i].class_room);
				printf("Date of birth: %d/%d/%d", std[i].dob.day, std[i].dob.month, std[i].dob.year);
				printf("\nAdress: ");
				puts(std[i].address);
			}
		}
		
		if(!found){
			printf("ID not invalid! - Please try again.\n");
		}
	}
}

void findStdByName(struct Student std[], char name[]){
	int found = 0;
	int i;
	
	while(1){
		printf("\nEnter Name of Student to be search (Or press the '0' button to back): ");
		fflush(stdin);
		gets(name);
		
		if(name[i] == '0'){
			break;
		}
		printf("\nResult Check\n");
		
		for(int i = 0; i < maxStudents; i++){
			
			if(strcmp(std[i].name, name) == 0){
				found = 1;
				printf("ID: %d", std[i].eid);
				printf("\nName: ");
				puts(std[i].name);
				printf("Class room: ");
				puts(std[i].class_room);
				printf("Date of birth: %d/%d/%d", std[i].dob.day, std[i].dob.month, std[i].dob.year);
				printf("\nAdress: ");
				puts(std[i].address);
			}
		}
		
		if(name[i] != found){
			printf("Name not invalid! - Please try again.\n");
			continue;
		}
	}
}

void updateStdById(struct Student std[], int id){
	int found = 0;
	
	while(1){
		printf("\nEnter ID Student to be update (Or press the '0' button to back): ");
		scanf("%d", &id);
		
		if(id == 0){
			break;
		}
		
		for(int i = 0; i < maxStudents; i++){
			
			if(std[i].eid == id){
				found = 1;
				printf("Enter new data to update: ");
				printf("\nEnter name: ");
				fflush(stdin);
				gets(std[i].name);
				printf("Enter class: ");
				fflush(stdin);
				gets(std[i].class_room);
				printf("Enter date of birth: ");
				scanf("%d %d %d", &std[i].dob.day, &std[i].dob.month, &std[i].dob.year);
				printf("Enter address: ");
				fflush(stdin);
				gets(std[i].address);
			}
		}
		
		if(!found){
			printf("ID not invalid! - Please try again.\n");
		}
	}
}

int main(){
	int choice;
	int id;
	char name[30];
	struct Student std[maxStudents];
	
	printf("\n\t\tMenu");
	printf("\n 1. Creat and Input Student information");
	printf("\n 2. List all Students");
	printf("\n 3. Search Student by ID");
	printf("\n 4. Search Student by Name");
	printf("\n 5. Update Student by ID");
	printf("\n 6. Exit");
	printf("\n====================================\n");
	
	while(1){
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				creatStd(std);
				break;
			case 2:
				displayAll(std);
				break;
			case 3:
				findStdById(std, id);
				break;
			case 4:
				findStdByName(std, name);
				break;
			case 5:
				updateStdById(std, id);
				break;
			case 6:
				printf("\nEnding Program!\n");
				exit(0);
			default:
				printf("\nNot invalid! - Please try again.\n");
				printf("(Enter only from 1 to 6)\n");
				break;
		}
	}
	
	return 0;
}
	
	
	
	