#include<stdio.h>
int main()
{
	//���������aΪľͷ����
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