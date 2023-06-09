#include <stdio.h>
void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	printf("\nGia tri cua a: %d va gia tri cua b: %d", a, b);	
}
int main(){
	int i = 5, j = 10;
	swap(i, j); // Goi va truyen tham chieu aka call by value
	return 0;
}
