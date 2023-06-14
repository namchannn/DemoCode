#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Struct: là cách duy nhất nói về 1 đối tượng mà trên đối tượng đó có các kiểu dữ liệu khác nhau */
// Viết chương trình QLNV với các chức năng:
// 1. Tìm kiếm
// 2. Hiển thị thông tin
// 3. Nv có lương > 3000


struct employee{
	int eid;
	char name[50];
	float salary;
}emp[5];

void creatEmployee(int n){
	for(int i = 0; i < n; i++){
		printf("Enter ID Employee number %d: ", i + 1);
		scanf("%d", &emp[i].eid);
		fflush(stdin);
		printf("Enter Name: ");
		gets(emp[i].name);
		printf("Enter salary: ");
		scanf("%f", &emp[i].salary);
	}
}

void displayAll(int n){
	for(int i = 0; i < n; i++){
		printf("ID_Employee: %d", emp[i].eid);
		printf("\nName: ");
		puts(emp[i].name);
		printf("Salary: %0.2f$", emp[i].salary);
	}
}

void findEmployeeById(int id, int n){
	printf("\nResult check\n");
	for(int i = 0; i < n; i++){
		if(emp[i].eid == id){
			printf("ID_Employee: %d", emp[i].eid);
			printf("\nName: ");
			puts(emp[i].name);
			printf("Salary: %0.2f$", emp[i].salary);
		}
	}
}

void findEmployeeByName(char name[], int n){
	printf("\nResult check\n");
	for(int i = 0; i < n; i++){
		if(strcmp(emp[i].name, name) == 0){
			printf("ID_Employee: %d", emp[i].eid);
			printf("\nName: ");
			puts(emp[i].name);
			printf("Salary: %0.2f$", emp[i].salary);
		}
	}
}

void checkSalary(int n){
	printf("\nResult check\n");
	for(int i = 0; i < n; i++){
		if(emp[i].salary > 3000){
			printf("\nID_Employee: %d", emp[i].eid);
			printf("\nName: ");
			puts(emp[i].name);
			printf("Salary: %0.2f$\n", emp[i].salary);
		}
	}	
}

void updateEmployee(int id, int n){
	for(int i = 0; i < n; i++){
		if(emp[i].eid == id){
			printf("Enter new data to update: ");
			printf("\nEmployee name: ");
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
			case 1:
				printf("Enter number Employee: ");
				scanf("%d", &n);
				creatEmployee(n);
				break;
			case 2:
				printf("\nAll Employee: \n");
				displayAll(n);
				break;
			case 3:
				printf("\nEnter Employee ID to be search: ");
				scanf("%d", &id);
				findEmployeeById(id, n);				
				break;
			case 4:
				printf("\nEnter name of Employee to be search: ");
				fflush(stdin);
				gets(name);
				findEmployeeByName(name, n);
				break;
			case 5:
				checkSalary(n);
				break;
			case 6:
				printf("Enter ID Employee to be update: ");
				scanf("%d", &id);
				updateEmployee(id, n);
				break;
			case 7:				
				printf("End programing!!!\n");
				exit(0);
			default:
				printf("ID not invalid!!!\n");
				break;
		}
	}
	
	return 0;
}