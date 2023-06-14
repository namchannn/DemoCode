#include <stdio.h>
#include <stdlib.h>

struct Employee{
	int id;
	char name[50];
	float salary;
};

struct Employee *ptr;
struct Employee *ptr1;
// Malloc
ptr = (struct Employee*)malloc(sizeof(struct Employee));
// Calloc
ptr1 = (struct Employee*)calloc(n, sizeof(struct Employee));

// Array
ptr[0].id = 1;
strcp(ptr[0].name, "Hai");
ptr[0].salary = 1000;

// Pointer
ptr->id;
ptr->name;
ptr->salary;

int main(){
	
	return 0;
}