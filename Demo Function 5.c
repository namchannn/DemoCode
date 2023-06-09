#include <stdio.h>

// Code function change Reference
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int i = 5, j = 10;
	swap(&i, &j); // Goi va truyen tham chieu aka call by reference
	printf("\nGia tri cua i: %d va gia tri cua j: %d", i, j);
	return 0;
}
