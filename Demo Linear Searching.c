#include <stdio.h>
int main(){
	int data[] = {5,2,9,7,6,10};
	int a, i, j;
	printf("data[] = {5,2,9,7,6,10}\n");
	printf("Enter a: ");
	scanf("%d", &a);
	for(i = 0; i < 6; i++){
		if(a == data[i]){
			printf("Number %d found at index %d.", a, i);
			break;
		}
	}
	if(a != data[i]){
		printf("Number not found at array.");
	}
	return 0;
}
