#include <stdio.h>
// Tinh chu vi, dien tich hinh tron

const float pi = 3.14159;

int main(){
	float r; // ban kinh
	float P, S; // chu vi, dien tich
	printf("Nhap ban kinh \n");
	scanf("%f", &r);
	P = 2 * pi * r;
	S = pi * r * r;
	printf("Chu vi %0.5f \n", P);
	printf("Dien tich %0.5f \n", S);
}
