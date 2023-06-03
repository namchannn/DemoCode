#include <stdio.h>
// Tinh chu vi, dien tich hinh vuong

int main(){
	float a; // canh hinh vuong
	float P, S; // chu vi, dien tich
	printf("Nhap canh hinh vuong \n");
	scanf("%f", &a);
	P = 2 * a;
	S = a * a;
	printf("Chu vi %0.2f \n", P);
	printf("Dien tich %0.2f \n", S);
}
