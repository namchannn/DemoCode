#include <stdio.h>
// Tinh dien tich, the tich hinh lap phuong

int main(){
	float a; // canh
	float Sm, Sxq, Stp, V; // dien tich mat, dien tich xung quanh, dien tich toan phan, the tich
	printf("Nhap canh \n");
	scanf("%f", &a);
	Sm = a * a;
	Sxq = Sm * 4;
	Stp = Sm * 6;
	V = a * a * a;
	printf("Dien tich xung quanh %0.2f \n", Sxq);
	printf("Dien tich toan phan %0.2f \n", Stp);
	printf("The tich %0.2f \n", V);
}
