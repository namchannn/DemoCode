#include <stdio.h>
int main(){
	int i, j, temp;
	int arr[5] = {23,90,9,25,16};
	for(i = 0; i < 5; i++){
		for(j = 0; j < 6 - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < 5; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}
