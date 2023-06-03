#include <stdio.h>
//Tinh chu vi, dien tich hinh binh hanh

int main(){
	float a, b, h; // chieu dai, chieu rong, chieu cao
	float P, S; // chu vi, dien tich
	printf("Nhap chieu dai \n");
	scanf("%f", &a);
	printf("Nhap chieu rong \n");
	scanf("%f", &b);
	printf("Nhap chieu cao \n");
	scanf("%f", &h);
	P = 2 * (a + b);
	S = a * h;
	printf("Chu vi %0.2f", P);
	printf("Dien tich %0.2f", S);
}
