#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Struct: là cách duy nhất nói về 1 đối tượng mà trên đối tượng đó có các kiểu dữ liệu khác nhau */
// Viết chương trình QLNV với các chức năng:
// 1. Nhập thông tin NV
// 2. Hiển thị thông tin tất cả NV
// 3. Tìm kiếm thông tin NV theo ID
// 4. Tìm kiếm thông tin NV theo Tên
// 5. Sắp xếp NV theo thứ tự ID
// 6. Sắp xếp NV lương giảm dần
// 7. Hiển thị NV lương > 3000
// 8. Cập nhật thông tin NV theo ID
// 9. Thoát

#define maxEMP 5 // Định nghĩa giới hạn SLNV

// Hàm cấu trúc NV
struct employee{
	int eid; // Biến thành phần Mã NV
	char name[50]; // Biến thành phần tên NV
	float salary; // Biến thành phần lương NV
};

// Hàm kiểm tra ID trùng nhau
bool checkDupId(struct employee emp[], int id,int currentEmpIndex){
	
	for(int i = 0; i < currentEmpIndex; i++){
		
		if(emp[i].eid == id){
			return false; // nếu ID trùng trả về sai
		}
	}
	return true; // ID k trùng trả về đúng
}

// Hàm nhập thông tin NV
void creatEmp(struct employee emp[]){
	
	for(int i = 0; i < maxEMP; i++){
		printf("Enter Employee %d:\n", i + 1);
		
		while(true){
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
void displayEmp(struct employee emp[]){
	
	for(int i = 0; i < maxEMP; i++){
		printf("ID: %d", emp[i].eid);
		printf("\nName: ");
		puts(emp[i].name);
		printf("Salary: %0.2f$\n", emp[i].salary);
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
			continue;
		}
		break;
	}
}

// Hàm sắp xếp NV theo ID
void sortEmpById(struct employee emp[]){
	struct employee temp;
	
	for(int i = 0; i < maxEMP; i++){
		
		for(int j = 0; j < maxEMP - i - 1; j++){
			
			if(emp[j].eid > emp[j + 1].eid){
				temp = emp[j];
				emp[j] = emp[j + 1];
				emp[j + 1] = temp;
			}
		}
	}
	printf("\nSorted ID\n");
	displayEmp(emp);
}

// Hàm sắp xếp lương NV giảm dần
void sortEmpBySalaryRank(struct employee emp[]){
	struct employee temp;
	
	for(int i = 0; i < maxEMP; i++){ // Bubble Sort
		
		for(int j = 0; j < maxEMP - i - 1; j++){
			
			if(emp[j].salary < emp[j + 1].salary){
				temp = emp[j];
				emp[j] = emp[j + 1];
				emp[j + 1] = temp;
			}
		}
	}
	printf("\nRank Salary\n");
	displayEmp(emp);
}

// Hàm tìm kiếm NV có lương cao nhất
void findEmpMaxSalary(struct employee emp[]){
	struct employee maxRank = emp[0];
	
	for(int i = 0; i < maxEMP; i++){
		
		if(emp[i].salary > maxRank.salary){
			maxRank = emp[i];
		}
	}
	printf("\nResult Check\n");
	printf("ID: %d", maxRank.eid);
	printf("\nName: ");
	puts(maxRank.name);
	printf("Salary: %0.2f$\n", maxRank.salary);
}

// Hàm kiểm tra lương NV > 3000
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
			continue;
		}
		break;
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
		
		if(!found){
			printf("Name not invalid! - Please try again.\n");
			continue;
		}
		break;
	}
}

int main(){
	int choice;
	int id, index;
	char name[50];
	struct employee emp[maxEMP];
	
	printf("\n\t\tMenu");
	printf("\n 1. Creat and Input Employee information");
	printf("\n 2. Update Employee by ID");
	printf("\n 3. List all Employees");
	printf("\n 4. Sort Employee by ID");
	printf("\n 5. Sort Employee Salary High to Low");
	printf("\n 6. Search Employee largest Salary");
	printf("\n 7. Search Employee by ID");
	printf("\n 8. Search Employee by Name");
	printf("\n 9. Exit");
	printf("\n====================================\n");
	
	while(1){
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			
			case 1:
				creatEmp(emp);
				break;
			case 2:
				updateEmp(emp, id);
				break;
			case 3:
				printf("\nAll Employee: \n");
				displayEmp(emp);
				break;
			case 4:
				sortEmpById(emp);
				break;
			case 5:
				sortEmpBySalaryRank(emp);
				break;
			case 6:
				findEmpMaxSalary(emp);
				break;
			case 7:
				findEmpById(emp, id);
				break;
			case 8:
				findEmpByName(emp, name);
				break;
			case 9:
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