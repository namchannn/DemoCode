#include <stdio.h>
// Tinh chu vi, dien tich hinh cau

const float pi = 3.14159;

int main(){
	float r; // ban kinh
	float S, V; // dien tich, the tich
	printf("Nhap ban kinh \n");
	scanf("%f", &r);
	S = pi * r * r * 4;
	V = pi * r * r * r * 4 / 3;
	printf("Dien tich %0.2f \n", S);
	printf("The tich %0.2f \n", V);
}
