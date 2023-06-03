// Demo Array
#include <stdio.h>
int main(){
	// 1. Array 1 bien
	// 2. Cac phan tu mang lien tiep nhau trong o nho duoc cap phat
	// 3. Dung mang "Lean code"
	// 4. Loop la thanh phan nhu ca + nuoc voi Array
	
	// Yeu cau: Tinh tong cac ptu cua mang
	/*
		Giai thuat: Algorithm
		b1 -> DN 1 mang A va gan gia tri
		b2 -> Lap trong moi ptu cua mang A de lay gia tri
		b3 -> Khai bao 1 bien 'sum' luu ket qua
		b4 -> Hien thi ket qua sau khi vong lap ket thuc
	*/
	int array[5] = {4,3,1,0,9}; // b1
	int loop; // b2
	int maxValue1, maxValue2;
	int minValue;
	/*
		array[0] = 4;
		array[1] = 3;
		array[2] = 1;
		array[3] = 0;
		array[4] = 9;
	*/
	// b3
	maxValue1 = array[0];
	maxValue2 = array[0];
	minValue = array[1];
	// b4
	for(loop = 1; loop < 5; loop++){
		// b5
		if(array[loop] > maxValue1 && maxValue1 > maxValue2){
			maxValue2 = array[loop];
		}
	}
	printf("Ptu lon nhat trong mang array la: %d\n", maxValue2);
	for(loop = 1; loop < 5; loop++){
		if(array[loop] < minValue){
			minValue = array[loop];
		}
	}
	printf("Ptu nho nhat trong mang array la: %d", minValue);
	return 0;
}
