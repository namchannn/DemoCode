#include <stdio.h>

// Code function change Value
void change(int num){
	num = num + 200;
	printf("\nGia tri truyen vao: %d", num);
}

int main(){
	int x = 10;
	// Call function
	change(x);
	printf("\nGia tri x sau khi goi ham: %d", x);
	return 0;
}
