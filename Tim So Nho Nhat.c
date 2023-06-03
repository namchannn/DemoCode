#include <stdio.h>
// Tim so nho nhat trong 3 so nhap vao bat ky

int main()
{
	int num1, num2, num3;	
	printf("Nhap 1 so: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if ((num1 < num2) && (num1 < num3))
		printf("num1 la so nho nhat \n");
	else if ((num2 < num1) && (num2 < num3))
		printf("num2 la so nho nhat \n");
	else
		printf("num3 la so nho nhat \n");
}
