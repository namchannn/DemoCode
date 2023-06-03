#include <stdio.h>
// Tinh dien tich, the tich hinh hop chu nhat

int main(){
	float a, b, h; // chieu dai, chieu rong, chieu cao
	float P, Sd, Sxq, Stp, V; // chu vi day, dien tich day, dien tich xung quanh, dien tich toan phan, the tich
	printf("Nhap chieu dai \n");
	scanf("%f", &a);
	printf("Nhap chieu rong \n");
	scanf("%f", &b);
	printf("Nhap chieu cao \n");
	scanf("%f", &h);
	P = (a + b) * 2;
	Sd = a * b;
	Sxq = P * h;
	Stp = Sxq + Sd * 2;
	V = a * b * h;
	printf("Dien tich xung quanh %0.2f \n", Sxq);
	printf("Dien tich toan phan %0.2f \n", Stp);
	printf("The tich %0.2f \n", V);
}
