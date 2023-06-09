#include <stdio.h>
// Sap xep Mang + phan ra thanh cac function
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sortArray(int n, int *ptr){
	int i, j, temp;
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(*(ptr + j) < *(ptr + i)){
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
				//======================
				/*temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;*/
			}
		}
	}
}
void printArray(int n, int *ptr){
	int i;
	for(i = 0; i < n; i++){
		printf("\n%d", ptr[i]);
	}
}
void findMax(int n, int *ptr){
	int i;
	int maxValue = ptr[0];
	for(i = 0; i < n; i++){
		if(ptr[i] > maxValue){
			maxValue = ptr[i];
		}
	}
	printf("\nLargest number is: %d", maxValue);
}
void findMin(int n, int *ptr){
	int i;
	int minValue = ptr[0];
	for(i = 0; i < n; i++){
		if(ptr[i] < minValue){
			minValue = ptr[i];
		}
	}
	printf("\nSmallest number is: %d", minValue);
}
int main(){
	int n = 5, i;
	int arr[] = {4,5,1,3,9};
	sortArray(n, arr);
	printArray(n, arr);
	findMax(n, arr);
	findMin(n, arr);
	// Print min, max number
	return 0;
}
