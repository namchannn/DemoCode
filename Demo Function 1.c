#include <stdio.h>
// Khai báo hàm tên: add với 2 tham số x, y

// Step 1
int add(int x, int y);

int main(){
	int a = 5, b = 10, total = 0;
	// Gọi hàm (yều cầu hàm add thực thi)
	// Step 2 - Gọi hàm
	total = add(a, b); // => x = a; y = b;
	printf("%d", total);
}

// Step 3 - Coding
// Triển khai code trong hàm add
int add(int x, int y){
	int sum;
	sum = x + y;
	// Kết quả tính toán của hàm sẽ trả về chỗ nơi gọi hàm add
	return sum;
}
