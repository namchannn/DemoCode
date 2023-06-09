#include <stdio.h>
void checkPrimeNumber(int n); // define function
int main(){
	int number;
	printf("\nNhap vao 1 so nguyen duong: ");
	scanf("%d", &number);
		checkPrimeNumber(number); // call function
	return 0;
}
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
