#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
	int i,j;
	int n = 12;
	for (i = n / 2; i <= n;i+=2);

	printf("*");
	return 0;
}
//int main() {
//    int i, j;
//    int n = 6; // 心形的大小，可以根据需要调整
//    // 上半部分心形图案
//    for (i = n / 2; i <= n; i += 2) {
//        // 打印空格
//        for (j = 1; j < n - i; j += 2) {
//            printf(" ");
//        }
//        // 打印左边的心形
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        // 打印空格和右边的心形
//        for (j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    // 下半部分心形图案
//    for (i = n; i >= 1; i -= 2) {
//        // 打印空格
//        for (j = 1; j <= n - i; j += 2) {
//            printf(" ");
//        }
//        // 打印左边的心形
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        // 打印空格和右边的心形
//        for (j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}