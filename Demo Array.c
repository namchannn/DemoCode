// Demo Array
#include <stdio.h>
int main(){
	// 1. Array 1 biến
	// 2. Các phần tử Mảng liên tiếp nhau trong ô nhớ được cấp phát
	// 3. Dùng Mảng "Lean code"
	// 4. Loop là thành phần như cá + nước với Array
	
	// Yêu cầu: Tính tổng các phần tử của Mảng
	/*
		Giải thuật: Algorithm
		b1 -> ĐN 1 Mảng A và gán giá trị
		b2 -> Lặp trong mỗi phần tử của Mảng A để lấy giá trị
		b3 -> Khai báo 1 biến 'sum' lưu kết quả
		b4 -> Hiển thị kết quả sau khi vòng lặp kết thúc
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
