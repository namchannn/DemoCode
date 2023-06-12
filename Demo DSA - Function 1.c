#include <stdio.h>

// Function to swap elements
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Bubble sort function
void bubbleSort(int array[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(array[j] > array[j + 1]){
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

// Insertion sort function
void insertionSort(int array[], int n){
	int element;
	for(int i = 1; i < n; i++){
		element = array[i];
		int j = i - 1;
		while(j >= 0 && array[j] > element){
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = element;
	}
}

// Selection sort function
void selectionSort(int array[], int n){
	int min_element;
	for(int i = 0; i < n - 1; i++){
		min_element = i;
		for(int j = i + 1; j < n; j++){
			if(array[j] < array[min_element]){
				min_element = j;
				swap(&array[min_element], &array[i]);
			}	
		}
	}
}

// Function to print the elements of an array
void printArray(int array[], int size){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
}

// Main function
int main(){
	
	// Declaration
	int array[] = {89,32,20,113,15};
	int size = sizeof(array) / sizeof(array[0]);
	int n = sizeof(array) / sizeof(array[0]);
	
	// Function call
	bubbleSort(array, size);
//	insertionSort(array, n);
//	selectionSort(array, size);
	
	// Display
	printf("Sorted Array: ");
	printArray(array, size);
	return 0;
}