#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	char str[127];
	gets(str);
	fflush(stdin);
	char find[127];
	gets(find);
	int count[127] = { 0, };
	int point = 0;
	for (int i = 0; i < strlen(str); i++) {
		for (int j = 0; j < strlen(find); j++) {
			if (str[i] == find[j]) {
				count[i] = j + 1;
			}
		}
	}
	for (int i = 0; i < 127; i++) {
		printf("%d ", count[i]);
	}

	return 0;//ddddddd
}
