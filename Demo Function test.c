#include <stdio.h>
// Declare function show with parameters which are a, b, c
void show(int a, int b, int c){
	int maxValue = a;
	if(maxValue < b){
		maxValue = b;
	}
	if(maxValue < c){
		maxValue = c;
	}
	// Print the largest number among three parameters
	printf("%d\n", maxValue);
}

int main(){
	// Call function show, its arguments are a = 4, b = 6, c = 3
	show(4, 6, 3);
	// Call function show, its arguments are a = 2, b = 1, c = 5
	show(2, 1, 5);
	// Call function show, its arguments are a = 3, b = 3, c = 3
	show(3, 3, 3);
	return 0;
}
