#include"windows.h"
#include<stdio.h>
#include<stdlib.h>
int main() {
	int num[20] = { 0 };
	int i;
	while (1) {
		for (i = 0; i < 10; i++) {
			if (num[i] >10) {
				printf("%s", num[i] % 2 ? "天天都做牛马" : "牛马出征，寸草不生");
				Sleep(1);
			}
			else printf("      ");
			if (num[i]-- < 0) {
				num[i] = rand()%20;

			}

		}
		system("color 6");
	}
	printf("\n");
	return 0;
}
