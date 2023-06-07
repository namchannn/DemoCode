#include <stdio.h>
#include <stdlib.h>
int main(){
	int *ptr; // Khai bao
	int a = 10;
	ptr = &a; // ptr tro vao bien a
	// *ptr = gia tri cua a => *ptr = 10
	// ptr = dia chi cua a
	*ptr = 50; // a = 50
	printf("\nGia tri cua a: %d va %d", a, *ptr);
	printf("\nDia chi cua a: %d, ptr %d", &a, ptr);
	return 0;
}

// Or
int main(){
	int arr[10];
	float *ptr2;
	// Dia chi cua Mang:
	/*
		1. Ten + chi so
		2. &ten_Mang[Chi so]
		=> Ten cua Mang la Hang Con Tro, tro vao Mang do
	*/
	// Ung dung: Su dung Con Tro de cap phat bo nho dong
	// Tuc la Mang khong con bi gioi han vi su dung Mang nhu Con Tro
	int *ptr; // Khai bao 1 Mang "dong"
	int n, i, sum = 0;
	printf("Ban muon luu tru bao nhieu phan tu: ");
	scanf("%d", &n);
	// Cap phat bo nho dong
	ptr = (int*)malloc(n*sizeof(int));
	ptr2 = (float*)malloc(n*sizeof(float));
	printf("\nNhap gia tri: \n");
	for(i = 0; i < n; i++){
		scanf("%d", ptr + i); // scanf("%d", &ptr[i];
	}
	printf("\nMang vua nhap: ");
	for(i = 0; i < n; i++){
		printf("\n%d", ptr[i]); // printf("%d", *(ptr + i));
	}
	// Sort array
	int j, temp;
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(ptr[i] > ptr[j]){ // if(*(ptr + i) < *(ptr + j))
				temp = ptr[i];	// temp = *(ptr + i);
				ptr[i] = ptr[j]; // *(ptr + i) = *(ptr + j);
				ptr[j] = temp; // *(ptr + j) = temp;
			}
		}
	}
	printf("\n\nMang sap xep: ");
	for(i = 0; i < n; i++){
		printf("\n%d", ptr[i]); // printf("\n%d", *(ptr + i));
	}
	return 0;
}
