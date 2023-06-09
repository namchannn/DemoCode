#include <stdio.h>
// Khai bao ham ten: add voi 2 tham so x, y

// Step 1
int add(int x, int y);

int main(){
	int a = 5, b = 10, total = 0;
	// Goi ham (yeu cau ham add thuc thi)
	// Step 2 - Goi ham
	total = add(a, b); // => x = a; y = b;
	printf("%d", total);
}

// Step 3 - Coding
// Trien khai code trong ham add
int add(int x, int y){
	int sum;
	sum = x + y;
	// Ket qua tinh toan cua ham se tra ve cho noi goi ham add
	return sum;
}
