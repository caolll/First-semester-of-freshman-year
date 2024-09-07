#include<stdio.h>
int main()
{
	//定义变量，a为木头长度
	int i = 0;
	double a;
	scanf_s("%lf", &a);
	do {
		a = a / 2.0;
		i += 1;
	} while (a >= 1);
	printf("%d", i);
	return 0;
}