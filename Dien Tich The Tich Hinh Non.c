#include <stdio.h>
// Tinh dien tich, the tich hinh non

const float pi = 3.14159;

int main(){
	float r, l, h; // ban kinh, duong sinh, chieu cao
	float Sd, Sxq, Stp, V; // dien tich day, dien tich xung quanh, dien tich toan phan, the tich
	printf("Nhap ban kinh \n");
	scanf("%f", &r);
	printf("Nhap duong sinh \n");
	scanf("%f", &l);
	printf("Nhap chieu cao \n");
	scanf("%f", &h);
	Sd = pi * r * r;
	Sxq = pi * r * l;
	Stp = Sxq + Sd;
	V = pi * r * r * h / 3;
	printf("Dien tich xung quanh %0.2f \n", Sxq);
	printf("Dien tich toan phan %0.2f \n", Stp);
	printf("The tich %0.2f \n", V);
}
