#include <stdio.h>
// Tinh chu vi, dien tich hinh thang

int main(){
	float a, b, c, d, h; // canh tren, canh duoi, canh trai, canh phai, chieu cao
	float P, S; // chu vi, dien tich
	printf("Nhap canh tren \n");
	scanf("%f", &a);
	printf("Nhap canh duoi \n");
	scanf("%f", &b);
	printf("Nhap canh trai \n");
	scanf("%f", &c);
	printf("Nhap canh phai \n");
	scanf("%f", &d);
	printf("Nhap chieu cao \n");
	scanf("%f", &h);
	P = a + b + c + d;
	S = (a + b)/2 * h;
	printf("Chu vi %0.2f \n", P);
	printf("Dien tich %0.2f \n", S);
}
