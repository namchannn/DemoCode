#include <stdio.h>
#include <string.h>
int main(){
	int i, n = 0; int item;
	char lines[10][12];
	char temp[12]; // mang "tam"
	printf("Enter each string on a separate line");
	printf("Type 'END' when over\n");
	do{
		printf("String %d: ", n + 1);
		scanf("%s", lines[n]); // get(lines)
	}while(strcmp(lines[n++], "END"));
	/* reorder the list of strings */
	n = n - 1;
	for(item = 0; item < n - 1; ++item){
		/* find lowest of remaining strings */
		for(i = item + 1; i < n; ++i){
			if(strcmp(lines[item], lines[i]) > 0){
				/* interchange two stings */
				strcpy(temp, lines[item]);
				strcpy(lines[item], lines[i]);
				strcpy(lines[i], temp);
			}
		}
	}
	/* Display the arranged list of strings */
	printf("Recorded list of strings:\n");
    for (i = 0; i < n; ++i) {
		printf("String %d: %s\n", i + 1, lines[i]);
    }
	return 0;
}
