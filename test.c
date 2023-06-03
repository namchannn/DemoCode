#include<stdio.h>
#include<string.h>
int main() {
    char c;
    char s[100];
    scanf("%c", &c);
    scanf("%s", s);
	int i;
    int len = strlen(s);
    int index = -1;
    for (i = 0; i < len; i++) {
        if (s[i] == c) {
            index = i;
            /*
            G?i l?nh break d? d?ng vòng l?p do
            dã tìm th?y v? trí d?u tiên mà ký t? c xu?t hi?n.
            N?u không có l?nh break thì k?t qu? c?a chuong trình
            s? là v? trí cu?i cùng mà ký t? c xu?t hi?n.
            */
            break;
        }
    }
    printf("%d", index);
    return 0;
}
