#include <stdio.h>
// Kiem tra 1 so bat ky la so chan hay le

int main()
{
	int num, res; // so nhap vao, so chia 2 lay du
	
	printf("Nhap 1 so: \n");
	scanf("%d", &num);
	res = num % 2;
	
	if (res == 0)	// chia het cho 2
		printf("la so chan \n");
	else			// khong chia het cho 2
		printf("la so le \n");
}
