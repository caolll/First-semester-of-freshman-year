#include<stdio.h>
int main()
{
	double a, b;
	scanf_s("%lf", &a);
	int c,d,e,f,g;
	c = a * 10;
	d = c % 10;
	e = c / 10 % 10;
	f = c / 100 % 10;
	g = c / 1000 % 10;
	b = d + e * 0.1 + f * 0.01 + g * 0.001;
	printf("%.3lf", b);
	return 0;
}