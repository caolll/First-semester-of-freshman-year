#include<stdio.h>
int main()
{
	int A;	
	printf("输入一个数：");
    scanf_s("%d",&A);
	int B;
	B = A + 12;
	printf("原值:%d\n",A);
	printf("输出:%d\n",B);
	return 0;
}