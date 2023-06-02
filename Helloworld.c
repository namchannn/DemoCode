//Author: NamChan
//Version: 1.0
#include <stdio.h> // input - output
#include <string>
int main(){
//comments:
/*
- Giai thich code
- Ghi thong tin tac gia, phien ban chuong trinh
- Bo qua nhung phan ma (code) ma chung ta khong muon compiler bien dich
*/
//1. Kieu so Nguyen (Integer)
//2. Ten bien: a
//3. Kieu du lieu (data type): int
//4. Kich thuoc (so bytes) HDH cap phat: 2 bytes
//5. Ranges (mien gia tri): -32,768:32768
	int a;
	printf("\nNhap gia tri cua a: "); // output
	scanf("%d", &a); // input
	printf("\nGia tri vua nhap: %d", a);
	
	char ch;
	fflush(stdin);
	printf("\Nhap ky tu: ");
	ch = getchar(); // Nhap vao 1 ky tu: scanf("%c", &ch);
	putchar(ch); // printf("%c", ch);
	
	char name[20];
	char adress[30];
	printf("\nNhap vao 1 chuoi: ");
	gets(name);
	puts(name);
	
	return 0;
}
