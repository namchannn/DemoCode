#include <stdio.h>
int main(){
	int data[] = {5,2,9,7,6,10};
	int a = 7, i;
	for(i = 0; i < 6; i++){
		if(a == data[i]){
			break;
		}
		if(i < 6){
			printf("Number %d found at %d.\n", a, i);
		}else{
			printf("Number %d not found.\n", a);
		}
	}
	return 0;
}
