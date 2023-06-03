#include <stdio.h>
// Tim so lon nhat trong 5 so nhap vao bat ky

int main()
{
	int num1, num2, num3, num4, num5;
	printf("Nhap 5 so bat ky \n");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	
	if ((num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5))
		printf("num1 la so lon nhat \n");
	else if ((num2 > num1) && (num2 > num3) && (num2 > num4) && (num2 > num5))
		printf("num2 la so lon nhat \n");
	else if ((num3 > num1) && (num3 > num2) && (num3 > num4) && (num3 > num5))
		printf("num3 la so lon nhat \n");
	else if ((num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5))
		printf("num4 la so lon nhat \n");
	else
		printf("num5 la so lon nhat \n");
}
