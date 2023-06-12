#include <stdio.h>
#include <string.h>

// Struct: là Mảng mà phần tử Mảng có các kiểu dữ liệu khác nhau
// Tên của struct (cấu trúc)

struct Student
{
	// Biến thành phần
	int roll_no;
	char name[30]; // gets(name)
	int class_room;
	char section;
	float marks;
} student1; // Biến struct

int main(){
	
	struct Student student1;
	student1.roll_no = 1;
	strcpy(student1.name,"Nguyen Phu Trong"); // gets(student1.name);
	student1.marks = 11;
	student1.class_room = 2;
	
	printf("\nStudent roll number: %d", student1.roll_no);
	printf("\nStudent name: %s", student1.name);
	printf("\nStudent marks: %0.2lf", student1.marks);
	
}