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
//    int n = 6; // ���εĴ�С�����Ը�����Ҫ����
//    // �ϰ벿������ͼ��
//    for (i = n / 2; i <= n; i += 2) {
//        // ��ӡ�ո�
//        for (j = 1; j < n - i; j += 2) {
//            printf(" ");
//        }
//        // ��ӡ��ߵ�����
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        // ��ӡ�ո���ұߵ�����
//        for (j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    // �°벿������ͼ��
//    for (i = n; i >= 1; i -= 2) {
//        // ��ӡ�ո�
//        for (j = 1; j <= n - i; j += 2) {
//            printf(" ");
//        }
//        // ��ӡ��ߵ�����
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        // ��ӡ�ո���ұߵ�����
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