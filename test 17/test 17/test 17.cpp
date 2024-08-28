#include<stdio.h>
int main()
{
	int r;
	double v;
	scanf_s("%d", &r);
	v = 3.14 * r * r * r * 4/3;
	printf("%.5lf", v);
	return 0;
}