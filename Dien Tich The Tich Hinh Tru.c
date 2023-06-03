#include <stdio.h>
// Tinh dien tich, the tich hinh tru

const float pi = 3.14159;

int main(){
	float r, h; // ban kinh, chieu cao
	float Sxq, Stp, V; // dien tich xung quanh, dien tich toan phan, the tich
	printf("Nhap ban kinh \n");
	scanf("%f", &r);
	printf("Nhap chieu cao\n");
	scanf("%f", &h);
	Sxq = pi * r * h * 2;
	Stp = pi * 2 * r * (r + h);
	V = pi * r * r * h;
	printf("Dien tich xung quanh %0.2f \n", Sxq);
	printf("Dien tich toan phan %0.2f \n", Stp);
	printf("The tich %0.2f \n", V);
}
