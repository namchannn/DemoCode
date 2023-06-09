#include <stdio.h>

// Define function
void checkPrimeNumber(int n);

int main(){
	int number;
	printf("\nNhap vao 1 so nguyen duong: ");
	scanf("%d", &number);
		// Call function
		checkPrimeNumber(number);
	return 0;
}

// Code function check Prime Number
void checkPrimeNumber(int n){
	int i, flag = 0;
	// 0 va 1 loai
	if(n == 0 || n == 1){
		flag = 1;
	}
	for(i = 2; i < n / 2; i++){
		if(n % i == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		printf("%d khong phai la so nguyen to.", n);
	}else{
		printf("%d la so nguyen to.", n);
	}
}
