#include <stdio.h>
// Tinh chu vi, dien tich hinh chu nhat

int main(){
	float a, b; // chieu dai, chieu rong
	float P, S; // chu vi, dien tich
	printf("Nhap chieu dai \n");
	scanf("%f", &a);
	printf("Nhap chieu rong \n");
	scanf("%f", &b);
	P = 2 * (a + b);
	S = a * b;
	printf("Chu vi %0.2f \n", P);
	printf("Dien tich %0.2f \n", S);
}
