#include <stdio.h>
// Tinh chu vi, dien tich hinh tam giac

int main(){
	float a, b, c, h; // canh day, canh ben 1, canh ben 2, chieu cao
	float P, S; // chu vi, dien tich
	printf("Nhap canh day \n");
	scanf("%f", &a);
	printf("Nhap canh ben 1 \n");
	scanf("%f", &b);
	printf("Nhap canh ben 2 \n");
	scanf("%f", &c);
	printf("Nhap chieu cao \n");
	scanf("%f", &h);
	P = a + b + c;
	S = a * h / 2;
	printf("Chu vi %0.2f \n", P);
	printf("Dien tich %0.2f \n", S);
}
