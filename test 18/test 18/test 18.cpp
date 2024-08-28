#include<stdio.h>
#include <math.h>
int main()
{
	double a = 0, b = 0, c = 0,p,s;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	p = (a + b + c) * 0.5;
	s=sqrt(p* (p - a)* (p - b )* (p - c));
	printf("%.1lf", s);
	return 0;
}