#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Struct: là cách duy nhất nói về 1 đối tượng mà trên đối tượng đó có các kiểu dữ liệu khác nhau */
// Viết chương trình QLNV với các chức năng:
// 1. Nhập thông tin NV
// 2. Hiển thị thông tin tất cả NV
// 3. Tìm kiếm thông tin NV theo ID
// 4. Tìm kiếm thông tin NV theo Tên
// 5. Hiển thị NV lương > 3000
// 6. Cập nhật thông tin NV theo ID
// 7. Thoát

#define maxEMP 5 // Định nghĩa biến giới hạn slnv

// Hàm cấu trúc NV
struct employee{
	int eid; // Biến thành phần Mã NV
	char name[50]; // Biến thành phần tên NV
	float salary; // Biến thành phần lương NV
};

// Hàm kiểm tra ID trùng nhau
int checkDupId(struct employee emp[], int id,int currentEmpIndex){
	
	for(int i = 0; i < currentEmpIndex; i++){
		
		if(emp[i].eid == id){
			return 0; // nếu ID trùng trả về sai
		}
	}
	return 1; // ID k trùng trả về đúng
}

// Hàm nhập thông tin NV
void creatEmp(struct employee emp[]){
	
	for(int i = 0; i < maxEMP; i++){
		printf("Enter Employee %d:\n", i + 1);
		
		while(1){
			printf("Enter ID: ");
			scanf("%d", &emp[i].eid);
			
			if(checkDupId(emp, emp[i].eid, i)){ // thỏa mãn điều kiện check thì kết thúc vòng lặp
				break;
			}else{
				printf("ID already exists! Please try again.\n"); // không thỏa mãn thì báo lỗi yêu cầu nhập lại
			}
		}		
		printf("Enter Name: ");
		fflush(stdin);
		gets(emp[i].name);
		printf("Enter Salary: ");
		scanf("%f", &emp[i].salary);
	}
}

// Hàm hiển thị thông tin tất cả NV
void displayAll(struct employee emp[]){
	printf("\nAll Employee: \n");
	
	for(int i = 0; i < maxEMP; i++){
		printf("ID: %d", emp[i].eid);
		printf("\nName: ");
		puts(emp[i].name);
		printf("Salary: %0.2f$\n", emp[i].salary);
	}
}

// Hàm tìm kiếm thông tin NV theo ID
void findEmpById(struct employee emp[], int id){
	int found = 0;
	
	while(1){
		printf("\nEnter ID of Employee to be search (Or press the '0' button to back): ");
		scanf("%d", &id);
		
		if(id == 0){
			break;
		}
		printf("\nResult Check\n");
		
		for(int i = 0; i < maxEMP; i++){
			
			if(emp[i].eid == id){
			found = 1;
			printf("ID: %d", emp[i].eid);
			printf("\nName: ");
			puts(emp[i].name);
			printf("Salary: %0.2f$\n", emp[i].salary);
			break;
			}
		}
		
		if(!found){
			printf("ID not invalid! - Please try again.\n");
		}
	}	
}

// Hàm tìm kiếm thông tin NV theo tên
void findEmpByName(struct employee emp[], char name[]){
	int found = 0;
	int i;
	
	while(1){
		printf("\nEnter name of Employee to be search (Or press the '0' button to back): ");
		fflush(stdin);
		gets(name);
		
		if(name[i] == '0'){
			break;
		}
		printf("\nResult Check\n");
	
		for(int i = 0; i < maxEMP; i++){
		
			if(strcmp(emp[i].name, name) == 0){
			found = 1;
			printf("ID: %d", emp[i].eid);
			printf("\nName: ");
			puts(emp[i].name);
			printf("Salary: %0.2f$\n", emp[i].salary);
			break;
			}
		}
		
		if(name[i] != found){
			printf("Name not invalid! - Please try again.\n");
			continue;
		}
	}
	
}

// Hàm kiểm tra lương NV
void checkSalary(struct employee emp[]){
	printf("\nResult Check\n");
	
	for(int i = 0; i < maxEMP; i++){
		
		if(emp[i].salary > 3000){ // NV lương > 3000 thì hiển thị
			printf("ID: %d", emp[i].eid);
			printf("\nName: ");
			puts(emp[i].name);
			printf("Salary: %0.2f$\n", emp[i].salary);
		}
	}	
}

// Hàm cập nhật thông tin NV theo ID
void updateEmp(struct employee emp[], int id){
	int found = 0;
	
	while(1){
		printf("\nEnter ID Employee to be update (Or press the '0' button to back): ");
		scanf("%d", &id);
		
		if(id == 0){
			break;
		}
		
		for(int i = 0; i < maxEMP; i++){
			
			if(emp[i].eid == id){
				found = 1;
				printf("Enter new data to update: ");
				printf("\nEmployee Name: ");
				fflush(stdin);
				gets(emp[i].name);
				printf("Salary: ");
				scanf("%f", &emp[i].salary);
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
	char name[50];
	struct employee emp[maxEMP];
	
	printf("\n\t\tMenu");
	printf("\n 1. Creat and Input Employee information");
	printf("\n 2. List all Employees");
	printf("\n 3. Search Employee by ID");
	printf("\n 4. Search Employee by Name");
	printf("\n 5. Display Employee whose salary > 3000");
	printf("\n 6. Update Employee by ID");
	printf("\n 7. Exit");
	printf("\n====================================\n");
	
	while(1){
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			
			case 1:
				creatEmp(emp);
				break;
			case 2:
				displayAll(emp);
				break;
			case 3:
				findEmpById(emp, id);				
				break;
			case 4:
				findEmpByName(emp, name);
				break;
			case 5:
				checkSalary(emp);
				break;
			case 6:
				updateEmp(emp, id);
				break;
			case 7:
				printf("\nEnding Program!\n");
				exit(0);
			default:
				printf("\nNot invalid! - Please try again.\n");
				printf("(Enter only from 1 to 7)\n");
				break;
		}
	}
	
	return 0;
}