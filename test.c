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
            G?i l?nh break d? d?ng v�ng l?p do
            d� t�m th?y v? tr� d?u ti�n m� k� t? c xu?t hi?n.
            N?u kh�ng c� l?nh break th� k?t qu? c?a chuong tr�nh
            s? l� v? tr� cu?i c�ng m� k� t? c xu?t hi?n.
            */
            break;
        }
    }
    printf("%d", index);

    return 0;
}
