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
} student[5]; // Biến struct

int main(){
	
	for (int i = 0; i < 5; i++){
		printf("\nNhap thong tin SV thu %d", i + 1);
		printf("\nName: ");
		gets(student[i].name);
	}
	for (int i = 0; i < 5; i++){
		printf("\nTen SV: ");
		puts(student[i].name);
	}
	
	return 0;
}