#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Struct: là cách duy nhất nói về 1 đối tượng mà trên đối tượng đó có các kiểu dữ liệu khác nhau */
// Viết chương trình QLNV với các chức năng:
// 1. Tìm kiếm
// 2. Hiển thị thông tin
// 3. Nviên có lương > 3000


struct employee{ // Hàm cấu trúc dữ liệu Nhân Nviên
	int eid;
	char name[50];
	float salary;
}emp[5];

void creatEmployee(int n){ // Hàm tạo thông tin Nviên
	for(int i = 0; i < n; i++){
		printf("Enter Employee ID %d: ", i + 1);
		scanf("%d", &emp[i].eid);
		fflush(stdin);
		printf("Enter Name: ");
		gets(emp[i].name);
		printf("Enter Salary: ");
		scanf("%f", &emp[i].salary);
	}
}

void displayAll(int n){ // Hiển thị thông tin của tất cả Nviên
	for(int i = 0; i < n; i++){
		printf("Employee ID: %d", emp[i].eid);
		printf("\nName: ");
		puts(emp[i].name);
		printf("Salary: %0.2f$\n", emp[i].salary);
	}
}

void findEmployeeById(int id, int n){ // Tìm kiếm thông tin Nviên bằng ID
	printf("\nResult Check\n");
	for(int i = 0; i < n; i++){
		if(emp[i].eid == id){
			printf("Employee ID: %d", emp[i].eid);
			printf("\nName: ");
			puts(emp[i].name);
			printf("Salary: %0.2f$\n", emp[i].salary);
		}
	}
}

void findEmployeeByName(char name[], int n){ // Tìm kiếm thông tin Nviên bằng tên
	printf("\nResult Check\n");
	for(int i = 0; i < n; i++){
		if(strcmp(emp[i].name, name) == 0){
			printf("Employee ID: %d", emp[i].eid);
			printf("\nName: ");
			puts(emp[i].name);
			printf("Salary: %0.2f$\n", emp[i].salary);
		}
	}
}

void checkSalary(int n){ // Kiểm tra lương
	printf("\nResult Check\n");
	for(int i = 0; i < n; i++){
		if(emp[i].salary > 3000){ // Lương trên 3000$
			printf("Employee ID: %d", emp[i].eid);
			printf("\nName: ");
			puts(emp[i].name);
			printf("Salary: %0.2f$\n", emp[i].salary);
		}
	}	
}

void updateEmployee(int id, int n){ // Cập nhật thông tin Nviên bằng ID
	for(int i = 0; i < n; i++){
		if(emp[i].eid == id){
			printf("Enter new data to update: ");
			printf("\nEmployee Name: ");
			fflush(stdin);
			gets(emp[i].name);
			printf("Salary: ");
			scanf("%f", &emp[i].salary);
		}
	}
}

int main(){
	int choice;
	int n, id;
	char name[50];
	
	printf("\n\t\tMenu");
	printf("\n 1. Creat Employee");
	printf("\n 2. List all Employee");
	printf("\n 3. Search Employee by ID");
	printf("\n 4. Search Employee by Name");
	printf("\n 5. Display Employee whose salary > 3000");
	printf("\n 6. Update Employee");
	printf("\n 7. Exit");
	printf("\n====================================\n");
	while(1){
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1: // Nhập thông tin cho Nvien
				printf("Enter number Employee: ");
				scanf("%d", &n);
				creatEmployee(n);
				break;
			case 2: // Hiển thị thông tin tất cả Nviên
				printf("\nAll Employee: \n");
				displayAll(n);
				printf("\n");
				break;
			case 3: // Tìm Nviên bằng ID
				printf("\nEnter Employee ID to be search: ");
				scanf("%d", &id);
				findEmployeeById(id, n);				
				break;
			case 4: // Tìm Nviên bằng tên
				printf("\nEnter name of Employee to be search: ");
				fflush(stdin);
				gets(name);
				findEmployeeByName(name, n);
				break;
			case 5:	// Kiểm tra lương trên 3000
				checkSalary(n);
				break;
			case 6: // Cập nhật thông tin Nviên
				printf("\nEnter ID Employee to be update: ");
				scanf("%d", &id);
				updateEmployee(id, n);
				break;
			case 7:	// Kết thúc
				printf("\nEnd programing!!!\n");
				exit(0);
			default: // Nhập lại
				printf("\nNot invalid - Enter only from 1 to 7!!!\n");
				break;
		}
	}
	
	return 0;
}