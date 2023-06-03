#include <stdio.h>
// Tinh chu vi, dien tich hinh thoi

int main(){
	float a, d1, d2; // canh ben, duong cheo 1, duong cheo 2
	float P, S; // chu vi, dien tich
	printf("Nhap canh ben \n");
	scanf("%f", &a);
	printf("Nhap duong cheo 1 \n");
	scanf("%f", &d1);
	printf("Nhap duong cheo 2 \n");
	scanf("%f", &d2);
	P = 4 * a;
	S = (d1 * d2) / 2;
	printf("Chu vi %0.2f \n", P);
	printf("Dien tich %0.2f \n", S);
}
