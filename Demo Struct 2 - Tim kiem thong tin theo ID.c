#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Struct: là Mảng mà phần tử Mảng có các kiểu dữ liệu khác nhau
// Tên của struct (cấu trúc)
// Viết chương trình QLNV với các chức năng:
// 1. Nhập thông tin SV
// 2. Hiển thị thông tin tất cả SV
// 3. Tìm kiếm thông tin SV theo ID
// 4. Tìm kiếm thông tin SV theo Tên
// 5. Cập nhật thông tin NV theo ID
// 0. Thoát

struct DateOfBirth{
	int day;
	int month;
	int year;
};

struct student{
	int eid;
	char name[50];
	char class_room[10];
	char address[100];
	struct DateOfBirth dob;
};

bool checkDupID(struct student std[], int id, int currentStdIndex){
	
	for(int i = 0; i < currentStdIndex; i++){
		
		if(std[i].eid == id){
			return false;
		}
	}
	return true;
}

void creatStd(struct student std[], int maxStd){
	
	for(int i = 0; i < maxStd; i++){
		printf("Enter Student %d:\n", i + 1);
		
		while(true){
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

void displayStd(struct student std[], int maxStd){
	
	for(int i = 0; i < maxStd; i++){
		printf("\nID: %d", std[i].eid);
		printf("\nName: ");
		puts(std[i].name);
		printf("Class room: ");
		puts(std[i].class_room);
		printf("Date of birth: %d/%d/%d", std[i].dob.day, std[i].dob.month, std[i].dob.year);
		printf("\nAddress: ");
		puts(std[i].address);
	}
}

void updateStdById(struct student std[], int id, int maxStd){
	int found = 0;
	
	while(1){
		printf("\nEnter ID Student to be update (Or press the '0' button to back): ");
		scanf("%d", &id);
		
		if(id == 0){
			break;
		}
		
		for(int i = 0; i < maxStd; i++){
			
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
			printf("\n\tID not found! - Please try again.\n");
			continue;
		}
		break;
	}
}

void sortStdById(struct student std[], int maxStd){
	struct student temp;
	
	for(int i = 0; i < maxStd; i++){
		
		for(int j = 0; j < maxStd - i - 1; j++){
			
			if(std[j].eid > std[j + 1].eid){
				temp = std[j];
				std[j] = std[j + 1];
				std[j + 1] = temp;
			}
		}
	}
	printf("\n\tSorted ID\n");
	displayStd(std, maxStd);
}

void findStdById(struct student std[], int id, int maxStd){
	int found = 0;
	
	while(1){
		printf("\nEnter ID of Student to be search (Or press the '0' button to back): ");
		scanf("%d", &id);
		
		if(id == 0){
			break;
		}
		printf("\n\tResult Check\n\n");
		
		for(int i = 0; i < maxStd; i++){
			
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
				break;
			}
		}
		
		if(!found){
			printf("ID not found! - Please try again.\n");
			continue;
		}
		break;
	}
}

void findStdByName(struct student std[], char name[], int maxStd){
	int found = 0;
	int i;
	
	while(1){
		printf("\nEnter Name of Student to be search (Or press the '0' button to back): ");
		fflush(stdin);
		gets(name);
		
		if(name[i] == '0'){
			break;
		}
		printf("\n\tResult Check\n\n");
		
		for(int i = 0; i < maxStd; i++){
			
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
				break;
			}
		}
		
		if(!found){
			printf("Name not found! - Please try again.\n");
			continue;
		}
		break;
	}
}

int main(){
	int choice;
	int id;
	int maxStd;
	char name[50];
	struct student *std;
	
	std = (struct student*)malloc(maxStd * sizeof(struct student));
	
	printf("\tCreat and Input Student information\n");
	printf("Enter number of Student to be creat: ");
	scanf("%d", &maxStd);
	creatStd(std, maxStd);
	printf("\n\t\tMenu");
	printf("\n 1. Update Student by ID");
	printf("\n 2. List all Students");
	printf("\n 3. Sort Students by ID");
	printf("\n 4. Search Student by ID");
	printf("\n 5. Search Student by Name");
	printf("\n 0. Exit");
	printf("\n====================================\n");
	
	while(1){
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			
			case 1:
				printf("\n\tAll Students:\n");
				displayStd(std, maxStd);
				updateStdById(std, id, maxStd);
				printf("\n\tUpdated!\n");
				break;
			case 2:
				printf("\n\tAll Students:\n");
				displayStd(std, maxStd);
				break;
			case 3:
				sortStdById(std, maxStd);
				break;
			case 4:
				findStdById(std, id, maxStd);
				break;
			case 5:
				findStdByName(std, name, maxStd);
				break;
			case 0:
				printf("\n\tEnding Program...\n");
				free(std);
				exit(0);
				break;
			default:
				printf("\n\tNot invalid! - Please try again.\n");
				break;
		}
	}
	
	return 0;
}
	
	
	
	