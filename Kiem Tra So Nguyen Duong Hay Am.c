#include <stdio.h>
// Kiem tra 1 so nguyen bat ky la so duong hay am

int main()
{
	int num;
	printf("Nhap 1 so bat ky: \n");
	scanf("%d", &num);
	
	if (num > 0)
		printf("%d la so duong \n", num);
	else if (num < 0)
		printf("%d la so am \n", num);
	else
		printf("0 la so khong duong va khong am");
}
