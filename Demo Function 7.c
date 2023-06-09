#include <stdio.h>
// Sắp xếp Mảng + phân ra thành các function

// Code function swap value 2 variable
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Code function sort Array
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

// Code function print Array
void printArray(int n, int *ptr){
	int i;
	for(i = 0; i < n; i++){
		printf("\n%d", ptr[i]);
	}
	printf("\n");
}
// Code fucntion find Min Value
void findMin(int n, int *ptr){
	int i;
	int minValue = ptr[0];
	for(i = 0; i < n; i++){
		if(ptr[i] < minValue){
			minValue = ptr[i];
		}
	}
	printf("\nSmallest number is: %d\n", minValue);
}

// Code function find Max Value
void findMax(int n, int *ptr){
	int i;
	int maxValue = ptr[0];
	for(i = 0; i < n; i++){
		if(ptr[i] > maxValue){
			maxValue = ptr[i];
		}
	}
	printf("\nLargest number is: %d\n", maxValue);
}

int main(){
	int n = 5, i;
	int arr[] = {4,5,1,3,9};
	// Call function sort Array
	sortArray(n, arr);
	// Call function print Array
	printArray(n, arr);
	// Call function print Min, Max Number
	findMin(n, arr);
	findMax(n, arr);
	return 0;
}
